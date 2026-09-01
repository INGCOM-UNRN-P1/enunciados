/*
 * Matriz de Adyacencia
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>


int ejecutar_grafo_red_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int vertices = 0, aristas = 0;
    if (scanf("%d %d", &vertices, &aristas) != 2 || vertices <= 0 || vertices > 50) return 0;
    int matriz[50][50] = {{0}};
    for (int i = 0; i < aristas; i++) {
        int u = 0, v = 0;
        if (scanf("%d %d", &u, &v) == 2 && u < vertices && v < vertices) {
            matriz[u][v] = 1;
            matriz[v][u] = 1;
        }
    }
    int q1 = 0, q2 = 0;
    if (scanf("%d %d", &q1, &q2) == 2) {
        printf("ADYACENTES: %d\n", matriz[q1][q2]);
    }
    return 0;
}