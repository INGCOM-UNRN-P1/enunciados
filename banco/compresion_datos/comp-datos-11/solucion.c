/*
 * Compresion #11
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_comp_datos_11(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) == 1) {
        int comprimido = (n >> 1) ^ 11;
        printf("COMP_%02d: %d\n", 11, comprimido);
    }
    return 0;
}