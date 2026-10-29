### Ejercicio 14.30 - Matriz Dinámica en Bloque Contiguo ⭐⭐⭐☆☆

Implementar la creación y liberación de una matriz `M x N` de dos formas:
1.  Como un arreglo de punteros a filas (el método tradicional).
2.  Como un único bloque de memoria contigua de `M*N` elementos, y un arreglo de
    punteros `int**` donde cada puntero `[i]` se calcula para que apunte a la
    fila `i` dentro del bloque contiguo. Comparar la complejidad de liberación
    de ambas.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
