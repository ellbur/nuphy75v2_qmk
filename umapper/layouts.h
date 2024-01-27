
#pragma once

#if AVR
#include <avr/pgmspace.h>
#else
#define __flash
#endif

#include "keys.h"
#include <inttypes.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_MODIFIERS 8

typedef uint8_t modifier_set;

#define LEFT_SHIFT_MASK 0x01
#define RIGHT_SHIFT_MASK 0x02
#define LEFT_CTRL_MASK 0x04
#define RIGHT_CTRL_MASK 0x08
#define LEFT_ALT_MASK 0x10
#define RIGHT_ALT_MASK 0x20
#define LEFT_META_MASK 0x40
#define RIGHT_META_MASK 0x80

#define MOD1_MASK 0x01
#define MOD2_MASK 0x02
#define MOD3_MASK 0x04
#define MOD4_MASK 0x08
#define MOD5_MASK 0x10
#define MOD6_MASK 0x20
#define MOD7_MASK 0x40
#define MOD8_MASK 0x80

struct mapping {
  modifier_set from_modifiers;
  modifier_set from_absorbing_modifiers;
  modifier_set to_modifiers;
  key_code to_action;
};

enum key_style {
  pass_through_key_style = 0,
  action_key_style = 1,
  modifier_key_style = 2,
};

struct action_key {
  uint8_t mappings_start;
  uint8_t mappings_end;
};

struct modifier_key {
  modifier_set modifier_mask;
  modifier_set output_modifier_mask;
};

struct key_definition {
  enum key_style style;
  union {
    struct action_key action_key;
    struct modifier_key modifier_key;
  };
};

struct layout {
  int num_keys;
  struct mapping const __flash *mappings;
  struct key_definition const __flash *key_definitions;
};

#ifdef __cplusplus
}
#endif

