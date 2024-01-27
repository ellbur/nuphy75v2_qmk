
#pragma once

#include "../quantum/keyboard.h"

void umapper_init(void);
void umapper_action_exec(keyevent_t event);
void umapper_action_exec_2(keyevent_t event, void (*action_exec_orig)(keyevent_t event));

