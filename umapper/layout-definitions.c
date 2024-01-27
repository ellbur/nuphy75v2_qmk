
#include "layout-definitions.h"

const __flash struct mapping our_mappings[] = {
  // KC_1  0  1
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_1 },
  // KC_2  1  2
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_7 },
  // KC_3  2  3
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_5 },
  // KC_4  3  4
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_3 },
  // KC_5  4  5
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_1 },
  // KC_6  5  6
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_9 },
  // KC_7  6  7
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_0 },
  // KC_8  7  8
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_2 },
  // KC_9  8  9
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_4 },
  // KC_0  9  10
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_6 },
  // KC_MINUS  10  11
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_8 },
  // KC_EQUAL  11  12
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_GRAVE },
  // KC_Q  12  16
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = MOD1_MASK, .to_modifiers = 0, .to_action = KC_ESCAPE },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_SEMICOLON },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_SEMICOLON },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SEMICOLON },
  // KC_W  16  20
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_COMMA },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_COMMA },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_LEFT_BRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_COMMA },
  // KC_E  20  24
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_DOT },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_DOT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_RIGHT_BRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_DOT },
  // KC_R  24  30
  { .from_modifiers = MOD1_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_ALT_MASK, .to_action = KC_P },
  { .from_modifiers = MOD1_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_ALT_MASK, .to_action = KC_P },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_P },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_P },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_5 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_P },
  // KC_T  30  33
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_Y },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_Y },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Y },
  // KC_Y  33  37
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_F },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_F },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_BACKSLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_F },
  // KC_U  37  44
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_PGUP },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_PGUP },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_G },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_G },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_PGUP },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_8 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_G },
  // KC_I  44  51
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_UP },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_UP },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_C },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_C },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_UP },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_RIGHT_BRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_C },
  // KC_O  51  55
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_R },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_R },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_LEFT_BRACKET },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_R },
  // KC_P  55  59
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_L },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_L },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_BACKSLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_L },
  // KC_LBRACKET  59  62
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_SLASH },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_SLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_GRAVE },
  // KC_RBRACKET  62  65
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_6 },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_6 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_2 },
  // KC_A  65  68
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_A },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_A },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_A },
  // KC_S  68  71
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_O },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_O },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_O },
  // KC_D  71  74
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_E },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_E },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_E },
  // KC_F  74  78
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_U },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_U },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_EQUAL },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_U },
  // KC_G  78  81
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_I },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_I },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_I },
  // KC_H  81  88
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_HOME },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_HOME },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_D },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_D },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_HOME },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_7 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_D },
  // KC_J  88  97
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD5_MASK|MOD6_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK|LEFT_META_MASK, .to_action = KC_H },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_LEFT },
  { .from_modifiers = MOD5_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK, .to_action = KC_H },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_0 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_H },
  // KC_K  97  104
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_DOWN },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_DOWN },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_T },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_T },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_DOWN },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_9 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_T },
  // KC_L  104  113
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD5_MASK|MOD6_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK|LEFT_META_MASK, .to_action = KC_N },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_RIGHT },
  { .from_modifiers = MOD5_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_ALT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SLASH },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_N },
  // KC_SCOLON  113  122
  { .from_modifiers = MOD1_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_ALT_MASK, .to_action = KC_S },
  { .from_modifiers = MOD1_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_ALT_MASK, .to_action = KC_S },
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_END },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_END },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_S },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_S },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_END },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_MINUS },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_S },
  // KC_QUOTE  122  126
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_2 },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_2 },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_4 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_MINUS },
  // KC_BSLASH  126  129
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_TAB },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_TAB },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_TAB },
  // KC_Z  129  132
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_QUOTE },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_QUOTE },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_QUOTE },
  // KC_X  132  135
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_Q },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_Q },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Q },
  // KC_C  135  138
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_J },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_J },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_J },
  // KC_V  138  141
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_K },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_K },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_K },
  // KC_B  141  144
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_X },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_X },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_X },
  // KC_N  144  151
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_B },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_B },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_CTRL_MASK, .to_action = KC_LEFT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_1 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_B },
  // KC_M  151  158
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_PAGE_DOWN },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_PAGE_DOWN },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_M },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_M },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_PAGE_DOWN },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_EQUAL },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_M },
  // KC_COMMA  158  165
  { .from_modifiers = MOD4_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD4_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_SHIFT_MASK|LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_W },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_W },
  { .from_modifiers = MOD4_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_CTRL_MASK, .to_action = KC_RIGHT },
  { .from_modifiers = MOD1_MASK, .from_absorbing_modifiers = 0, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_3 },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_W },
  // KC_DOT  165  168
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_V },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_V },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_V },
  // KC_SLASH  168  171
  { .from_modifiers = MOD2_MASK, .from_absorbing_modifiers = MOD2_MASK, .to_modifiers = LEFT_SHIFT_MASK, .to_action = KC_Z },
  { .from_modifiers = MOD3_MASK, .from_absorbing_modifiers = MOD3_MASK, .to_modifiers = RIGHT_SHIFT_MASK, .to_action = KC_Z },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_Z },
  // KC_SPACE  171  174
  { .from_modifiers = MOD1_MASK|MOD2_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_ALT_MASK, .to_action = KC_N },
  { .from_modifiers = MOD1_MASK|MOD3_MASK, .from_absorbing_modifiers = 0, .to_modifiers = RIGHT_ALT_MASK, .to_action = KC_N },
  { .from_modifiers = 0, .from_absorbing_modifiers = 0, .to_modifiers = 0, .to_action = KC_SPACE },
};


const __flash struct key_definition our_key_definitions[] = {
  [KC_TAB] = { modifier_key_style, .modifier_key = { MOD4_MASK, 0 } },
  [KC_GRAVE] = { modifier_key_style, .modifier_key = { MOD6_MASK, LEFT_META_MASK } },
  [KC_LEFT_SHIFT] = { modifier_key_style, .modifier_key = { MOD2_MASK, LEFT_SHIFT_MASK } },
  [KC_RIGHT_SHIFT] = { modifier_key_style, .modifier_key = { MOD3_MASK, RIGHT_SHIFT_MASK } },
  [KC_LALT] = { modifier_key_style, .modifier_key = { MOD5_MASK, LEFT_ALT_MASK } },
  [KC_CAPS_LOCK] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },
  [KC_RALT] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },
  [KC_LGUI] = { modifier_key_style, .modifier_key = { MOD1_MASK, 0 } },

  [KC_1] = { action_key_style, .action_key = { .mappings_start = 0, .mappings_end = 1 } },
  [KC_2] = { action_key_style, .action_key = { .mappings_start = 1, .mappings_end = 2 } },
  [KC_3] = { action_key_style, .action_key = { .mappings_start = 2, .mappings_end = 3 } },
  [KC_4] = { action_key_style, .action_key = { .mappings_start = 3, .mappings_end = 4 } },
  [KC_5] = { action_key_style, .action_key = { .mappings_start = 4, .mappings_end = 5 } },
  [KC_6] = { action_key_style, .action_key = { .mappings_start = 5, .mappings_end = 6 } },
  [KC_7] = { action_key_style, .action_key = { .mappings_start = 6, .mappings_end = 7 } },
  [KC_8] = { action_key_style, .action_key = { .mappings_start = 7, .mappings_end = 8 } },
  [KC_9] = { action_key_style, .action_key = { .mappings_start = 8, .mappings_end = 9 } },
  [KC_0] = { action_key_style, .action_key = { .mappings_start = 9, .mappings_end = 10 } },
  [KC_MINUS] = { action_key_style, .action_key = { .mappings_start = 10, .mappings_end = 11 } },
  [KC_EQUAL] = { action_key_style, .action_key = { .mappings_start = 11, .mappings_end = 12 } },
  [KC_Q] = { action_key_style, .action_key = { .mappings_start = 12, .mappings_end = 16 } },
  [KC_W] = { action_key_style, .action_key = { .mappings_start = 16, .mappings_end = 20 } },
  [KC_E] = { action_key_style, .action_key = { .mappings_start = 20, .mappings_end = 24 } },
  [KC_R] = { action_key_style, .action_key = { .mappings_start = 24, .mappings_end = 30 } },
  [KC_T] = { action_key_style, .action_key = { .mappings_start = 30, .mappings_end = 33 } },
  [KC_Y] = { action_key_style, .action_key = { .mappings_start = 33, .mappings_end = 37 } },
  [KC_U] = { action_key_style, .action_key = { .mappings_start = 37, .mappings_end = 44 } },
  [KC_I] = { action_key_style, .action_key = { .mappings_start = 44, .mappings_end = 51 } },
  [KC_O] = { action_key_style, .action_key = { .mappings_start = 51, .mappings_end = 55 } },
  [KC_P] = { action_key_style, .action_key = { .mappings_start = 55, .mappings_end = 59 } },
  [KC_LEFT_BRACKET] = { action_key_style, .action_key = { .mappings_start = 59, .mappings_end = 62 } },
  [KC_RIGHT_BRACKET] = { action_key_style, .action_key = { .mappings_start = 62, .mappings_end = 65 } },
  [KC_A] = { action_key_style, .action_key = { .mappings_start = 65, .mappings_end = 68 } },
  [KC_S] = { action_key_style, .action_key = { .mappings_start = 68, .mappings_end = 71 } },
  [KC_D] = { action_key_style, .action_key = { .mappings_start = 71, .mappings_end = 74 } },
  [KC_F] = { action_key_style, .action_key = { .mappings_start = 74, .mappings_end = 78 } },
  [KC_G] = { action_key_style, .action_key = { .mappings_start = 78, .mappings_end = 81 } },
  [KC_H] = { action_key_style, .action_key = { .mappings_start = 81, .mappings_end = 88 } },
  [KC_J] = { action_key_style, .action_key = { .mappings_start = 88, .mappings_end = 97 } },
  [KC_K] = { action_key_style, .action_key = { .mappings_start = 97, .mappings_end = 104 } },
  [KC_L] = { action_key_style, .action_key = { .mappings_start = 104, .mappings_end = 113 } },
  [KC_SEMICOLON] = { action_key_style, .action_key = { .mappings_start = 113, .mappings_end = 122 } },
  [KC_QUOTE] = { action_key_style, .action_key = { .mappings_start = 122, .mappings_end = 126 } },
  [KC_BACKSLASH] = { action_key_style, .action_key = { .mappings_start = 126, .mappings_end = 129 } },
  [KC_Z] = { action_key_style, .action_key = { .mappings_start = 129, .mappings_end = 132 } },
  [KC_X] = { action_key_style, .action_key = { .mappings_start = 132, .mappings_end = 135 } },
  [KC_C] = { action_key_style, .action_key = { .mappings_start = 135, .mappings_end = 138 } },
  [KC_V] = { action_key_style, .action_key = { .mappings_start = 138, .mappings_end = 141 } },
  [KC_B] = { action_key_style, .action_key = { .mappings_start = 141, .mappings_end = 144 } },
  [KC_N] = { action_key_style, .action_key = { .mappings_start = 144, .mappings_end = 151 } },
  [KC_M] = { action_key_style, .action_key = { .mappings_start = 151, .mappings_end = 158 } },
  [KC_COMMA] = { action_key_style, .action_key = { .mappings_start = 158, .mappings_end = 165 } },
  [KC_DOT] = { action_key_style, .action_key = { .mappings_start = 165, .mappings_end = 168 } },
  [KC_SLASH] = { action_key_style, .action_key = { .mappings_start = 168, .mappings_end = 171 } },
  [KC_SPACE] = { action_key_style, .action_key = { .mappings_start = 171, .mappings_end = 174 } },
};

const uint8_t our_num_keys = (sizeof our_key_definitions)/(sizeof our_key_definitions[0]);
