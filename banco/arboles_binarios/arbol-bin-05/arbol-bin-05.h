#ifndef ARBOL_BIN_05_H
#define ARBOL_BIN_05_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_05 { int valor; struct nodo_arbol_05 *izq, *der; } nodo_arbol_05_t;
int64_t sumar_nodos(const nodo_arbol_05_t *raiz);
#endif
