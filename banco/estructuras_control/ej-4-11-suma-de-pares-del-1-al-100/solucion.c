#include <stdio.h>

int main(void)
{
    int suma = 0;
    for (int numero = 2; numero <= 100; numero += 2)
        suma += numero;
    printf("%d\n", suma);
    return 0;
}
