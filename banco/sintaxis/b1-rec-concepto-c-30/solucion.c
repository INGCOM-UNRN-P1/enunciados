/*
 * Fundamentos de Sintaxis y Reglas C #30
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

int ejecutar_b1_rec_concepto_c_30(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) == 1) {
        printf("CONCEPTO_B1_%02d: %d\n", 30, n + 30);
    }
    return 0;
}