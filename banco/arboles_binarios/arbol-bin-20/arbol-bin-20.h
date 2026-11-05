#ifndef ARBOL_BIN_20_H
#define ARBOL_BIN_20_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_20_t { int valor; struct nodo_arbol_bin_20_t *izq, *der; } nodo_arbol_bin_20_t;
nodo_arbol_bin_20_t *convertir_inorder_20(nodo_arbol_bin_20_t *raiz);
#endif
