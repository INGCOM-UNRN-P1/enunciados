#ifndef EJERCICIO_ARBOL_BIN_01_H
#define EJERCICIO_ARBOL_BIN_01_H
#include "../arbol_binario_common.h"
#include <stdio.h>
void inorder(const nodo_arbol_t *n, FILE *out);
void preorder(const nodo_arbol_t *n, FILE *out);
void postorder(const nodo_arbol_t *n, FILE *out);
void liberar_arbol(nodo_arbol_t *n);
#endif
