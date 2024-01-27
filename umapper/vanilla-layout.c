
#include "vanilla-layout.h"
#include <stdint.h>

const __flash key_code vanilla_layout[VANILLA_LAYOUT_ROWS][VANILLA_LAYOUT_COLS] = {
  { KC_ESCAPE, 0, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_HOME },
  { KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BACKSPACE, KC_PAGE_UP },
  { KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH, KC_PAGE_DOWN },
  { KC_CAPS_LOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, KC_UP, KC_ENTER, KC_END },
  { KC_LEFT_SHIFT, 0, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_DOWN, KC_RIGHT_SHIFT, KC_DEL },
  { KC_LEFT_CTRL, KC_LGUI, KC_LALT, 0, 0, 0, KC_SPACE, 0, 0, 0, KC_RALT, KC_MENU, KC_RIGHT_CTRL, KC_LEFT, KC_RIGHT },
};

const __flash uint8_t vanilla_layout_inv_row[] = {
  // TODO
};

const __flash uint8_t vanilla_layout_inv_col[] = {
  // TODO
};

