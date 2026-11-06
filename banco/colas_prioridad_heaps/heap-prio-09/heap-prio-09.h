#ifndef HEAP_PRIO_09_H
#define HEAP_PRIO_09_H
#include <stdbool.h>
#include <stddef.h>
#define HEAP_CAPACITY 256

bool heap_merge(const int *a,size_t n,const int *b,size_t m,int *destino);
bool es_min_heap(const int *a, size_t n);
#endif
