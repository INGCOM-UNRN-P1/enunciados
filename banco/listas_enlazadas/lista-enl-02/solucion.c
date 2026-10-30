/*
 * Inversion In-Place de Lista Enlazada
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} nodo_t;

static nodo_t *insertar_final(nodo_t *cabeza, int valor) {
    nodo_t *nuevo = (nodo_t *)malloc(sizeof(nodo_t));
    if (nuevo == NULL) return cabeza;
    nuevo->dato = valor;
    nuevo->siguiente = NULL;
    if (cabeza == NULL) return nuevo;
    nodo_t *act = cabeza;
    while (act->siguiente != NULL) act = act->siguiente;
    act->siguiente = nuevo;
    return cabeza;
}

static nodo_t *invertir_lista(nodo_t *cabeza) {
    nodo_t *prev = NULL;
    nodo_t *act = cabeza;
    nodo_t *sig = NULL;
    while (act != NULL) {
        sig = act->siguiente;
        act->siguiente = prev;
        prev = act;
        act = sig;
    }
    return prev;
}

void imprimir_y_liberar(nodo_t *cabeza) {
    nodo_t *act = cabeza;
    while (act != NULL) {
        printf("%d%c", act->dato, (act->siguiente == NULL) ? '\n' : ' ');
        nodo_t *t = act->siguiente;
        free(act);
        act = t;
    }
}

int main(void) {
    nodo_t *cabeza = NULL;
    int v = 0;
    while (scanf("%d", &v) == 1 && v != 0) {
        cabeza = insertar_final(cabeza, v);
    }
    cabeza = invertir_lista(cabeza);
    imprimir_y_liberar(cabeza);
    return 0;
}