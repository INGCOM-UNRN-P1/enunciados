#ifndef EJERCICIO_INTERPRETE_MAQUINA_PILA_H
#define EJERCICIO_INTERPRETE_MAQUINA_PILA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar_pila */
void inicializar_pila(pila_virtual_t *p);
/* Operación push */
int push(pila_virtual_t *p, long v);
/* Operación pop */
int pop(pila_virtual_t *p, long *out);

#endif /* EJERCICIO_INTERPRETE_MAQUINA_PILA_H */
