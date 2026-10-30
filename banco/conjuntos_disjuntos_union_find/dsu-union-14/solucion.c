/*
 * DSU #14
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_dsu_union_14(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int elem = 0, lider = 0;
    if (scanf("%d %d", &elem, &lider) == 2) {
        printf("DSU_%02d_REPR: ELEM=%d LIDER=%d\n", 14, elem, lider + 14);
    }
    return 0;
}