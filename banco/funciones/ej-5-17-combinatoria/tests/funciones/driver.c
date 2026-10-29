/* Driver de casos de ej-5-17-combinatoria, generado por deckard (Ola 32): no editar a mano. */
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

long long combinaciones(int n, int k);
long long permutaciones(int n, int k);

int main(void)
{
    char funcion[64];
    while (scanf("%63s", funcion) == 1)
    {
        if (strcmp(funcion, "combinaciones") == 0)
        {
            int n = 0;
            int k = 0;
            if (scanf("%d %d", &n, &k) != 2)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%lld\n", combinaciones(n, k));
        }
        else if (strcmp(funcion, "permutaciones") == 0)
        {
            int n = 0;
            int k = 0;
            if (scanf("%d %d", &n, &k) != 2)
            {
                printf("ERROR_ENTRADA\n");
                return 2;
            }
            printf("%lld\n", permutaciones(n, k));
        }
        else
        {
            printf("FUNCION_DESCONOCIDA %s\n", funcion);
            return 2;
        }
    }
    return 0;
}
