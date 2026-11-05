#ifndef ARBOL_BIN_15_H
#define ARBOL_BIN_15_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_15 { int valor; struct nodo_arbol_15 *izq, *der; } nodo_arbol_15_t;
bool es_subarbol(const nodo_arbol_15_t *arbol, const nodo_arbol_15_t *candidato);
#endif
