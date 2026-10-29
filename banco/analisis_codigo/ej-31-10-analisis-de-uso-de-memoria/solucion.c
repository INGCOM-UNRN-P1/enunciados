// Versión recursiva
long factorial_recursivo(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial_recursivo(n - 1);
}
// Versión iterativa
long factorial_iterativo(int n)
{
    long resultado = 1;
    for (int i = 2; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
}
// Versión con memoización
#include <stdlib.h>
static long *cache = NULL;
static int cache_size = 0;
long factorial_memoizado(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    // Inicializar cache si es necesario
    if (cache == NULL || n >= cache_size)
    {
        int nuevo_tamaño = n + 1;
        cache = realloc(cache, nuevo_tamaño * sizeof(long));
        // Inicializar nuevos elementos
        for (int i = cache_size; i < nuevo_tamaño; i++)
        {
            cache[i] = -1; // Valor que indica "no calculado"
        }
        cache_size = nuevo_tamaño;
    }
    // Verificar si ya está en cache
    if (cache[n] != -1)
    {
        return cache[n];
    }
    // Calcular y almacenar en cache
    cache[n] = n * factorial_memoizado(n - 1);
    return cache[n];
}

int main(void)
{
    return 0;
}