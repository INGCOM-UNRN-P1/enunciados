#ifndef PILA_EN_ARREGLO_H
#define PILA_EN_ARREGLO_H

#include <stdbool.h>

#define CAPACIDAD 5

typedef struct {
    int datos[CAPACIDAD];
    int tope;  /* -1: vacía */
} pila_t;

bool pila_push(pila_t *pila, int valor);
bool pila_pop(pila_t *pila, int *valor);

#endif
