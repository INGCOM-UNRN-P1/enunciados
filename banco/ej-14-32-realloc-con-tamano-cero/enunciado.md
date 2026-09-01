### Ejercicio 14.32 - realloc con Tamaño Cero ⭐⭐☆☆☆

Escribir un pequeño programa que demuestre que `realloc(ptr, 0)` se comporta de
manera idéntica a `free(ptr)`. Verificar que el puntero original ya no es válido
después de la operación.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
