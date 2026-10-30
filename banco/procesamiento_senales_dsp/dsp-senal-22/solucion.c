/*
 * DSP #22
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>


int ejecutar_dsp_senal_22(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int muestra = 0;
    if (scanf("%d", &muestra) == 1) {
        int procesada = (muestra * 3) / 2 + 22;
        printf("DSP_%02d_OUT: %d\n", 22, procesada);
    }
    return 0;
}