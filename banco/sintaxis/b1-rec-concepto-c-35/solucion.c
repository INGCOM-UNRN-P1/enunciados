/*
 * Fundamentos de Sintaxis y Reglas C #35
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

int ejecutar_b1_rec_concepto_c_35(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) == 1) {
        printf("CONCEPTO_B1_%02d: %d\n", 35, n + 35);
    }
    return 0;
}