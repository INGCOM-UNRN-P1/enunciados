#ifndef ARBOL_BIN_14_H
#define ARBOL_BIN_14_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_14 { int valor; struct nodo_arbol_14 *izq, *der; } nodo_arbol_14_t;
bool son_identicos(const nodo_arbol_14_t *a, const nodo_arbol_14_t *b);
#endif
