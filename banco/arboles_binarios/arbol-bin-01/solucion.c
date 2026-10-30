/*
 * Recorridos de Arbol Binario
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct NodoArbol {
    int valor;
    struct NodoArbol *izq;
    struct NodoArbol *der;
} nodo_arbol_t;

static nodo_arbol_t *crear_nodo(int v) {
    nodo_arbol_t *n = (nodo_arbol_t *)malloc(sizeof(nodo_arbol_t));
    if (n == NULL) return NULL;
    n->valor = v;
    n->izq = NULL;
    n->der = NULL;
    return n;
}

void inorder(const nodo_arbol_t *n) {
    if (n != NULL) {
        inorder(n->izq);
        printf("%d ", n->valor);
        inorder(n->der);
    }
}

void liberar_arbol(nodo_arbol_t *n) {
    if (n != NULL) {
        liberar_arbol(n->izq);
        liberar_arbol(n->der);
        free(n);
    }
}

int main(void) {
    nodo_arbol_t *raiz = crear_nodo(1);
    if (raiz != NULL) {
        raiz->izq = crear_nodo(2);
        raiz->der = crear_nodo(3);
    }
    inorder(raiz);
    printf("\n");
    liberar_arbol(raiz);
    return 0;
}