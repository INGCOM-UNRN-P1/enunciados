/*
 * Automata de Paridad
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

typedef enum { ESTADO_PAR, ESTADO_IMPAR } t_EstadoParidad;


int ejecutar_fsm_estados_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char bit = 0;
    t_EstadoParidad estado = ESTADO_PAR;
    while (scanf(" %c", &bit) == 1 && (bit == '0' || bit == '1')) {
        if (bit == '1') {
            estado = (estado == ESTADO_PAR) ? ESTADO_IMPAR : ESTADO_PAR;
        }
    }
    printf("%s\n", (estado == ESTADO_PAR) ? "PAR" : "IMPAR");
    return 0;
}