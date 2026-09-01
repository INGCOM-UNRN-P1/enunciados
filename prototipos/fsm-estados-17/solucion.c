/*
 * FSM Protocolo #17
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_fsm_estados_17(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int entrada = 0;
    int estado_actual = 0;
    while (scanf("%d", &entrada) == 1 && entrada >= 0) {
        estado_actual = (estado_actual + entrada + 17) % 4;
        printf("FSM_%02d_ESTADO: %d\n", 17, estado_actual);
    }
    return 0;
}