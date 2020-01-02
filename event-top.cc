
#include "event-top.h"

thread_local void (*thread_local_segv_handler) (int);
