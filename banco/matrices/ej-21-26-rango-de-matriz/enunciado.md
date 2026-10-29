### Ejercicio 21.26 - Rango de matriz ⭐⭐⭐☆☆

Implementar un algoritmo para calcular el rango de una matriz usando eliminación
gaussiana.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int calcular_rango(double **matriz, int filas, int cols);
```
<!-- c -->

**Estrategia:** Reducir la matriz a forma escalonada y contar filas no nulas.
