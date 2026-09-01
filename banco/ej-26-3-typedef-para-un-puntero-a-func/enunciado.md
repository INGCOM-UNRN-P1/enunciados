### Ejercicio 26.3 - Typedef para un Puntero a Función ⭐⭐⭐☆☆

Definir un tipo llamado `operacion_aritmetica_t` usando `typedef` que represente
un puntero a una función que toma dos enteros y devuelve un entero.

**Sintaxis:**
`typedef int (*operacion_aritmetica_t)(int, int);`
- `int (*...)`: El puntero devuelve un `int`.
- `operacion_aritmetica_t`: Es el nuevo nombre del tipo.
- `(int, int)`: El puntero apunta a una función que toma dos `int` como
  parámetros.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
