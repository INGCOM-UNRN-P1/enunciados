/* Driver de casos de ej-5-10-validacion-de-entrada, generado por deckard (Ola 32): no editar a mano. */
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

bool validar_rango(int valor, int min, int max);
bool validar_positivo(double valor);

int main(void)
{
    char funcion[64];
    while (scanf("%63s", funcion) == 1)
    {
        if (strcmp(funcion, "validar_rango") == 0)
        {
            int valor = 0;
            int min = 0;
            int max = 0;
            if (scanf("%d %d %d", &valor, &min, &max) != 3)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%d\n", (int)validar_rango(valor, min, max));
        }
        else if (strcmp(funcion, "validar_positivo") == 0)
        {
            double valor = 0;
            if (scanf("%lf", &valor) != 1)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%d\n", (int)validar_positivo(valor));
        }
        else
        {
            printf("FUNCION_DESCONOCIDA %s\n", funcion);
            return 2;
        }
    }
    return 0;
}
