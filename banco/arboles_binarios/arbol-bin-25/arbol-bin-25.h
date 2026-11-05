#ifndef ARBOL_BIN_25_H
#define ARBOL_BIN_25_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_25_t { int valor; struct nodo_arbol_bin_25_t *izq, *der; } nodo_arbol_bin_25_t;
size_t contar_un_hijo_25(const nodo_arbol_bin_25_t *raiz);
#endif
