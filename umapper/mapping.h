
#pragma once

#include "layouts.h"
#include "event.h"

#ifdef __cplusplus
extern "C" {
#endif

struct pressed_modifier {
  key_code input_key;
  modifier_set modifier_mask;
  modifier_set output_modifier_mask;
};

struct pressed_output_modifier {
  key_code input_key;
  modifier_set output_modifier_mask;
};

struct pressed_action_key {
  key_code trigger;
  modifier_set to_modifiers;
  key_code to_action;
};

struct state {
  bool input_pressed_keys[MAX_KEYS];
  
  modifier_set pressed_modifier_mask;
  uint8_t num_pressed_modifiers;
  struct pressed_modifier pressed_modifiers[MAX_MODIFIERS];
  
  modifier_set output_modifier_mask;
  uint8_t num_pressed_output_modifiers;
  struct pressed_output_modifier pressed_output_modifiers[MAX_MODIFIERS];
  
  bool has_pressed_action_key;
  struct pressed_action_key pressed_action_key;
  
  bool has_absorbed_set;
  modifier_set absorbed_set;
  key_code absorbed_trigger;
};

typedef void event_callback_t(void *data, enum event_type, key_code);

void step(struct layout const *layout, struct state *state, enum event_type t, key_code k, event_callback_t *cb, void *data);

#ifdef __cplusplus
}
#endif

