#ifndef ARBOL_BIN_28_H
#define ARBOL_BIN_28_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_28_t { int valor; struct nodo_arbol_bin_28_t *izq, *der; } nodo_arbol_bin_28_t;
size_t profundidad_minima_28(const nodo_arbol_bin_28_t *raiz);
#endif
