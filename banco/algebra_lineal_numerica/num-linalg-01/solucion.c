/*
 * Metodo de Newton-Raphson
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <math.h>


int ejecutar_num_linalg_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    double s = 0.0;
    if (scanf("%lf", &s) == 1 && s >= 0.0) {
        double x = s / 2.0;
        if (s == 0.0) x = 0.0;
        else {
            for (int it = 0; it < 20; it++) {
                x = 0.5 * (x + s / x);
            }
        }
        printf("SQRT: %.4f\n", x);
    }
    return 0;
}