/*
 * Numerico #22
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_num_linalg_22(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    double a = 0.0, b = 0.0;
    if (scanf("%lf %lf", &a, &b) == 2) {
        double res = (a * b) + 22.0;
        printf("NUM_%02d: %.2f\n", 22, res);
    }
    return 0;
}