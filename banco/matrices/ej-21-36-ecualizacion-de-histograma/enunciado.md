### Ejercicio 21.36 - Ecualización de Histograma ⭐⭐☆☆☆

Mejorar el contraste de una imagen mediante ecualización de histograma.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void ecualizar_histograma(int **imagen, int filas, int cols);
```
<!-- c -->

**Algoritmo:**
1. Calcular histograma
2. Calcular función de distribución acumulativa (CDF)
3. Normalizar CDF y aplicar transformación a cada píxel
