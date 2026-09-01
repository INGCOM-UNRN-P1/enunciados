/*
 * Media Movil 1D
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>


int ejecutar_dsp_senal_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n = 0, w = 0;
    if (scanf("%d %d", &n, &w) != 2 || n <= 0 || w <= 0 || w > n) return 0;
    int *muestras = (int *)malloc(sizeof(int) * n);
    if (muestras == NULL) return 1;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &muestras[i]) != 1) { free(muestras); return 1; }
    }
    for (int i = 0; i <= n - w; i++) {
        int suma = 0;
        for (int j = 0; j < w; j++) {
            suma += muestras[i + j];
        }
        printf("%.2f%c", (double)suma / w, (i == n - w) ? '\n' : ' ');
    }
    free(muestras);
    return 0;
}