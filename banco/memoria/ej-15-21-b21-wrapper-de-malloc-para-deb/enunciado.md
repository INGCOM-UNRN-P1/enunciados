### Ejercicio 15.21 - b.21 - Wrapper de malloc para Debugging ⭐⭐☆☆☆

Implementar wrappers de las funciones de memoria que agreguen logging:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
void *debug_malloc(size_t size, const char *archivo, int linea)
{
    void *ptr = malloc(size);
    printf("[MALLOC] %zu bytes en %p (%s:%d)\n", size, ptr, archivo, linea);
    return ptr;
}
void debug_free(void *ptr, const char *archivo, int linea)
{
    printf("[FREE] %p (%s:%d)\n", ptr, archivo, linea);
    free(ptr);
}
#define malloc(size) debug_malloc(size, __FILE__, __LINE__)
#define free(ptr) debug_free(ptr, __FILE__, __LINE__)
```
<!-- {code-block} c -->

## Casos Especiales
