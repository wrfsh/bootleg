#pragma once

typedef unsigned char   uint8_t;
typedef unsigned short  uint16_t;
typedef unsigned int    uint32_t;
typedef unsigned int    uintptr_t;
typedef unsigned long   size_t;
typedef long            ssize_t;

typedef _Bool bool;

#define NULL ((void*)0)

#define HEAP_PTR_ALIGNMENT (_Alignof(uintptr_t))
