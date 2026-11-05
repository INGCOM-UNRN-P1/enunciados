#ifndef ARBOL_BIN_04_H
#define ARBOL_BIN_04_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
typedef struct nodo_arbol_04 { int valor; struct nodo_arbol_04 *izq, *der; } nodo_arbol_04_t;
size_t contar_nodos(const nodo_arbol_04_t *raiz);
#endif
