/*
 * Min-Heap Basico
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP 128

typedef struct {
    int datos[MAX_HEAP];
    int tamano;
} t_MinHeap;

void heap_init(t_MinHeap *h) { h->tamano = 0; }

void heap_push(t_MinHeap *h, int val) {
    if (h->tamano >= MAX_HEAP) return;
    int idx = h->tamano++;
    h->datos[idx] = val;
    while (idx > 0 && h->datos[idx] < h->datos[(idx - 1) / 2]) {
        int temp = h->datos[idx];
        h->datos[idx] = h->datos[(idx - 1) / 2];
        h->datos[(idx - 1) / 2] = temp;
        idx = (idx - 1) / 2;
    }
}

int heap_pop(t_MinHeap *h, int *out) {
    if (h->tamano <= 0) return 0;
    *out = h->datos[0];
    h->datos[0] = h->datos[--h->tamano];
    int idx = 0;
    while (idx * 2 + 1 < h->tamano) {
        int menor = idx * 2 + 1;
        if (menor + 1 < h->tamano && h->datos[menor + 1] < h->datos[menor]) {
            menor++;
        }
        if (h->datos[idx] <= h->datos[menor]) break;
        int temp = h->datos[idx];
        h->datos[idx] = h->datos[menor];
        h->datos[menor] = temp;
        idx = menor;
    }
    return 1;
}

int main(void) {
    t_MinHeap h;
    heap_init(&h);
    int val = 0;
    while (scanf("%d", &val) == 1 && val != 0) {
        heap_push(&h, val);
    }
    int out = 0;
    while (heap_pop(&h, &out)) {
        printf("%d ", out);
    }
    printf("\n");
    return 0;
}