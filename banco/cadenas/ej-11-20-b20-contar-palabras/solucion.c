/* Ejercicio b.20 - Contar palabras. */
#include "ej-11-20-b20-contar-palabras.h"

#include <ctype.h>
#include <stdio.h>

size_t contar_palabras(const char *cadena)
{
    size_t cantidad = 0;
    int dentro_de_palabra = 0;

    if (cadena == NULL)
    {
        return 0;
    }

    for (const char *actual = cadena; *actual != '\0'; actual++)
    {
        if (isspace((unsigned char)*actual))
        {
            dentro_de_palabra = 0;
        }
        else if (!dentro_de_palabra)
        {
            cantidad++;
            dentro_de_palabra = 1;
        }
    }

    return cantidad;
}

int main(void)
{
    char entrada[4096];

    if (fgets(entrada, sizeof entrada, stdin) == NULL)
    {
        return 0;
    }

    printf("%zu\n", contar_palabras(entrada));
    return 0;
}
