### Ejercicio 3.23 - Conjetura de Goldbach ⭐⭐☆☆☆

#### Descripción
La conjetura de Goldbach (aún no probada) establece que todo número par mayor
que 2 puede expresarse como la suma de dos números primos. Escribir un programa
que, dado un número par, encuentre un par de números primos que lo sumen.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un número entero par `n` > 2.
-   **Proceso:** 
    1.  Se necesita una función `es_primo(x)`.
    2.  Iterar con un número `p` desde 2 hasta `n/2`.
    3.  En cada iteración, si `p` es primo, verificar si `n-p` también es primo.
    4.  Si ambos lo son, se ha encontrado un par y se puede terminar.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que el número ingresado sea un entero par mayor que 2.
-   **[*plus ultra*]:** Encontrar todas las descomposiciones en suma de dos primos para el número dado.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO encontrar_par_goldbach(n)
INICIO
    PARA p DESDE 2 HASTA n / 2 HACER
        SI es_primo(p) Y es_primo(n - p) ENTONCES
            ESCRIBIR n, " = ", p, " + ", n - p
            TERMINAR
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
