### Ejercicio 3.34 - Función φ de Euler (Totient) ⭐⭐☆☆☆

#### Descripción
Implementar una función que calcule el Totient de Euler, `φ(n)`. Esta función
cuenta el número de enteros positivos hasta `n` que son coprimos con `n` (es
decir, `mcd(k, n) = 1` para `1 <= k <= n`).

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso (simple):** Iterar `k` desde 1 hasta `n` y contar cuántas veces
    `mcd(k, n) == 1`.
-   **Proceso (eficiente):** Usar la fórmula basada en los factores primos de
    `n`: $\phi(n) = n \prod_{p|n, p \text{ es primo}} (1 - \frac{1}{p})$.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Modularizar la descomposición en factores primos para calcular phi(n) mediante la fórmula de Euler.
-   **[*plus ultra*]:** Verificar que para un número primo p, phi(p) sea exactamente p - 1.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION phi_euler(n)
VARIABLES:
    resultado (real)
INICIO
    resultado = n
    p = 2
    temp_n = n
    MIENTRAS p*p <= temp_n HACER
        SI temp_n MOD p == 0 ENTONCES
            MIENTRAS temp_n MOD p == 0 HACER
                temp_n = temp_n / p
            FIN MIENTRAS
            resultado = resultado * (1.0 - (1.0 / p))
        FIN SI
        p = p + 1
    FIN MIENTRAS
    SI temp_n > 1 ENTONCES
        resultado = resultado * (1.0 - (1.0 / temp_n))
    FIN SI
    RETORNAR PARTE_ENTERA(resultado)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
