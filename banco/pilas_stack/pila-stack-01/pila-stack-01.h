#ifndef EJERCICIO_PILA_STACK_01_H
#define EJERCICIO_PILA_STACK_01_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación pila_init */
void pila_init(pila_t *p);
/* Operación pila_push */
void pila_push(pila_t *p, int val);
/* Operación pila_pop */
int pila_pop(pila_t *p, int *out);
/* Operación pila_free */
void pila_free(pila_t *p);

#endif /* EJERCICIO_PILA_STACK_01_H */
