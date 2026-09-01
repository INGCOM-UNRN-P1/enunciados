/*
 * Procesamiento de Argumentos CLI #26
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ejecutar_cli_args_26(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char param[64] = {0};
    int valor = 0;
    if (scanf("%63s %d", param, &valor) == 2) {
        printf("CLI_OPT_%02d: %s=%d\n", 26, param, valor + 26);
    }
    return 0;
}