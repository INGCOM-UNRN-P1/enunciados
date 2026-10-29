#ifndef EJERCICIO_INTERPRETE_MAQUINA_PILA_H
#define EJERCICIO_INTERPRETE_MAQUINA_PILA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación inicializar_pila */
void inicializar_pila(PilaVirtual *p);
/* Operación push */
int push(PilaVirtual *p, long v);
/* Operación pop */
int pop(PilaVirtual *p, long *out);

#endif /* EJERCICIO_INTERPRETE_MAQUINA_PILA_H */
