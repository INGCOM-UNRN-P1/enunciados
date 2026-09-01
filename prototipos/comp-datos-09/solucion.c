/*
 * Compresion #09
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_comp_datos_09(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) == 1) {
        int comprimido = (n >> 1) ^ 9;
        printf("COMP_%02d: %d\n", 9, comprimido);
    }
    return 0;
}