#ifndef EJERCICIO_HEAP_PRIO_01_H
#define EJERCICIO_HEAP_PRIO_01_H

#include <stdbool.h>
#include <stddef.h>

typedef struct {
    int *datos;
    size_t tamano;
    size_t capacidad;
} min_heap_t;

void heap_init(min_heap_t *h);
void heap_push(min_heap_t *h, int val);
int heap_pop(min_heap_t *h, int *out);
void heap_destroy(min_heap_t *h);

#endif
