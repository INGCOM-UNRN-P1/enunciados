### Ejercicio 29.5 - Fibonacci Básico ⭐☆☆☆☆

Implementar la secuencia de Fibonacci recursivamente.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
long int fibonacci(int n);
```
<!-- c -->

**Ecuación de recurrencia:**

$$
F(n) = \begin{cases}
0 & \text{si } n = 0 \\
1 & \text{si } n = 1 \\
F(n-1) + F(n-2) & \text{si } n > 1
\end{cases}
$$
