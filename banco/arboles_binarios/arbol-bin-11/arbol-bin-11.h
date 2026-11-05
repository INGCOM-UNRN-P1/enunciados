#ifndef ARBOL_BIN_11_H
#define ARBOL_BIN_11_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_11 { int valor; struct nodo_arbol_11 *izq, *der; } nodo_arbol_11_t;
nodo_arbol_11_t *ancestro_comun(const nodo_arbol_11_t *raiz, int valor_a, int valor_b);
#endif
