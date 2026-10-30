/*
 * Insercion al Frente en Lista Enlazada
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} t_Nodo;

static t_Nodo *insertar_frente(t_Nodo *cabeza, int valor) {
    t_Nodo *nuevo = (t_Nodo *)malloc(sizeof(t_Nodo));
    if (nuevo == NULL) return cabeza;
    nuevo->dato = valor;
    nuevo->siguiente = cabeza;
    return nuevo;
}

void imprimir_lista(const t_Nodo *cabeza) {
    const t_Nodo *act = cabeza;
    while (act != NULL) {
        printf("%d%c", act->dato, (act->siguiente == NULL) ? '\n' : ' ');
        act = act->siguiente;
    }
}

void liberar_lista(t_Nodo *cabeza) {
    t_Nodo *act = cabeza;
    while (act != NULL) {
        t_Nodo *temp = act->siguiente;
        free(act);
        act = temp;
    }
}

int main(void) {
    t_Nodo *cabeza = NULL;
    int v = 0;
    while (scanf("%d", &v) == 1 && v != 0) {
        cabeza = insertar_frente(cabeza, v);
    }
    imprimir_lista(cabeza);
    liberar_lista(cabeza);
    return 0;
}