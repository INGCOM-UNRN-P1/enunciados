#include "ej-31-13-punteros-colgantes-dangling-po.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *obtener_saludo(void)
{
    static const char saludo[] = "Hola, mundo!";
    char *copia = malloc(sizeof(saludo));
    if (copia != NULL)
    {
        memcpy(copia, saludo, sizeof(saludo));
    }
    return copia;
}

int *crear_arreglo_estatico(void)
{
    static int arreglo[5] = {1, 2, 3, 4, 5};
    return arreglo;
}

int *crear_arreglo_dinamico(void)
{
    int *arreglo = malloc(5 * sizeof(*arreglo));
    if (arreglo == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < 5; i++)
    {
        arreglo[i] = i + 1;
    }
    return arreglo;
}

void procesar_y_liberar(int **ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    free(*ptr);
    *ptr = NULL;
}

int main(void)
{
    char *saludo = obtener_saludo();
    if (saludo == NULL)
    {
        return EXIT_FAILURE;
    }
    printf("%s\n", saludo);
    free(saludo);

    int *estatico = crear_arreglo_estatico();
    printf("%d\n", estatico[0]);

    int *dinamico = crear_arreglo_dinamico();
    if (dinamico == NULL)
    {
        return EXIT_FAILURE;
    }
    printf("%d\n", dinamico[0]);
    free(dinamico);

    int *a_liberar = crear_arreglo_dinamico();
    if (a_liberar == NULL)
    {
        return EXIT_FAILURE;
    }
    procesar_y_liberar(&a_liberar);
    if (a_liberar != NULL)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
