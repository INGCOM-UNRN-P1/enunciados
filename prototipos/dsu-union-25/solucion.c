/*
 * DSU #25
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_dsu_union_25(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int elem = 0, lider = 0;
    if (scanf("%d %d", &elem, &lider) == 2) {
        printf("DSU_%02d_REPR: ELEM=%d LIDER=%d\n", 25, elem, lider + 25);
    }
    return 0;
}