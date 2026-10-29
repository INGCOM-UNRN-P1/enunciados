/* Driver de casos de ej-3-2-division-lenta, generado por deckard (Ola 32): no editar a mano. */
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int division_lenta(int dividendo, int divisor);

int main(void)
{
    char funcion[64];
    while (scanf("%63s", funcion) == 1)
    {
        if (strcmp(funcion, "division_lenta") == 0)
        {
            int dividendo = 0;
            int divisor = 0;
            if (scanf("%d %d", &dividendo, &divisor) != 2)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%d\n", division_lenta(dividendo, divisor));
        }
        else
        {
            printf("FUNCION_DESCONOCIDA %s\n", funcion);
            return 2;
        }
    }
    return 0;
}
