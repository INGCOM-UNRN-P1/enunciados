#include <stdio.h>

int ejecutar_ej_4_3_multiplos_de_3(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    for (int i = 0; i <= 30; i = i + 1)
    {
        if (i % 3 == 0)
        {
            printf("%d es múltiplo de 3\n", i);
        }
    }
    return 0;
}