/* Driver de casos de ej-5-2-mayor-de-dos-numeros, generado por deckard (Ola 32): no editar a mano. */
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int mayor(int a, int b);

int main(void)
{
    char funcion[64];
    while (scanf("%63s", funcion) == 1)
    {
        if (strcmp(funcion, "mayor") == 0)
        {
            int a = 0;
            int b = 0;
            if (scanf("%d %d", &a, &b) != 2)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%d\n", mayor(a, b));
        }
        else
        {
            printf("FUNCION_DESCONOCIDA %s\n", funcion);
            return 2;
        }
    }
    return 0;
}
