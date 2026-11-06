#include <stdlib.h>
char *crear_copia(const char *original)
{
    int largo = 0;
    while (original[largo] != '\0')
    {
        largo++;
    }
    char *copia = malloc(largo + 1);
    // PUNTO DE ANÁLISIS
    for (int i = 0; i <= largo; i++)
    {
        copia[i] = original[i];
    }
    return copia;
}
int main()
{
    char *saludo_original = "Hola";
    char *saludo_copiado = NULL;
    saludo_copiado = crear_copia(saludo_original);
    free(saludo_copiado);
    return 0;
}
