### Ejercicio 15.15 - b.15 - Medición de Overhead de malloc ⭐⭐☆☆☆

Escribir un programa que mida el overhead de `malloc` comparando el tamaño
solicitado vs. el espacio realmente consumido (usando herramientas como
`malloc_usable_size` en glibc):


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
#include <malloc.h>
int main()
{
    size_t tamaños[] = {1, 8, 16, 32, 64, 100, 128, 256, 512, 1024};
    for (size_t i = 0; i < sizeof(tamaños) / sizeof(tamaños[0]); i++)
    {
        void *ptr = malloc(tamaños[i]);
        size_t real = malloc_usable_size(ptr);
        printf(
            "Solicitado: %5zu bytes -> Real: %5zu bytes (%.1f%% overhead)\n",
            tamaños[i], real, 100.0 * (real - tamaños[i]) / tamaños[i]);
        free(ptr);
    }
    return 0;
}
```
<!-- {code-block} c -->
