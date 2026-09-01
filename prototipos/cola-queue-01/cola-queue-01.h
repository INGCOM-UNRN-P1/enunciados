#ifndef EJERCICIO_COLA_QUEUE_01_H
#define EJERCICIO_COLA_QUEUE_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación cola_init */
void cola_init(t_ColaCircular *c);
/* Operación cola_enqueue */
int cola_enqueue(t_ColaCircular *c, int val);
/* Operación cola_dequeue */
int cola_dequeue(t_ColaCircular *c, int *out);

#endif /* EJERCICIO_COLA_QUEUE_01_H */
