### Ejercicio 20.17 - Filtrado de logs ⭐⭐☆☆☆

Implementar una función que determine si un mensaje debe ser registrado según el
nivel mínimo configurado.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool debe_registrar(enum nivel_log nivel_mensaje, enum nivel_log nivel_minimo);
```
<!-- c -->
