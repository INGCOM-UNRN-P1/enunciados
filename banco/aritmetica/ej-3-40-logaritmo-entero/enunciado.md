### Ejercicio 3.40 - Logaritmo Entero ⭐⭐☆☆☆

#### Descripción
Calcular el logaritmo entero en base `b` de un número `n`. Es el mayor entero
`k` tal que $b^k \le n$. La implementación no debe usar funciones de `math.h`.

:::{hint} Lógica y Consideraciones
-   **Proceso:** Se puede resolver con divisiones sucesivas.
    1.  Inicializar `k = 0`.
    2.  Mientras `n >= b`, dividir `n` por `b` e incrementar `k`.
    3.  El valor final de `k` es el resultado.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Validar que el argumento sea estrictamente positivo y la base mayor que 1.
-   **[*plus ultra*]:** Calcular el logaritmo entero mediante divisiones sucesivas en un lazo.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION logaritmo_entero(n, b)
VARIABLES:
    k (entero)
INICIO
    k = 0
    MIENTRAS n >= b HACER
        n = n / b
        k = k + 1
    FIN MIENTRAS
    RETORNAR k
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
