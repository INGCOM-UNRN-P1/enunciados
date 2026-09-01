/*
 * Concurrencia #28
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_hilos_conc_28(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n_hilos = 0;
    if (scanf("%d", &n_hilos) == 1) {
        int operaciones = n_hilos * 10 + 28;
        printf("HILOS_%02d: OPS=%d\n", 28, operaciones);
    }
    return 0;
}