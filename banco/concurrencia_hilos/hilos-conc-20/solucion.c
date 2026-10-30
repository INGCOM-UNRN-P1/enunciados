/*
 * Concurrencia #20
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_hilos_conc_20(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n_hilos = 0;
    if (scanf("%d", &n_hilos) == 1) {
        int operaciones = n_hilos * 10 + 20;
        printf("HILOS_%02d: OPS=%d\n", 20, operaciones);
    }
    return 0;
}