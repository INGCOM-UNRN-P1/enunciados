### Ejercicio 29.3 - Producto por Sumas Recursivas ⭐⭐☆☆☆

Implementar multiplicación usando solo sumas recursivas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Transformar el algoritmo a una versión con recursión de
    cola (*tail recursion*) para reducir el consumo de pila.
-   **[*plus ultra*]:** Añadir un contador del número de llamadas recursivas
    realizadas para analizar la complejidad empírica.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int producto_recursivo(int a, int b);
```
<!-- c -->

$$
a \times b = \begin{cases}
0 & \text{si } b = 0 \\
a + producto(a, b - 1) & \text{si } b > 0
\end{cases}
$$

**Complejidad:** $O(b)$ en tiempo.
