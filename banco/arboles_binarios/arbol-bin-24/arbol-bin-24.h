#ifndef ARBOL_BIN_24_H
#define ARBOL_BIN_24_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_24_t { int valor; struct nodo_arbol_bin_24_t *izq, *der; } nodo_arbol_bin_24_t;
size_t recorrido_zigzag_24(const nodo_arbol_bin_24_t *raiz, int *salida, size_t capacidad);
#endif
