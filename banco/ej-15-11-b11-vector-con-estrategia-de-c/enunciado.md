### Ejercicio 15.11 - b.11 - Vector con Estrategia de Crecimiento ⭐⭐☆☆☆

Implementar un vector dinámico con diferentes estrategias de crecimiento:
- **Lineal**: incrementar en un valor fijo (ej. +10)
- **Geométrico**: duplicar la capacidad (factor 2)
- **Fibonacci**: crecer según la secuencia de Fibonacci

Comparar el número de `realloc` realizados al insertar 10,000 elementos.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
