### Ejercicio 14.34 - Implementar getline ⭐⭐☆☆☆

Implementar una versión simplificada de la función `getline` de POSIX. La
función `ssize_t mi_getline(char **lineptr, size_t *n, FILE *stream)` debe leer
una línea de `stream`, almacenarla en un buffer apuntado por `*lineptr` y
expandir dicho buffer con `realloc` si es necesario.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
