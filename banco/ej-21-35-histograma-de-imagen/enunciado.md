### Ejercicio 21.35 - Histograma de Imagen ⭐⭐☆☆☆

Calcular el histograma de una imagen (frecuencia de cada nivel de intensidad).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void calcular_histograma(int **imagen, int filas, int cols, int *histograma);
```
<!-- c -->

El histograma tiene 256 posiciones (0-255) que cuentan la frecuencia de cada
intensidad.
