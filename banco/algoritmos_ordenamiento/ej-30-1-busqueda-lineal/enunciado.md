### Ejercicio 30.1 - Búsqueda Lineal ⭐⭐☆☆☆

Implementar una función que busque un elemento en un arreglo recorriéndolo
secuencialmente desde el primer hasta el último elemento. Es el método de
búsqueda más simple y no requiere que el arreglo esté ordenado.

**Lógica y Consideraciones:**
- **Proceso**: Iterar a través del arreglo con un índice `i` desde 0 hasta
  `n-1`. En cada paso, comparar `arreglo[i]` con el valor buscado.
- **Salida**: Si se encuentra el elemento, devolver su índice `i`. Si el lazo
  termina sin encontrarlo, devolver `-1`.
- **Complejidad Temporal**: $O(n)$.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->
