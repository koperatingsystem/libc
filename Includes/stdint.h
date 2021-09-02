// Copyright (c) 2021 The kOS authors.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software.
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include <sys/cdefs.h>

// TODO: add more stuff to comply with C11 / C17

typedef __INT8_TYPE__       int8_t;
typedef __UINT8_TYPE__      uint8_t;
#define INT8_MIN            (-__INT8_MAX__ - 1)
#define INT8_MAX            __INT8_MAX__
#define UINT8_MAX           __UINT8_MAX__

typedef __INT16_TYPE__      int16_t;
typedef __UINT16_TYPE__     uint16_t;
#define INT16_MIN           (-__INT16_MAX__ - 1)
#define INT16_MAX           __INT16_MAX__
#define UINT16_MAX          __UINT16_MAX__

#ifdef __INT24_TYPE__
typedef __INT24_TYPE__      int24_t;
typedef __UINT24_TYPE__     uint24_t;
#define INT24_MIN           (-__INT24_MAX__ - 1)
#define INT24_MAX           __INT24_MAX__
#define UINT24_MAX          __UINT24_MAX__
#endif

typedef __INT32_TYPE__      int32_t;
typedef __UINT32_TYPE__     uint32_t;
#define INT32_MIN           (-__INT32_MAX__ - 1)
#define INT32_MAX           __INT32_MAX__
#define UINT32_MAX          __UINT32_MAX__

#ifdef __INT40_TYPE__
typedef __INT40_TYPE__      int40_t;
typedef __UINT40_TYPE__     uint40_t;
#define INT40_MIN           (-__INT40_MAX__ - 1)
#define INT40_MAX           __INT40_MAX__
#define UINT40_MAX          __UINT40_MAX__
#endif

#ifdef __INT48_TYPE__
typedef __INT48_TYPE__      int48_t;
typedef __UINT48_TYPE__     uint48_t;
#define INT48_MIN           (-__INT48_MAX__ - 1)
#define INT48_MAX           __INT48_MAX__
#define UINT48_MAX          __UINT48_MAX__
#endif

#ifdef __INT56_TYPE__
typedef __INT56_TYPE__      int56_t;
typedef __UINT56_TYPE__     uint56_t;
#define INT56_MIN           (-__INT56_MAX__ - 1)
#define INT56_MAX           __INT56_MAX__
#define UINT56_MAX          __UINT56_MAX__
#endif

typedef __INT64_TYPE__      int64_t;
typedef __UINT64_TYPE__     uint64_t;
#define INT64_MIN           (-__INT64_MAX__ - 1)
#define INT64_MAX           __INT64_MAX__
#define UINT64_MAX          __UINT64_MAX__

typedef __INTPTR_TYPE__     intptr_t;
typedef __UINTPTR_TYPE__    uintptr_t;
#define INTPTR_MIN          (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX          __INTPTR_MAX__
#define UINTPTR_MAX         __UINTPTR_MAX__

typedef __INTMAX_TYPE__     intmax_t;
typedef __UINTMAX_TYPE__    uintmax_t;
#define INTMAX_MIN          (-__INTMAX_MAX__ - 1)
#define INTMAX_MAX          __INTMAX_MAX__
#define UINTMAX_MAX         __UINTMAX_MAX__
