#ifndef HEAP_PRIO_06_H
#define HEAP_PRIO_06_H
#include <stdbool.h>
#include <stddef.h>
#define HEAP_CAPACITY 256

bool max_heap_increase_key(int *heap, size_t n, size_t indice, int nuevo_valor);
bool es_max_heap(const int *a, size_t n);
#endif
