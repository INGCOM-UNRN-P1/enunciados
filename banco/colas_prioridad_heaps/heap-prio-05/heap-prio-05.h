#ifndef HEAP_PRIO_05_H
#define HEAP_PRIO_05_H
#include <stdbool.h>
#include <stddef.h>
#define HEAP_CAPACITY 256

bool min_heap_decrease_key(int *heap, size_t n, size_t indice, int nuevo_valor);
bool es_min_heap(const int *a, size_t n);
#endif
