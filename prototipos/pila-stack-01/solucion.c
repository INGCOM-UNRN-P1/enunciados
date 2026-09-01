/*
 * TAD Pila con Capacidad Dinamica
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>

#define CAPACIDAD_INICIAL 16

typedef struct {
    int *datos;
    int tope;
    int capacidad;
} t_Pila;

void pila_init(t_Pila *p) {
    p->capacidad = CAPACIDAD_INICIAL;
    p->tope = 0;
    p->datos = (int *)malloc(sizeof(int) * p->capacidad);
}

void pila_push(t_Pila *p, int val) {
    if (p->datos == NULL) return;
    if (p->tope >= p->capacidad) {
        int nueva_cap = p->capacidad * 2;
        int *nuevos = (int *)realloc(p->datos, sizeof(int) * nueva_cap);
        if (nuevos == NULL) return;
        p->datos = nuevos;
        p->capacidad = nueva_cap;
    }
    p->datos[p->tope++] = val;
}

int pila_pop(t_Pila *p, int *out) {
    if (p->datos == NULL || p->tope <= 0) return 0;
    *out = p->datos[--p->tope];
    return 1;
}

void pila_free(t_Pila *p) {
    if (p->datos != NULL) { free(p->datos); p->datos = NULL; }
    p->tope = 0;
    p->capacidad = 0;
}

int main(void) {
    t_Pila p;
    pila_init(&p);
    int v = 0;
    while (scanf("%d", &v) == 1 && v != 0) {
        pila_push(&p, v);
    }
    int out = 0;
    while (pila_pop(&p, &out)) {
        printf("%d ", out);
    }
    printf("\n");
    pila_free(&p);
    return 0;
}