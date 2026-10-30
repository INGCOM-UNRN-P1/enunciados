/*
 * Parser de Flags Booleanas
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>


int ejecutar_cli_args_02(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    char flag[32] = {0};
    int verbose = 0;
    int debug = 0;
    while (scanf("%31s", flag) == 1) {
        if (strcmp(flag, "-v") == 0 || strcmp(flag, "--verbose") == 0) verbose = 1;
        if (strcmp(flag, "-d") == 0 || strcmp(flag, "--debug") == 0) debug = 1;
    }
    printf("VERBOSE: %d | DEBUG: %d\n", verbose, debug);
    return 0;
}