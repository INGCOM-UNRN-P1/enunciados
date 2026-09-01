### Ejercicio 8.16 - Función con Parámetros Constantes ⭐⭐☆☆☆

Implementar `int maximo_arreglo(const int *arr, size_t n)` que encuentre el
máximo sin modificar el arreglo original.

**Ventaja:** El `const` documenta que la función no modifica el arreglo y
permite que el compilador detecte modificaciones accidentales.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->
