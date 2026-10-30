#ifndef EJERCICIO_COLA_QUEUE_02_H
#define EJERCICIO_COLA_QUEUE_02_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación deque_init */
void deque_init(deque_t *d);
/* Operación push_back */
void push_back(deque_t *d, int v);
/* Operación pop_front */
int pop_front(deque_t *d, int *out);

#endif /* EJERCICIO_COLA_QUEUE_02_H */
