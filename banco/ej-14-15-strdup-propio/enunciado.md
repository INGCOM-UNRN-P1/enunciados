### Ejercicio 14.15 - strdup Propio ⭐⭐☆☆☆

Implementar su propia versión de la función no estándar `strdup`, que recibe una
cadena y devuelve un puntero a una nueva cadena en memoria dinámica con el mismo
contenido.

`char* mi_strdup(const char* s);`
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
