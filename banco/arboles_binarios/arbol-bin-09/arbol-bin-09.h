#ifndef ARBOL_BIN_09_H
#define ARBOL_BIN_09_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_09 { int valor; struct nodo_arbol_09 *izq, *der; } nodo_arbol_09_t;
bool esta_balanceado(const nodo_arbol_09_t *raiz);
#endif
