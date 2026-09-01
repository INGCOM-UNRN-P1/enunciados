#ifndef EJERCICIO_PILA_STACK_01_H
#define EJERCICIO_PILA_STACK_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación pila_init */
void pila_init(t_Pila *p);
/* Operación pila_push */
void pila_push(t_Pila *p, int val);
/* Operación pila_pop */
int pila_pop(t_Pila *p, int *out);
/* Operación pila_free */
void pila_free(t_Pila *p);

#endif /* EJERCICIO_PILA_STACK_01_H */
