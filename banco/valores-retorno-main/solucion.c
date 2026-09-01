#include <stdio.h>
#include <stdlib.h>

int ejecutar_valores_retorno_main(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    int v = 0;
    if (scanf("%d", &v) == 1 && v >= 0) {
        printf("EXIT_SUCCESS\n");
        return EXIT_SUCCESS;
    }
    printf("EXIT_FAILURE\n");
    return EXIT_FAILURE;
}