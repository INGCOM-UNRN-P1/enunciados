#ifndef ARBOL_BIN_12_H
#define ARBOL_BIN_12_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_12 { int valor; struct nodo_arbol_12 *izq, *der; } nodo_arbol_12_t;
void invertir_arbol(nodo_arbol_12_t *raiz);
#endif
