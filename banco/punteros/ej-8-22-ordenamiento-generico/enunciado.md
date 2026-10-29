### Ejercicio 8.22 - Ordenamiento Genérico ⭐⭐☆☆☆

Implementar `void ordenar_generico(void *arr, size_t n, size_t tam_elemento, int
(*comparar)(const void*, const void*))` que ordene un arreglo de cualquier tipo
usando una función de comparación personalizada.

**Pista:** Similar a `qsort` de la biblioteca estándar. Usar `memcpy` para
intercambiar elementos.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->
