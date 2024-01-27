
#pragma once

#include "keys.h"

#ifdef __cplusplus
extern "C" {
#endif

enum event_type {
  PRESSED = 0,
  RELEASED = 1
};

struct event {
  enum event_type t;
  key_code k;
};

#ifdef __cplusplus
}
#endif

