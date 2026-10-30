/*
 * Deque Basico
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

#define MAX_DEQUE 16

typedef struct {
    int datos[MAX_DEQUE];
    int frente;
    int final;
    int tamano;
} t_Deque;

void deque_init(t_Deque *d) { d->frente = 0; d->final = 0; d->tamano = 0; }

void push_back(t_Deque *d, int v) {
    if (d->tamano >= MAX_DEQUE) return;
    d->datos[d->final] = v;
    d->final = (d->final + 1) % MAX_DEQUE;
    d->tamano++;
}

int pop_front(t_Deque *d, int *out) {
    if (d->tamano <= 0) return 0;
    *out = d->datos[d->frente];
    d->frente = (d->frente + 1) % MAX_DEQUE;
    d->tamano--;
    return 1;
}

int main(void) {
    t_Deque d;
    deque_init(&d);
    push_back(&d, 100);
    push_back(&d, 200);
    int out = 0;
    while (pop_front(&d, &out)) {
        printf("%d ", out);
    }
    printf("\n");
    return 0;
}