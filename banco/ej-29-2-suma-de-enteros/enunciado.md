### Ejercicio 29.2 - Suma de Enteros ⭐⭐☆☆☆

Implementar suma de dos enteros positivos usando solo recursividad (sin operador
`+` en el paso recursivo).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int suma_recursiva(int a, int b);
```
<!-- c -->

**Estrategia:** Decrementar `b` e incrementar `a` hasta que `b` sea 0.

$$
suma(a, b) = \begin{cases}
a & \text{si } b = 0 \\
suma(a + 1, b - 1) & \text{si } b > 0
\end{cases}
$$
