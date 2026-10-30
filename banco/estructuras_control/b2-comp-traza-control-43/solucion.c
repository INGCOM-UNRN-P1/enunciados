/*
 * Traza y Comprensión de Flujo C #43
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

int proc_omp_traza_control_43(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int inicio = 0;
    int limite = 0;
    if (scanf("%d %d", &inicio, &limite) == 2) {
        int acumulador = 0;
        for (int paso = inicio; paso <= limite; paso += 2) {
            acumulador += paso;
            printf("PASO %d: ACUM=%d\n", paso, acumulador);
        }
    }
    return 0;
}