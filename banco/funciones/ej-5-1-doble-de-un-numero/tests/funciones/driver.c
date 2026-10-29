/* Driver de casos de ej-5-1-doble-de-un-numero, generado por deckard (Ola 32): no editar a mano. */
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int doble(int n);

int main(void)
{
    char funcion[64];
    while (scanf("%63s", funcion) == 1)
    {
        if (strcmp(funcion, "doble") == 0)
        {
            int n = 0;
            if (scanf("%d", &n) != 1)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%d\n", doble(n));
        }
        else
        {
            printf("FUNCION_DESCONOCIDA %s\n", funcion);
            return 2;
        }
    }
    return 0;
}
