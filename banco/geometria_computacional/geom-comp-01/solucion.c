/*
 * Distancia Euclidiana 2D
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <math.h>


int ejecutar_geom_comp_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    if (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) == 4) {
        double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        printf("DISTANCIA: %.2f\n", dist);
    }
    return 0;
}