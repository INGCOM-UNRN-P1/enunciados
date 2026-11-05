#ifndef ARBOL_BIN_16_H
#define ARBOL_BIN_16_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_16 { int valor; struct nodo_arbol_16 *izq, *der; } nodo_arbol_16_t;
bool suma_maxima_raiz_hoja(const nodo_arbol_16_t *raiz, int64_t *suma);
#endif
