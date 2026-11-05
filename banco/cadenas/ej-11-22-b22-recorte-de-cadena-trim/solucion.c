/* Ejercicio b.22 - Recorte de cadena (trim). */
#include "ej-11-22-b22-recorte-de-cadena-trim.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *trim(char *cadena)
{
    char *inicio;
    char *fin;

    if (cadena == NULL)
    {
        return NULL;
    }

    inicio = cadena;
    while (*inicio != '\0' && isspace((unsigned char)*inicio))
    {
        inicio++;
    }

    fin = inicio + strlen(inicio);
    while (fin > inicio && isspace((unsigned char)fin[-1]))
    {
        fin--;
    }
    *fin = '\0';

    memmove(cadena, inicio, (size_t)(fin - inicio) + 1);
    return cadena;
}

int main(void)
{
    char entrada[4096];

    if (fgets(entrada, sizeof entrada, stdin) == NULL)
    {
        return 0;
    }

    printf("%s\n", trim(entrada));
    return 0;
}
