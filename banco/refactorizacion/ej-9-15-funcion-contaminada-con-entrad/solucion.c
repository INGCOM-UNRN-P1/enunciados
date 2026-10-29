#include <stdio.h>

void clasificar_temperatura_ambiente(double temp)
{
    if (temp < 10.0)
    {
        printf("Hace frio\n");
    }
    else if (temp <= 25.0)
    {
        printf("Templado\n");
    }
    else
    {
        printf("Caluroso\n");
    }
}

int main(void)
{
    return 0;
}