### Ejercicio 3.20 - Coeficiente Binomial ⭐⭐☆☆☆

#### Descripción
Calcular el coeficiente binomial "n en k", denotado como $C(n, k)$ o
$\binom{n}{k}$, que representa el número de formas de elegir `k` elementos de un
conjunto de `n` elementos sin importar el orden.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Dos enteros no negativos, `n` y `k`.
-   **Proceso:** Como se mencionó en el ejercicio anterior, calcularlo mediante
    la fórmula iterativa $\prod_{i=1}^{k} \frac{n-i+1}{i}$ es numéricamente más
    estable que usar factoriales. Es importante realizar la multiplicación antes
    de la división en cada paso para mantener la precisión y evitar divisiones
    prematuras.
-   **Optimización:** Dado que $\binom{n}{k} = \binom{n}{n-k}$, se puede elegir
    el valor más pequeño entre `k` y `n-k` para reducir el número de
    iteraciones.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Optimizar el cálculo de C(n, k) usando la propiedad C(n, k) = C(n, n-k).
-   **[*plus ultra*]:** Validar que 0 <= k <= n.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION coeficiente_binomial(n, k)
    SI k < 0 O k > n ENTONCES
        RETORNAR 0
    FIN SI
    SI k == 0 O k == n ENTONCES
        RETORNAR 1
    FIN SI
    // Optimización
    SI k > n / 2 ENTONCES
        k = n - k
    FIN SI

    resultado = 1
    PARA i DESDE 1 HASTA k HACER
        resultado = resultado * (n - i + 1) / i
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
