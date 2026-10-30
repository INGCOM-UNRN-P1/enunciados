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
} t_NodoArbol;

static t_NodoArbol *crear_nodo(int v) {
    t_NodoArbol *n = (t_NodoArbol *)malloc(sizeof(t_NodoArbol));
    if (n == NULL) return NULL;
    n->valor = v;
    n->izq = NULL;
    n->der = NULL;
    return n;
}

void inorder(const t_NodoArbol *n) {
    if (n != NULL) {
        inorder(n->izq);
        printf("%d ", n->valor);
        inorder(n->der);
    }
}

void liberar_arbol(t_NodoArbol *n) {
    if (n != NULL) {
        liberar_arbol(n->izq);
        liberar_arbol(n->der);
        free(n);
    }
}

int main(void) {
    t_NodoArbol *raiz = crear_nodo(1);
    if (raiz != NULL) {
        raiz->izq = crear_nodo(2);
        raiz->der = crear_nodo(3);
    }
    inorder(raiz);
    printf("\n");
    liberar_arbol(raiz);
    return 0;
}