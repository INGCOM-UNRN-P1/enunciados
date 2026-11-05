#ifndef ARBOL_BIN_07_H
#define ARBOL_BIN_07_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_07 { int valor; struct nodo_arbol_07 *izq, *der; } nodo_arbol_07_t;
bool es_estricto(const nodo_arbol_07_t *raiz);
#endif
