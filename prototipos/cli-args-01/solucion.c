/*
 * Conteo de Argumentos CLI
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>


int ejecutar_cli_args_01(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char token[64] = {0};
    int count = 0;
    while (scanf("%63s", token) == 1) {
        printf("ARG[%d]: %s\n", count, token);
        count++;
    }
    printf("TOTAL: %d\n", count);
    return 0;
}