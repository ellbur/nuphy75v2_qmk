
#include "main.h"

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

