### Ejercicio 3.11 - Números Perfectos ⭐⭐☆☆☆

#### Descripción
Determinar si un número es un "número perfecto". Un número perfecto es un entero
positivo que es igual a la suma de sus divisores propios positivos (todos sus
divisores excepto él mismo).

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** 
    1.  Calcular la suma de los divisores propios de `n`. Para ello, iterar
        desde 1 hasta `n/2`.
    2.  En cada iteración, si el iterador `i` es un divisor de `n` (`n % i ==
        0`), se suma `i` a un acumulador.
    3.  Finalmente, comparar la suma obtenida con el número original `n`.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que el número sea entero positivo mayor a 1.
-   **[*plus ultra*]:** Determinar si el número es abundante, deficiente o perfecto.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_perfecto(n)
VARIABLES:
    suma_divisores (entero)
INICIO
    suma_divisores = 0
    PARA i DESDE 1 HASTA n-1 HACER
        SI n MOD i == 0 ENTONCES
            suma_divisores = suma_divisores + i
        FIN SI
    FIN PARA
    RETORNAR (suma_divisores == n)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
