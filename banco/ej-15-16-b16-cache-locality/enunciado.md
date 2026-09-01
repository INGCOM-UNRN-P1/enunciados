### Ejercicio 15.16 - b.16 - Cache Locality ⭐⭐☆☆☆

Comparar el rendimiento de acceso secuencial vs. aleatorio en un arreglo grande:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
#define SIZE (100 * 1024 * 1024) // 100M enteros
int main()
{
    int *arr = malloc(SIZE * sizeof(int));
    // Secuencial
    clock_t inicio = clock();
    for (size_t i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }
    clock_t fin = clock();
    printf("Secuencial: %.3f ms\n", 1000.0 * (fin - inicio) / CLOCKS_PER_SEC);
    // Aleatorio
    inicio = clock();
    for (size_t i = 0; i < SIZE; i++)
    {
        size_t idx = rand() % SIZE;
        arr[idx] = i;
    }
    fin = clock();
    printf("Aleatorio: %.3f ms\n", 1000.0 * (fin - inicio) / CLOCKS_PER_SEC);
    free(arr);
    return 0;
}
```
<!-- {code-block} c -->

**Observación esperada:** El acceso secuencial será significativamente más
rápido debido a mejor locality y uso del caché.

## Alineación de Memoria
