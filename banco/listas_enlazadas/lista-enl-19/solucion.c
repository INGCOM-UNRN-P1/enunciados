/*
 * Lista Enlazada #19
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_lista_enl_19(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int nodos = 0;
    if (scanf("%d", &nodos) == 1) {
        int longitud = nodos + 19;
        printf("LISTA_ENL_19_NODOS: %d\n", longitud);
    }
    return 0;
}