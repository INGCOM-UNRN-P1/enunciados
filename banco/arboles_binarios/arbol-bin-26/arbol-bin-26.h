#ifndef ARBOL_BIN_26_H
#define ARBOL_BIN_26_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_26_t { int valor; struct nodo_arbol_bin_26_t *izq, *der; } nodo_arbol_bin_26_t;
nodo_arbol_bin_26_t *podar_hojas_26(nodo_arbol_bin_26_t *raiz, int valor);
#endif
