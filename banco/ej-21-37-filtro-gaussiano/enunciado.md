### Ejercicio 21.37 - Filtro gaussiano ⭐⭐☆☆☆

Implementar un filtro gaussiano para suavizado de imagen.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void filtro_gaussiano(double **imagen, int filas, int cols, double sigma);
```
<!-- c -->

**Kernel gaussiano 3x3:**
$$K = \frac{1}{16}\begin{pmatrix} 1 & 2 & 1 \\ 2 & 4 & 2 \\ 1 & 2 & 1 \end{pmatrix}$$
