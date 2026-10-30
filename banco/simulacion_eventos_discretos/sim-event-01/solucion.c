/*
 * Simulacion de Cola FIFO
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_sim_event_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) == 1 && n > 0) {
        int tiempo_actual = 0;
        int espera_total = 0;
        for (int i = 0; i < n; i++) {
            int duracion = 0;
            if (scanf("%d", &duracion) == 1) {
                espera_total += tiempo_actual;
                tiempo_actual += duracion;
            }
        }
        printf("TIEMPO_TOTAL: %d | ESPERA_PROM: %.2f\n", tiempo_actual, (double)espera_total / n);
    }
    return 0;
}