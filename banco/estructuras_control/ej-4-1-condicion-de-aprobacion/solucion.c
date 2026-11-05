#include <stdio.h>


int main(void)
{
    int nota = 0;
    printf("Ingrese la nota: ");
    if (scanf("%d", &nota) != 1)
    {
        printf("Error al leer la nota.\n");
        return 1;
    }
    if (nota >= 6)
    {
        printf("Promociona\n");
    }
    else if (nota >= 4)
    {
        printf("Aprueba\n");
    }
    else
    {
        printf("Desaprueba\n");
    }
    return 0;
}