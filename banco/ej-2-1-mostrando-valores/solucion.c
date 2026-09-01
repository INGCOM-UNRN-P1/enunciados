#include <stdio.h>

int proc__1_mostrando_valores(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    int edad = 20;
    float altura = 1.82f;
    char inicial = 'J';
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);
    return 0;
}