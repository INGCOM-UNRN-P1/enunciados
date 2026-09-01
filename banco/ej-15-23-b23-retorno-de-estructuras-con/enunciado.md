### Ejercicio 15.23 - b.23 - Retorno de Estructuras con Memoria Dinámica ⭐⭐⭐☆☆

Implementar una función que retorne un struct que contiene punteros a memoria
dinámica:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
struct resultado_t
{
    int *datos;
    size_t tamano;
};
struct resultado_t procesar_numeros(int *entrada, size_t n)
{
    struct resultado_t res = {NULL, 0};
    res.datos = malloc(n * sizeof(int));
    if (res.datos == NULL)
    {
        return res;
    }
    for (size_t i = 0; i < n; i++)
    {
        res.datos[i] = entrada[i] * 2;
    }
    res.tamano = n;
    return res;
}
```
<!-- {code-block} c -->
