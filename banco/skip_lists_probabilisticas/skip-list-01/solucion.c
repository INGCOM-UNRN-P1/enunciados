/*
 * Skip List Basica
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEVEL 4

typedef struct NodoSkip {
    int valor;
    struct NodoSkip *siguiente[MAX_LEVEL];
} nodo_skip_t;

static nodo_skip_t *crear_nodo_skip(int val) {
    nodo_skip_t *n = (nodo_skip_t *)calloc(1, sizeof(nodo_skip_t));
    if (n != NULL) n->valor = val;
    return n;
}


int ejecutar_skip_list_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    nodo_skip_t *cabeza = crear_nodo_skip(-1);
    nodo_skip_t *n1 = crear_nodo_skip(10);
    nodo_skip_t *n2 = crear_nodo_skip(20);
    nodo_skip_t *n3 = crear_nodo_skip(30);

    cabeza->siguiente[0] = n1;
    n1->siguiente[0] = n2;
    n2->siguiente[0] = n3;

    cabeza->siguiente[1] = n2;
    n2->siguiente[1] = n3;

    int buscado = 20;
    nodo_skip_t *curr = cabeza;
    for (int lvl = 1; lvl >= 0; lvl--) {
        while (curr->siguiente[lvl] != NULL && curr->siguiente[lvl]->valor < buscado) {
            curr = curr->siguiente[lvl];
        }
    }
    curr = curr->siguiente[0];
    printf("BUSQUEDA_SKIP: %d\n", (curr != NULL && curr->valor == buscado) ? 1 : 0);

    free(n3);
    free(n2);
    free(n1);
    free(cabeza);
    return 0;
}