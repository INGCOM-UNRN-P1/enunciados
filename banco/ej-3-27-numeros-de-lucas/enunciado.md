### Ejercicio 3.27 - Números de Lucas ⭐⭐☆☆☆

#### Descripción
Generar los primeros `n` términos de la secuencia de Lucas. Es una secuencia
similar a la de Fibonacci, pero comienza con 2 y 1.

:::{hint} Lógica y Consideraciones
-   **Definición:** $L_n = L_{n-1} + L_{n-2}$ con $L_0 = 2$ y $L_1 = 1$.
-   **Proceso:** La implementación es casi idéntica a la de Fibonacci, solo
    cambian los valores iniciales.
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Generar los primeros N términos de la secuencia de Lucas usando tipos enteros amplios.
-   **[*plus ultra*]:** Verificar la relación entre los números de Lucas y los números de Fibonacci.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO secuencia_lucas(n)
VARIABLES:
    a, b, siguiente (enteros)
INICIO
    SI n >= 1 ENTONCES ESCRIBIR 2
    SI n >= 2 ENTONCES ESCRIBIR 1

    a = 2, b = 1
    PARA i DESDE 3 HASTA n HACER
        siguiente = a + b
        ESCRIBIR siguiente
        a = b
        b = siguiente
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
