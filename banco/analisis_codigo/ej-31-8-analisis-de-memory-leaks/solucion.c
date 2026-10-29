#include <stdio.h>

#include <stdlib.h>
#include <string.h>
char *procesar_texto(const char *entrada)
{
    int len = strlen(entrada);
    char *resultado = malloc(len * 2 + 1);
    char *temp = malloc(len + 1);
    strcpy(temp, entrada);
    // Duplicar cada carácter
    for (int i = 0; i < len; i++)
    {
        resultado[i * 2] = temp[i];
        resultado[i * 2 + 1] = temp[i];
    }
    resultado[len * 2] = '\0';
    if (len > 10)
    {
        char *resultado_largo = malloc(len * 3 + 1);
        // Triplicar en lugar de duplicar
        for (int i = 0; i < len; i++)
        {
            resultado_largo[i * 3] = temp[i];
            resultado_largo[i * 3 + 1] = temp[i];
            resultado_largo[i * 3 + 2] = temp[i];
        }
        resultado_largo[len * 3] = '\0';
        return resultado_largo;
    }
    return resultado;
}

int proc_isis_de_memory_leaks(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    char *texto1 = procesar_texto("Hola");
    char *texto2 = procesar_texto("Este es un texto muy largo");
    printf("Texto 1: %s\n", texto1);
    printf("Texto 2: %s\n", texto2);
    return 0;
}