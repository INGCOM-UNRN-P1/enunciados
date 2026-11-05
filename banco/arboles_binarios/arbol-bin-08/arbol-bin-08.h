#ifndef ARBOL_BIN_08_H
#define ARBOL_BIN_08_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_08 { int valor; struct nodo_arbol_08 *izq, *der; } nodo_arbol_08_t;
bool es_perfecto(const nodo_arbol_08_t *raiz);
#endif
