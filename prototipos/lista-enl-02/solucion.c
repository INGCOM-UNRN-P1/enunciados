/*
 * Inversion In-Place de Lista Enlazada
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} t_Nodo;

static t_Nodo *insertar_final(t_Nodo *cabeza, int valor) {
    t_Nodo *nuevo = (t_Nodo *)malloc(sizeof(t_Nodo));
    if (nuevo == NULL) return cabeza;
    nuevo->dato = valor;
    nuevo->siguiente = NULL;
    if (cabeza == NULL) return nuevo;
    t_Nodo *act = cabeza;
    while (act->siguiente != NULL) act = act->siguiente;
    act->siguiente = nuevo;
    return cabeza;
}

static t_Nodo *invertir_lista(t_Nodo *cabeza) {
    t_Nodo *prev = NULL;
    t_Nodo *act = cabeza;
    t_Nodo *sig = NULL;
    while (act != NULL) {
        sig = act->siguiente;
        act->siguiente = prev;
        prev = act;
        act = sig;
    }
    return prev;
}

void imprimir_y_liberar(t_Nodo *cabeza) {
    t_Nodo *act = cabeza;
    while (act != NULL) {
        printf("%d%c", act->dato, (act->siguiente == NULL) ? '\n' : ' ');
        t_Nodo *t = act->siguiente;
        free(act);
        act = t;
    }
}

int main(void) {
    t_Nodo *cabeza = NULL;
    int v = 0;
    while (scanf("%d", &v) == 1 && v != 0) {
        cabeza = insertar_final(cabeza, v);
    }
    cabeza = invertir_lista(cabeza);
    imprimir_y_liberar(cabeza);
    return 0;
}