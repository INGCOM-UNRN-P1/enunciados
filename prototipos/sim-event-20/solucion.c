/*
 * Simulador #20
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_sim_event_20(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int ticks = 0;
    if (scanf("%d", &ticks) == 1) {
        printf("SIM_%02d_TICKS: %d EVENTOS=%d\n", 20, ticks, ticks * 2 + 20);
    }
    return 0;
}