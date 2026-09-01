### Ejercicio 21.47 - Método de Jacobi ⭐⭐☆☆☆

Resolver $Ax = b$ iterativamente usando el método de Jacobi.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double *metodo_jacobi(double **A, double *b, int n, double tolerancia,
                      int max_iter);
```
<!-- c -->

**Fórmula de iteración:**
$$x_i^{(k+1)} = \frac{1}{a_{ii}}\left(b_i - \sum_{j \neq i} a_{ij}x_j^{(k)}\right)$$
