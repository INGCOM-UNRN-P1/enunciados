/*
 * Lista Enlazada #21
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_lista_enl_21(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int nodos = 0;
    if (scanf("%d", &nodos) == 1) {
        int longitud = nodos + 21;
        printf("LISTA_ENL_21_NODOS: %d\n", longitud);
    }
    return 0;
}