/*
 * Compresion #29
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_comp_datos_29(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) == 1) {
        int comprimido = (n >> 1) ^ 29;
        printf("COMP_%02d: %d\n", 29, comprimido);
    }
    return 0;
}