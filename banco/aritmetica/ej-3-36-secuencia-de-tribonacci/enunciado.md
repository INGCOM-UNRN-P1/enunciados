### Ejercicio 3.36 - Secuencia de Tribonacci ⭐⭐☆☆☆

#### Descripción
Generar los primeros `n` términos de la secuencia de Tribonacci, donde cada
término es la suma de los tres anteriores. La secuencia puede comenzar de
diferentes formas, una común es `0, 1, 1, 2, 4, 7, 13, ...`

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** Similar a Fibonacci, pero se necesitan tres variables para
    guardar los tres términos anteriores.
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Usar un lazo iterativo manteniendo tres variables de estado para los términos previos.
-   **[*plus ultra*]:** Generar los primeros N términos de la secuencia de Tribonacci.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO tribonacci(n)
VARIABLES:
    a, b, c, siguiente (enteros)
INICIO
    a=0, b=1, c=1
    // Imprimir los primeros términos según n
    PARA i DESDE 4 HASTA n HACER
        siguiente = a + b + c
        ESCRIBIR siguiente
        a = b, b = c, c = siguiente
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
