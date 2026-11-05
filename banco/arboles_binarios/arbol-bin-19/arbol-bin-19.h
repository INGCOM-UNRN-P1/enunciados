#ifndef ARBOL_BIN_19_H
#define ARBOL_BIN_19_H
#include <stddef.h>
typedef struct nodo_arbol_19 { int valor; struct nodo_arbol_19 *izq, *der; } nodo_arbol_19_t;
/* Las secuencias contienen valores únicos y describen el mismo árbol. Para n==0 devuelve NULL. */
nodo_arbol_19_t *reconstruir_in_post(const int *inorder, const int *postorder, size_t n);
void liberar_arbol_19(nodo_arbol_19_t *raiz);
#endif
