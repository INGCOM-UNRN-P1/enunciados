### Ejercicio 27.7 - b.7 - Intercambio con XOR ⭐⭐☆☆☆

Implementar una función `void swap(int *a, int *b)` que intercambie los valores
de dos variables sin usar una variable temporal, utilizando únicamente el
operador XOR.

:::{hint} Lógica y Consideraciones

- **Proceso**:
  1. `*a = *a ^ *b;`
  2. `*b = *a ^ *b;` // Ahora `b` tiene el valor original de `a`
  3. `*a = *a ^ *b;` // Ahora `a` tiene el valor original de `b`

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->
