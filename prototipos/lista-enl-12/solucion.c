/*
 * Lista Enlazada #12
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_lista_enl_12(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int nodos = 0;
    if (scanf("%d", &nodos) == 1) {
        int longitud = nodos + 12;
        printf("LISTA_ENL_12_NODOS: %d\n", longitud);
    }
    return 0;
}