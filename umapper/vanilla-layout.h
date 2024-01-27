
#pragma once

#include "keys.h"

#if AVR
#include <avr/pgmspace.h>
#else
#define __flash
#endif

#define VANILLA_LAYOUT_ROWS 6
#define VANILLA_LAYOUT_COLS 16

extern const __flash key_code vanilla_layout[VANILLA_LAYOUT_ROWS][VANILLA_LAYOUT_COLS];

extern const __flash uint8_t vanilla_layout_inv_row[];
extern const __flash uint8_t vanilla_layout_inv_col[];

