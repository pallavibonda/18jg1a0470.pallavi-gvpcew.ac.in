#ifndef UNITY_INTERNALS_H
#define UNITY_INTERNALS_H

#ifdef UNITY_INCLUDE_CONFIG_H
#include "unity_config.h"
#endif

#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif

#ifndef UNITY_EXCLUDE_MATH_H
#include <math.h>
#endif

#ifndef UNITY_EXCLUDE_STDDEF_H
#include <stddef.h>
#endif

#ifdef UNITY_INCLUDE_PRINT_FORMATTED
#include <stdarg.h>
#endif

/* Unity Attempts to Auto-Detect Integer Types
 * Attempt 1: UINT_MAX, ULONG_MAX in <limits.h>, or default to 32 bits
 * Attempt 2: UINTPTR_MAX in <stdint.h>, or default to same size as long
 * The user may override any of these derived constants:
 * UNITY_INT_WIDTH, UNITY_LONG_WIDTH, UNITY_POINTER_WIDTH */
