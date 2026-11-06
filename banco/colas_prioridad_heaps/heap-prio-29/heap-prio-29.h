#ifndef EJERCICIO_HEAP_PRIO_29_H
#define EJERCICIO_HEAP_PRIO_29_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
bool min_heap_serialize(const int32_t*a,size_t n,char*out,size_t cap,size_t*needed);bool min_heap_parse(const char*text,int32_t*out,size_t cap,size_t*n);
#endif
