#ifndef ARBOL_BIN_13_H
#define ARBOL_BIN_13_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_13 { int valor; struct nodo_arbol_13 *izq, *der; } nodo_arbol_13_t;
bool es_simetrico(const nodo_arbol_13_t *raiz);
#endif
