/*
 * Procesamiento de Argumentos CLI #12
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ejecutar_cli_args_12(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char param[64] = {0};
    int valor = 0;
    if (scanf("%63s %d", param, &valor) == 2) {
        printf("CLI_OPT_%02d: %s=%d\n", 12, param, valor + 12);
    }
    return 0;
}