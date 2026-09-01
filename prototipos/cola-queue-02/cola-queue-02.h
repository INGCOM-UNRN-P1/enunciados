#ifndef EJERCICIO_COLA_QUEUE_02_H
#define EJERCICIO_COLA_QUEUE_02_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación deque_init */
void deque_init(t_Deque *d);
/* Operación push_back */
void push_back(t_Deque *d, int v);
/* Operación pop_front */
int pop_front(t_Deque *d, int *out);

#endif /* EJERCICIO_COLA_QUEUE_02_H */
