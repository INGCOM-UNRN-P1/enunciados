/*
 * Insercion al Frente en Lista Enlazada
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} nodo_t;

static nodo_t *insertar_frente(nodo_t *cabeza, int valor) {
    nodo_t *nuevo = (nodo_t *)malloc(sizeof(nodo_t));
    if (nuevo == NULL) return cabeza;
    nuevo->dato = valor;
    nuevo->siguiente = cabeza;
    return nuevo;
}

void imprimir_lista(const nodo_t *cabeza) {
    const nodo_t *act = cabeza;
    while (act != NULL) {
        printf("%d%c", act->dato, (act->siguiente == NULL) ? '\n' : ' ');
        act = act->siguiente;
    }
}

void liberar_lista(nodo_t *cabeza) {
    nodo_t *act = cabeza;
    while (act != NULL) {
        nodo_t *temp = act->siguiente;
        free(act);
        act = temp;
    }
}

int main(void) {
    nodo_t *cabeza = NULL;
    int v = 0;
    while (scanf("%d", &v) == 1 && v != 0) {
        cabeza = insertar_frente(cabeza, v);
    }
    imprimir_lista(cabeza);
    liberar_lista(cabeza);
    return 0;
}