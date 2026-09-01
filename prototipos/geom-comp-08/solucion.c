/*
 * Geometria #08
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_geom_comp_08(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int x = 0, y = 0;
    if (scanf("%d %d", &x, &y) == 2) {
        int prod = x * y + 8;
        printf("GEOM_%02d: %d\n", 8, prod);
    }
    return 0;
}