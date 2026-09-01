#include <stdio.h>

int llamadas = 0;

int incrementar(void)
{
    llamadas++;
    return 1;
}

int main(void)
{
    int a = 0;
    if (a != 0 && incrementar())
    {
        printf("Rama 1\n");
    }
    printf("Llamadas tras primer if: %d\n", llamadas);

    int b = 1;
    if (b == 1 || incrementar())
    {
        printf("Rama 2\n");
    }
    printf("Llamadas tras segundo if: %d\n", llamadas);
    return 0;
}