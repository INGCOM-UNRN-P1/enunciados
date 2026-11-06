#ifndef HEAP_PRIO_08_H
#define HEAP_PRIO_08_H
#include <stdbool.h>
#include <stddef.h>
#define HEAP_CAPACITY 256

bool heap_remove_at(int *heap, size_t *n, size_t indice);
bool es_min_heap(const int *a, size_t n);
#endif
