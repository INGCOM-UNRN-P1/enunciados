/*
 * Factor de Balance AVL
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>


int ejecutar_avl_tree_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int alt_izq = 0, alt_der = 0;
    if (scanf("%d %d", &alt_izq, &alt_der) == 2) {
        int fb = alt_izq - alt_der;
        int balanceado = (fb >= -1 && fb <= 1) ? 1 : 0;
        printf("FB: %d | BALANCEADO: %d\n", fb, balanceado);
    }
    return 0;
}