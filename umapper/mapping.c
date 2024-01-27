
#include "mapping.h"
#include "keys.h"

static void release_modifiers(modifier_set mask, event_callback_t *cb, void *data) {
  if (mask & LEFT_SHIFT_MASK) cb(data, RELEASED, KC_LEFT_SHIFT);
  if (mask & RIGHT_SHIFT_MASK) cb(data, RELEASED, KC_RIGHT_SHIFT);
  if (mask & LEFT_CTRL_MASK) cb(data, RELEASED, KC_LEFT_CTRL);
  if (mask & RIGHT_CTRL_MASK) cb(data, RELEASED, KC_RIGHT_CTRL);
  if (mask & LEFT_ALT_MASK) cb(data, RELEASED, KC_LALT);
  if (mask & RIGHT_ALT_MASK) cb(data, RELEASED, KC_RALT);
  if (mask & LEFT_META_MASK) cb(data, RELEASED, KC_LGUI);
  if (mask & RIGHT_META_MASK) cb(data, RELEASED, KC_RGUI);
}

static void press_modifiers(modifier_set mask, event_callback_t *cb, void *data) {
  if (mask & LEFT_SHIFT_MASK) cb(data, PRESSED, KC_LEFT_SHIFT);
  if (mask & RIGHT_SHIFT_MASK) cb(data, PRESSED, KC_RIGHT_SHIFT);
  if (mask & LEFT_CTRL_MASK) cb(data, PRESSED, KC_LEFT_CTRL);
  if (mask & RIGHT_CTRL_MASK) cb(data, PRESSED, KC_RIGHT_CTRL);
  if (mask & LEFT_ALT_MASK) cb(data, PRESSED, KC_LALT);
  if (mask & RIGHT_ALT_MASK) cb(data, PRESSED, KC_RALT);
  if (mask & LEFT_META_MASK) cb(data, PRESSED, KC_LGUI);
  if (mask & RIGHT_META_MASK) cb(data, PRESSED, KC_RGUI);
}

static void add_action_mapping(struct state *state, key_code k, struct mapping const __flash *mapping, event_callback_t *cb, void *data) {
  modifier_set allowed_modifiers = 0;
  for (uint8_t i=0; i<state->num_pressed_modifiers; i++) {
    if ((state->pressed_modifiers[i].modifier_mask & mapping->from_modifiers) == 0) {
      allowed_modifiers |= state->pressed_modifiers[i].output_modifier_mask;
    }
  }

  release_modifiers(state->output_modifier_mask & ~allowed_modifiers & ~mapping->to_modifiers, cb, data);
  state->output_modifier_mask &= ~(~allowed_modifiers & ~mapping->to_modifiers);

  if (state->has_pressed_action_key) {
    release_modifiers(state->pressed_action_key.to_modifiers & ~mapping->to_modifiers & ~state->output_modifier_mask, cb, data);
    state->pressed_action_key.to_modifiers &= ~(~mapping->to_modifiers & ~state->output_modifier_mask);
    cb(data, RELEASED, state->pressed_action_key.to_action);
  }

  press_modifiers(mapping->to_modifiers & ~state->output_modifier_mask, cb, data);
  cb(data, PRESSED, mapping->to_action);

  state->has_pressed_action_key = true;
  state->pressed_action_key.to_action = mapping->to_action;
  state->pressed_action_key.to_modifiers = mapping->to_modifiers;
  state->pressed_action_key.trigger = k;

  if (mapping->from_absorbing_modifiers != 0) {
    state->has_absorbed_set = true;
    state->absorbed_set = mapping->from_absorbing_modifiers;
    state->absorbed_trigger = k;
  }
}

static void add_modifier(struct state *state, key_code k, struct modifier_key const __flash *modifier_key, event_callback_t *cb, void *data) {
  if (state->num_pressed_modifiers < MAX_MODIFIERS) {
    int i = state->num_pressed_modifiers;

    state->pressed_modifiers[i].input_key = k;
    state->pressed_modifiers[i].modifier_mask = modifier_key->modifier_mask;
    state->pressed_modifiers[i].output_modifier_mask = modifier_key->output_modifier_mask;
    state->pressed_modifier_mask |= modifier_key->modifier_mask;

    state->num_pressed_modifiers += 1;
  }

  if (state->num_pressed_output_modifiers < MAX_MODIFIERS) {
    int i = state->num_pressed_output_modifiers;

    state->pressed_output_modifiers[i].input_key = k;
    state->pressed_output_modifiers[i].output_modifier_mask = modifier_key->output_modifier_mask;
    press_modifiers(modifier_key->output_modifier_mask & ~state->output_modifier_mask, cb, data);
    state->output_modifier_mask |= modifier_key->output_modifier_mask;

    state->num_pressed_output_modifiers += 1;
  }
}

static void newly_press(struct layout const *layout, struct state *state, key_code k, event_callback_t *cb, void *data) {
  if (k >= layout->num_keys) {
    cb(data, PRESSED, k);
    return;
  }

  if (state->has_absorbed_set && state->absorbed_trigger != k) {
    if (state->pressed_modifier_mask & state->absorbed_set) {
      for (uint8_t i=0; i<state->num_pressed_modifiers; i++) {
        if (state->pressed_modifiers[i].modifier_mask & state->absorbed_set) {
          release_modifiers(state->output_modifier_mask & state->pressed_modifiers[i].output_modifier_mask, cb, data);
          state->output_modifier_mask &= ~state->pressed_modifiers[i].output_modifier_mask;
        }
      }
    }

    state->pressed_modifier_mask &= ~state->absorbed_set;
    state->has_absorbed_set = false;
  }

  if (layout->key_definitions[k].style == pass_through_key_style) {
    cb(data, PRESSED, k);
  }
  else if (layout->key_definitions[k].style == action_key_style) {
    struct action_key const __flash *action_key = &layout->key_definitions[k].action_key;
    for (uint8_t i=action_key->mappings_start; i<action_key->mappings_end; i++) {
      struct mapping const __flash *m = layout->mappings + i;
      if (!(m->from_modifiers & ~state->pressed_modifier_mask)) {
        add_action_mapping(state, k, m, cb, data);
        break;
      }
    }
  }
  else if (layout->key_definitions[k].style == modifier_key_style) {
    add_modifier(state, k, &layout->key_definitions[k].modifier_key, cb, data);
  }
}

static void do_press(struct layout const *layout, struct state *state, key_code k, event_callback_t *cb, void *data) {
  if (!state->input_pressed_keys[k]) {
    state->input_pressed_keys[k] = true;
    newly_press(layout, state, k, cb, data);
  }
}

static void remove_action_mapping(struct state *state, key_code k, struct action_key const *action_key, event_callback_t *cb, void *data) {
  if (state->has_pressed_action_key) {
    if (state->pressed_action_key.trigger == k) {
      cb(data, RELEASED, state->pressed_action_key.to_action);
      release_modifiers(state->pressed_action_key.to_modifiers & ~state->output_modifier_mask, cb, data);
      state->has_pressed_action_key = false;
    }
  }
}

static void remove_modifier(struct state *state, key_code k, struct modifier_key const *modifier_key, event_callback_t *cb, void *data) {
  for (uint8_t i=0; i<state->num_pressed_modifiers; i++) {
    if (state->pressed_modifiers[i].input_key == k) {
      for (uint8_t j=i+1; j<state->num_pressed_modifiers; j++) {
        state->pressed_modifiers[j-1].input_key = state->pressed_modifiers[j].input_key;
        state->pressed_modifiers[j-1].modifier_mask = state->pressed_modifiers[j].modifier_mask;
      }

      state->num_pressed_modifiers -= 1;

      modifier_set new_mask = 0;
      for (uint8_t j=0; j<state->num_pressed_modifiers; j++) {
        new_mask |= state->pressed_modifiers[j].modifier_mask;
      }

      state->pressed_modifier_mask = new_mask;

      break;
    }
  }

  for (uint8_t i=0; i<state->num_pressed_output_modifiers; i++) {
    if (state->pressed_output_modifiers[i].input_key == k) {
      for (uint8_t j=i+1; j<state->num_pressed_output_modifiers; j++) {
        state->pressed_output_modifiers[j-1].input_key = state->pressed_output_modifiers[j].input_key;
        state->pressed_output_modifiers[j-1].output_modifier_mask = state->pressed_output_modifiers[j].output_modifier_mask;
      }

      state->num_pressed_output_modifiers -= 1;

      modifier_set old_mask = state->output_modifier_mask;
      modifier_set new_mask = 0;
      for (uint8_t j=0; j<state->num_pressed_output_modifiers; j++) {
        new_mask |= state->pressed_output_modifiers[j].output_modifier_mask;
      }
      new_mask &= old_mask;

      state->output_modifier_mask = new_mask;

      modifier_set base_mask = new_mask;
      if (state->has_pressed_action_key) {
        base_mask |= state->pressed_action_key.to_modifiers;
      }

      release_modifiers(old_mask & ~new_mask, cb, data);

      break;
    }
  }
}

static void newly_release(struct layout const *layout, struct state *state, key_code k, event_callback_t *cb, void *data) {
  if (k >= layout->num_keys) {
    cb(data, RELEASED, k);
    return;
  }

  if (layout->key_definitions[k].style == pass_through_key_style) {
    cb(data, RELEASED, k);
  }
  else if (layout->key_definitions[k].style == action_key_style) {
    struct action_key const *action_key = &layout->key_definitions[k].action_key;
    remove_action_mapping(state, k, action_key, cb, data);
  }
  else if (layout->key_definitions[k].style == modifier_key_style) {
    remove_modifier(state, k, &layout->key_definitions[k].modifier_key, cb, data);
  }
}

static void do_release(struct layout const *layout, struct state *state, key_code k, event_callback_t *cb, void *data) {
  if (state->input_pressed_keys[k]) {
    state->input_pressed_keys[k] = false;
    newly_release(layout, state, k, cb, data);
  }
}

void step(struct layout const *layout, struct state *state, enum event_type t, key_code k, event_callback_t *cb, void *data) {
  if (t == PRESSED) {
    do_press(layout, state, k, cb, data);
  }
  else {
    do_release(layout, state, k, cb, data);
  }
}

