/*
 * Cola Circular FIFO (Ring Buffer)
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

#define CAPACIDAD 8

typedef struct {
    int datos[CAPACIDAD];
    int frente;
    int final;
    int cantidad;
} cola_circular_t;

void cola_init(cola_circular_t *c) {
    c->frente = 0;
    c->final = 0;
    c->cantidad = 0;
}

int cola_enqueue(cola_circular_t *c, int val) {
    if (c->cantidad >= CAPACIDAD) return 0;
    c->datos[c->final] = val;
    c->final = (c->final + 1) % CAPACIDAD;
    c->cantidad++;
    return 1;
}

int cola_dequeue(cola_circular_t *c, int *out) {
    if (c->cantidad <= 0) return 0;
    *out = c->datos[c->frente];
    c->frente = (c->frente + 1) % CAPACIDAD;
    c->cantidad--;
    return 1;
}

int main(void) {
    cola_circular_t c;
    cola_init(&c);
    int v = 0;
    while (scanf("%d", &v) == 1 && v != 0) {
        cola_enqueue(&c, v);
    }
    int out = 0;
    while (cola_dequeue(&c, &out)) {
        printf("%d ", out);
    }
    printf("\n");
    return 0;
}