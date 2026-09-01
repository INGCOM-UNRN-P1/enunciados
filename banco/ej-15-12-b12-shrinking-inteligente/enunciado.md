### Ejercicio 15.12 - b.12 - Shrinking Inteligente ⭐⭐☆☆☆

Implementar un vector que no solo crece, sino que también reduce su capacidad
cuando el tamaño cae por debajo de 1/4 de la capacidad. Esto evita el overhead
de memoria manteniendo estabilidad.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
void vector_pop(vector_t *v)
{
    if (v->size == 0)
        return;
    v->size--;
    // Si size < capacity/4 y capacity > MIN_CAPACITY, reducir a la mitad
    if (v->size > 0 && v->size < v->capacity / 4 && v->capacity > 16)
    {
        v->capacity /= 2;
        v->datos = realloc(v->datos, v->capacity * sizeof(int));
    }
}
```
<!-- {code-block} c -->
