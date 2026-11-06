#ifndef HEAP_PRIO_02_H
#define HEAP_PRIO_02_H
#include <stdbool.h>
#include <stddef.h>
#define HEAP_CAPACITY 256
typedef struct { int datos[HEAP_CAPACITY]; size_t tamano; } max_heap_t;
void max_heap_init(max_heap_t *h);
bool max_heap_push(max_heap_t *h, int valor); bool max_heap_pop(max_heap_t *h, int *salida);
#endif
