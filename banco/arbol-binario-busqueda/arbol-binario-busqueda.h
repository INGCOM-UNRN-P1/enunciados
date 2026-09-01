#ifndef EJERCICIO_ARBOL_BINARIO_BUSQUEDA_H
#define EJERCICIO_ARBOL_BINARIO_BUSQUEDA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación buscar_bst */
int buscar_bst(const NodoBST *raiz, int valor);
/* Operación calcular_altura */
int calcular_altura(const NodoBST *raiz);
/* Operación recorrido_inorder */
void recorrido_inorder(const NodoBST *raiz);
/* Operación recorrido_preorder */
void recorrido_preorder(const NodoBST *raiz);
/* Operación liberar_arbol */
void liberar_arbol(NodoBST *raiz);

#endif /* EJERCICIO_ARBOL_BINARIO_BUSQUEDA_H */
