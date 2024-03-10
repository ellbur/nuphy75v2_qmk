
#include "main.h"
#include "../quantum/logging/debug.h"
#include <stdint.h>

#include "event.h"
#include "vanilla-layout.h"
#include "layout-definitions.h"
#include "mapping.h"
#include "../quantum/action_util.h"
#include "../tmk_core/protocol/report.h"
//#include "../quantum/debug.h"

struct state state = { };

static void init_state(void) {
  for (uint8_t i=0; i<MAX_KEYS; i++) {
    state.input_pressed_keys[i] = 0;
  }
  state.pressed_modifier_mask = 0;
  state.num_pressed_modifiers = 0;
  for (uint8_t i=0; i<MAX_MODIFIERS; i++) {
    state.pressed_modifiers[i].input_key = 0;
    state.pressed_modifiers[i].modifier_mask = 0;
  }
  state.output_modifier_mask = 0;
  state.num_pressed_output_modifiers = 0;
  for (uint8_t i=0; i<MAX_MODIFIERS; i++) {
    state.pressed_output_modifiers[i].input_key = 0;
    state.pressed_output_modifiers[i].output_modifier_mask = 0;
  }
  state.has_pressed_action_key = false;
  state.pressed_action_key.trigger = 0;
  state.pressed_action_key.to_modifiers = 0;
  state.pressed_action_key.to_action = 0;
}

static void output_event_routine(void *data, enum event_type t, key_code k) {
  if (t == PRESSED) {
    add_key_to_report(keyboard_report, k);
    send_keyboard_report();
  }
  else if (t == RELEASED) {
    del_key_from_report(keyboard_report, k);
    send_keyboard_report();
  }
}

void umapper_init(void) {
  init_state();
}

void umapper_action_exec(keyevent_t event) {
  struct layout our_layout = {
    .mappings = our_mappings,
    .key_definitions = our_key_definitions,
    .num_keys = our_num_keys
  };

  if (event.key.row < VANILLA_LAYOUT_ROWS && event.key.col < VANILLA_LAYOUT_COLS) {
    key_code k = vanilla_layout[event.key.row][event.key.col];

    if (k != 0) {
      step(&our_layout, &state, event.pressed ? PRESSED : RELEASED, k, output_event_routine, 0);
    }
  }
}

struct pass_through_data {
  keyevent_t orig_event;
  void (*action_exec_orig)(keyevent_t event);
};

static void output_event_routine_2(void *data, enum event_type t, key_code k) {
  struct pass_through_data *pass_through_data = data;

  uint8_t col = pass_through_data->orig_event.key.col;
  uint8_t row = pass_through_data->orig_event.key.row;

  if (k < MAX_KEYS) {
    col = vanilla_layout_inv_col[k];
    row = vanilla_layout_inv_row[k];
  }

  keypos_t key = {
    .col = col,
    .row = row
  };

  dprintf("output_event_routine_2 [%d, %d] %d\n", key.row, key.col, t == PRESSED);

  keyevent_t event = {
    .key = key,
    .pressed = t == PRESSED,
    .time = pass_through_data->orig_event.time,
    .type = pass_through_data->orig_event.type
  };

  pass_through_data->action_exec_orig(event);
}

static keyevent_t last_event = { .key = { .col = 0xFF, .row = 0xFF}, .pressed = true };

void umapper_action_exec_2(keyevent_t event, void (*action_exec_orig)(keyevent_t event)) {
  if (last_event.pressed == event.pressed && last_event.key.col == event.key.col && last_event.key.row == event.key.row) {
    return;
  }

  last_event = event;

  dprintf("umapper_action_exec_2 %d %d [%d, %d] %d\n", event.time, event.type, event.key.row, event.key.col, event.pressed);

  struct layout our_layout = {
    .mappings = our_mappings,
    .key_definitions = our_key_definitions,
    .num_keys = our_num_keys
  };

  struct pass_through_data our_pass_through_data = {
    .action_exec_orig = action_exec_orig,
    .orig_event = event
  };

  if (event.key.row < VANILLA_LAYOUT_ROWS && event.key.col < VANILLA_LAYOUT_COLS) {
    key_code k = vanilla_layout[event.key.row][event.key.col];

    if (k != 0) {
      step(&our_layout, &state, event.pressed ? PRESSED : RELEASED, k, output_event_routine_2, &our_pass_through_data);
    }
    else {
      action_exec_orig(event);
    }
  }
  else {
    action_exec_orig(event);
  }
}

