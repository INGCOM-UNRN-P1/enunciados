#ifndef EJERCICIO_HEAP_PRIO_01_H
#define EJERCICIO_HEAP_PRIO_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación heap_init */
void heap_init(min_heap_t *h);
/* Operación heap_push */
void heap_push(min_heap_t *h, int val);
/* Operación heap_pop */
int heap_pop(min_heap_t *h, int *out);

#endif /* EJERCICIO_HEAP_PRIO_01_H */
