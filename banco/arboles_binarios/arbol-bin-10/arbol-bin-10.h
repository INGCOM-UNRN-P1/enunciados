#ifndef ARBOL_BIN_10_H
#define ARBOL_BIN_10_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_10 { int valor; struct nodo_arbol_10 *izq, *der; } nodo_arbol_10_t;
size_t diametro(const nodo_arbol_10_t *raiz);
#endif
