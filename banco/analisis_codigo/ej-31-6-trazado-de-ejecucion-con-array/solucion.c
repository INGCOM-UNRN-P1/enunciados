#include <stdlib.h>
int *duplicar_array(int *original, int tam)
{
    int *nuevo = malloc(tam * sizeof(int));
    // PUNTO A
    for (int i = 0; i < tam; i++)
    {
        nuevo[i] = original[i] * 2;
    }
    // PUNTO B
    return nuevo;
}

int proc__ejecucion_con_array(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    int numeros[3] = {5, 10, 15};
    int *duplicados = NULL;
    // PUNTO C
    duplicados = duplicar_array(numeros, 3);
    // PUNTO D
    free(duplicados);
    return 0;
}