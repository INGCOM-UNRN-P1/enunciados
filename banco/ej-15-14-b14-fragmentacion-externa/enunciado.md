### Ejercicio 15.14 - b.14 - Fragmentación Externa ⭐⭐☆☆☆

Escribir un programa que demuestre fragmentación externa:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
#define N 1000
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
```
<!-- {code-block} c -->
