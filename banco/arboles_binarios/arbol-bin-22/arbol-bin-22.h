#ifndef ARBOL_BIN_22_H
#define ARBOL_BIN_22_H
#include <stdbool.h>
#include <stddef.h>
typedef struct nodo_arbol_bin_22_t { int valor; struct nodo_arbol_bin_22_t *izq, *der; } nodo_arbol_bin_22_t;
bool vista_vertical_22(const nodo_arbol_bin_22_t *raiz, bool inferior, int *valores, size_t capacidad, size_t *cantidad);
bool vista_lateral_22(const nodo_arbol_bin_22_t *raiz, bool desde_izquierda, int *valores, size_t capacidad, size_t *cantidad);
#endif
