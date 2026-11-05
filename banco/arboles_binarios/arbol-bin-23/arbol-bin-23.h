#ifndef ARBOL_BIN_23_H
#define ARBOL_BIN_23_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_23_t { int valor; struct nodo_arbol_bin_23_t *izq, *der; } nodo_arbol_bin_23_t;
long long suma_nivel_23(const nodo_arbol_bin_23_t *raiz, size_t k);
#endif
