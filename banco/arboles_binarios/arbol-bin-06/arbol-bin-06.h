#ifndef ARBOL_BIN_06_H
#define ARBOL_BIN_06_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_06 { int valor; struct nodo_arbol_06 *izq, *der; } nodo_arbol_06_t;
bool obtener_min_max(const nodo_arbol_06_t *raiz, int *minimo, int *maximo);
#endif
