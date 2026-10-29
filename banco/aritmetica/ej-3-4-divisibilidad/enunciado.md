### Ejercicio 3.4 - Divisibilidad ⭐⭐☆☆☆

#### Descripción
Determinar si un número entero `a` es divisible de forma exacta por otro entero
`b`.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Dos enteros, `a` y `b`.
-   **Proceso:** La divisibilidad se comprueba con el operador módulo (`%`). Si
    el resto de la división `a % b` es 0, entonces `a` es divisible por `b`.
-   **Caso Especial:** Asegurarse de que `b` no sea cero para evitar un error de
    división por cero.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Manejar el caso especial de divisor cero informando error.
-   **[*plus ultra*]:** Implementar la verificación de divisibilidad por 2, 3, 5 y 10 usando reglas de dígitos.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_divisible(a, b)
INICIO
    SI b == 0 ENTONCES
        RETORNAR FALSO // O manejar como error
    FIN SI
    SI a MOD b == 0 ENTONCES
        RETORNAR VERDADERO
    SINO
        RETORNAR FALSO
    FIN SI
END FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
