#ifndef EJERCICIO_COLA_QUEUE_01_H
#define EJERCICIO_COLA_QUEUE_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación cola_init */
void cola_init(cola_circular_t *c);
/* Operación cola_enqueue */
int cola_enqueue(cola_circular_t *c, int val);
/* Operación cola_dequeue */
int cola_dequeue(cola_circular_t *c, int *out);

#endif /* EJERCICIO_COLA_QUEUE_01_H */
