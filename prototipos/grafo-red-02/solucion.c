/*
 * Grafos #02
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_grafo_red_02(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int nodo = 0, grado = 0;
    if (scanf("%d %d", &nodo, &grado) == 2) {
        printf("GRAFO_%02d: NODO=%d GRADO=%d\n", 2, nodo, grado + 2);
    }
    return 0;
}