/*
 * Fundamentos de Sintaxis y Reglas C #07
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

int ejecutar_b1_rec_concepto_c_07(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) == 1) {
        printf("CONCEPTO_B1_%02d: %d\n", 7, n + 7);
    }
    return 0;
}