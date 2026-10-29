/* Driver de casos de ej-5-8-factorial-recursivo-e-iterativo, generado por deckard (Ola 32): no editar a mano. */
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int factorial_iterativo(int n);
int factorial_recursivo(int n);

int main(void)
{
    char funcion[64];
    while (scanf("%63s", funcion) == 1)
    {
        if (strcmp(funcion, "factorial_iterativo") == 0)
        {
            int n = 0;
            if (scanf("%d", &n) != 1)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%d\n", factorial_iterativo(n));
        }
        else if (strcmp(funcion, "factorial_recursivo") == 0)
        {
            int n = 0;
            if (scanf("%d", &n) != 1)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%d\n", factorial_recursivo(n));
        }
        else
        {
            printf("FUNCION_DESCONOCIDA %s\n", funcion);
            return 2;
        }
    }
    return 0;
}
