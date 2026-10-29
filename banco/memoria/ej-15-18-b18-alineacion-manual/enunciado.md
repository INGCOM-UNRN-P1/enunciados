### Ejercicio 15.18 - b.18 - Alineación Manual ⭐⭐☆☆☆

Implementar una función que aloje memoria alineada a un límite específico (ej.
64 bytes para optimización de caché):


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
void *malloc_alineado(size_t size, size_t alineacion)
{
    void *ptr = NULL;
    // posix_memalign requiere que alineacion sea potencia de 2
    if (posix_memalign(&ptr, alineacion, size) != 0)
    {
        return NULL;
    }
    return ptr;
}
```
<!-- {code-block} c -->

## Integración con Herramientas
