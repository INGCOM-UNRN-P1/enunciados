#include <stdio.h>

int factor = 10; // Global

int multiplicar(int valor)
{
    int factor = 2; // Local con mismo nombre que la global
    return valor * factor;
}

int main(void)
{
    int resultado = multiplicar(5);
    printf("Resultado: %d, Factor: %d\n", resultado, factor);
    return 0;
}