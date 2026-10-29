/* Driver de casos de ej-3-1-suma-lenta, generado por deckard (Ola 32): no editar a mano. */
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int suma_lenta(int a, int b);

int main(void)
{
    char funcion[64];
    while (scanf("%63s", funcion) == 1)
    {
        if (strcmp(funcion, "suma_lenta") == 0)
        {
            int a = 0;
            int b = 0;
            if (scanf("%d %d", &a, &b) != 2)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%d\n", suma_lenta(a, b));
        }
        else
        {
            printf("FUNCION_DESCONOCIDA %s\n", funcion);
            return 2;
        }
    }
    return 0;
}
