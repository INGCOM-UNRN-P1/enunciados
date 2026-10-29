### Ejercicio 1.24 - Serie de Fibonacci (Iterativa) ⭐⭐☆☆☆


Generar y mostrar los primeros `n` términos de la serie de Fibonacci. En esta
serie, cada número es la suma de los dos anteriores, comenzando con 0 y 1.

:::{hint} Lógica y Consideraciones
-   **Variables:** Se necesitan al menos tres variables para mantener el estado:
-   **Casos Base:** Los primeros dos términos (para n=0 y n=1) son fijos (0 y
-   **Proceso:**

-   **[*plus ultra*]:** Usar tipos enteros sin signo o long long para calcular términos más altos sin desbordamiento.
-   **[*plus ultra*]:** Calcular el cociente entre términos consecutivos para observar la convergencia al número áureo.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO fibonacci_iterativo
ENTRADA: n (entero)
VARIABLES:
    a, b, siguiente, i (enteros)

INICIO
    SI n >= 1 ENTONCES ESCRIBIR 0
    SI n >= 2 ENTONCES ESCRIBIR 1

    a = 0
    b = 1

    PARA i DESDE 3 HASTA n HACER
        siguiente = a + b
        ESCRIBIR siguiente
        a = b
        b = siguiente
    FIN PARA
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
