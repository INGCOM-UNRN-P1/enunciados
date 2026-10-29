### Ejercicio 21.34 - Umbralización (Thresholding) ⭐⭐☆☆☆

Convertir una imagen en escala de grises a binaria (solo 0 y 255) usando un
umbral.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void umbralizar(int **imagen, int filas, int cols, int umbral);
```
<!-- c -->

**Algoritmo:** Si `pixel >= umbral`, asignar 255, sino asignar 0.
