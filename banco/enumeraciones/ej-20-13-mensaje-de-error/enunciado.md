### Ejercicio 20.13 - Mensaje de error ⭐⭐☆☆☆

Implementar una función que retorne un mensaje descriptivo para cada código de
error.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
const char *mensaje_error(enum codigo_error error);
```
<!-- c -->
