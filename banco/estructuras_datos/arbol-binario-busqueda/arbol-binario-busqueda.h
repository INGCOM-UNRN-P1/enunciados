#ifndef EJERCICIO_ARBOL_BINARIO_BUSQUEDA_H
#define EJERCICIO_ARBOL_BINARIO_BUSQUEDA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación buscar_bst */
int buscar_bst(const nodo_bst_t *raiz, int valor);
/* Operación calcular_altura */
int calcular_altura(const nodo_bst_t *raiz);
/* Operación recorrido_inorder */
void recorrido_inorder(const nodo_bst_t *raiz);
/* Operación recorrido_preorder */
void recorrido_preorder(const nodo_bst_t *raiz);
/* Operación liberar_arbol */
void liberar_arbol(nodo_bst_t *raiz);

#endif /* EJERCICIO_ARBOL_BINARIO_BUSQUEDA_H */
