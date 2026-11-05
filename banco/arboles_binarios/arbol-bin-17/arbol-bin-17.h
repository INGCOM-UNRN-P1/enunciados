#ifndef ARBOL_BIN_17_H
#define ARBOL_BIN_17_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_17 { int valor; struct nodo_arbol_17 *izq, *der; } nodo_arbol_17_t;
void imprimir_caminos(const nodo_arbol_17_t *raiz, FILE *salida);
#endif
