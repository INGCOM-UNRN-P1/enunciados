#include <stdio.h>

int main(void)
{
    double numero;

    if (scanf("%lf", &numero) != 1)
        return 1;

    if (numero > 0)
        puts("Positivo");
    else if (numero < 0)
        puts("Negativo");
    else
        puts("Cero");

    return 0;
}
