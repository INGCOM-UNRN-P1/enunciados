### Ejercicio 3.37 - Fracciones Egipcias ⭐⭐☆☆☆

#### Descripción
Escribir una función que descomponga una fracción propia `a/b` en una suma de
fracciones unitarias distintas (fracciones con numerador 1).

:::{hint} Lógica y Consideraciones
-   **Algoritmo Greedy:** Un método común es encontrar repetidamente la fracción
    unitaria más grande que sea menor o igual a la fracción restante.
-   **Proceso:** 
    1.  Dada la fracción `num/den`.
    2.  Encontrar el denominador `d` de la siguiente fracción unitaria: `d =
        techo(den / num)`.
    3.  Imprimir `1/d`.
    4.  Actualizar la fracción restante: `num/den = num/den - 1/d`.
    5.  Repetir hasta que `num` sea 0.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que el numerador sea menor que el denominador (fracción propia positiva).
-   **[*plus ultra*]:** Implementar el algoritmo voraz (greedy) de Fibonacci-Sylvester.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO fracciones_egipcias(num, den)
INICIO
    MIENTRAS num != 0 HACER
        d = TECHO(den / num)
        ESCRIBIR "1/", d
        num = num * d - den
        den = den * d
        // Simplificar fracción num/den
    FIN MIENTRAS
    FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
