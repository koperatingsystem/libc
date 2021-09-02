# Copyright (c) 2021 The kOS authors.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software.
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

cmake_minimum_required(VERSION 3.0.0)

project(kOS.libc LANGUAGES C VERSION 1.0.0)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/BuildScripts)

include(SystemCheck)

add_library(kOS.libc STATIC
    ${CMAKE_CURRENT_LIST_DIR}/Includes/sys/cdefs.h
    ${CMAKE_CURRENT_LIST_DIR}/Includes/stdbool.h
    ${CMAKE_CURRENT_LIST_DIR}/Includes/stddef.h
    ${CMAKE_CURRENT_LIST_DIR}/Includes/stdint.h
    ${CMAKE_CURRENT_LIST_DIR}/Includes/stdio.h
    ${CMAKE_CURRENT_LIST_DIR}/Includes/stdlib.h
    ${CMAKE_CURRENT_LIST_DIR}/Includes/string.h

    ${CMAKE_CURRENT_LIST_DIR}/Sources/stdio/printf.c
    ${CMAKE_CURRENT_LIST_DIR}/Sources/stdio/putchar.c
    ${CMAKE_CURRENT_LIST_DIR}/Sources/stdio/puts.c

    ${CMAKE_CURRENT_LIST_DIR}/Sources/stdlib/abort.c

    ${CMAKE_CURRENT_LIST_DIR}/Sources/string/memcmp.c
    ${CMAKE_CURRENT_LIST_DIR}/Sources/string/memcpy.c
    ${CMAKE_CURRENT_LIST_DIR}/Sources/string/memmove.c
    ${CMAKE_CURRENT_LIST_DIR}/Sources/string/memset.c
    ${CMAKE_CURRENT_LIST_DIR}/Sources/string/strlen.c
)

target_compile_options(kOS.libc
    PUBLIC -fshort-wchar -fno-builtin -ffreestanding -nostdinc
    PRIVATE -Wall -Werror
)

target_include_directories(kOS.libc PUBLIC ${CMAKE_CURRENT_LIST_DIR}/Includes)

target_link_options(kOS.libc PRIVATE -nostdlib)
