#ifndef ARBOL_BIN_29_H
#define ARBOL_BIN_29_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_29_t { int valor; struct nodo_arbol_bin_29_t *izq, *der; } nodo_arbol_bin_29_t;
int distancia_29(const nodo_arbol_bin_29_t *raiz, int a, int b);
#endif
