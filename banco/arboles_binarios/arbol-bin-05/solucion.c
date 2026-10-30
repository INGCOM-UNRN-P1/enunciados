/*
 * Arbol Binario #05
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_arbol_bin_05(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int nodos = 0;
    if (scanf("%d", &nodos) == 1) {
        printf("ARBOL_BIN_05_NODOS: %d\n", nodos + 5);
    }
    return 0;
}