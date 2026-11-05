#ifndef ARBOL_BIN_18_H
#define ARBOL_BIN_18_H
#include <stddef.h>
typedef struct nodo_arbol_18 { int valor; struct nodo_arbol_18 *izq, *der; } nodo_arbol_18_t;
/* Las secuencias contienen valores únicos y describen el mismo árbol. Para n==0 devuelve NULL. */
nodo_arbol_18_t *reconstruir_in_pre(const int *inorder, const int *preorder, size_t n);
void liberar_arbol_18(nodo_arbol_18_t *raiz);
#endif
