### Ejercicio 15.13 - b.13 - Realloc Fallido ⭐⭐☆☆☆

Escribir una función que maneje correctamente el fallo de `realloc`:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
bool vector_push(vector_t *v, int dato)
{
    if (v->size == v->capacity)
    {
        size_t nueva_capacidad = v->capacity * 2;
        int *nuevo_bloque = realloc(v->datos, nueva_capacidad * sizeof(int));
        if (nuevo_bloque == NULL)
        {
            return false; // Fallo, pero v->datos sigue válido
        }
        v->datos = nuevo_bloque;
        v->capacity = nueva_capacidad;
    }
    v->datos[v->size++] = dato;
    return true;
}
```
<!-- {code-block} c -->

:::{important} Manejo de `realloc`

Nunca asignés directamente `ptr = realloc(ptr, size)`. Si falla, perdés el
puntero original y tenés un leak. Usá un puntero temporal como en el ejemplo.

:::
<!-- {important} Manejo de `realloc` -->

## Análisis de Rendimiento y Fragmentación
