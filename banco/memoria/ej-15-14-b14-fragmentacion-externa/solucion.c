#include <stdio.h>
#include <stdlib.h>

#define N 1000

int proc_ragmentacion_externa(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    void *ptrs[N];
    // Alojar muchos bloques pequeños
    for (int i = 0; i < N; i++)
    {
        ptrs[i] = malloc(64);
    }
    // Liberar bloques alternados
    for (int i = 0; i < N; i += 2)
    {
        free(ptrs[i]);
        ptrs[i] = NULL;
    }
    // Intentar alojar un bloque grande
    void *grande = malloc(64 * (N / 2));
    if (grande == NULL)
    {
        printf("No se pudo alojar bloque grande debido a fragmentación\n");
    }
    else
    {
        printf("Bloque grande asignado exitosamente\n");
        free(grande);
    }
    // Liberar bloques restantes
    for (int i = 1; i < N; i += 2)
    {
        free(ptrs[i]);
    }
    return 0;
}