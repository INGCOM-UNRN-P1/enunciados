### Ejercicio 20.1 - Día siguiente ⭐⭐☆☆☆

Implementar una función que retorne el día siguiente al día proporcionado. El
día siguiente a `DOMINGO` es `LUNES`.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
enum dia_semana dia_siguiente(enum dia_semana dia_actual);
```
<!-- c -->
