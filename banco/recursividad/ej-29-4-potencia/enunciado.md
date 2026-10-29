### Ejercicio 29.4 - Potencia ⭐⭐☆☆☆

Implementar $base^{exponente}$ de forma recursiva.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
long int potencia(int base, int exponente);
```
<!-- c -->

**Versión básica:** $O(n)$ en tiempo.

$$
base^{exp} = \begin{cases}
1 & \text{si } exp = 0 \\
base \times potencia(base, exp - 1) & \text{si } exp > 0
\end{cases}
$$

**Desafío:** Implementar versión optimizada usando exponenciación rápida (divide
y vencerás) con complejidad $O(\log n)$.

$$
base^{exp} = \begin{cases}
1 & \text{si } exp = 0 \\
\left(base^{exp/2}\right)^2 & \text{si } exp \text{ es par} \\
base \times \left(base^{(exp-1)/2}\right)^2 & \text{si } exp \text{ es impar}
\end{cases}
$$

---

## Series Numéricas Recursivas
