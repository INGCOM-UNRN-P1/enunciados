### Ejercicio 1.37 - Contador de Dígitos ⭐⭐⭐☆☆


Crear una función que reciba un número entero y devuelva la cantidad de dígitos
que lo componen.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un número entero.
-   **Proceso:** La forma más simple es usar la división entera por 10
-   **Caso Especial:** Si el número de entrada es 0, tiene 1 dígito. El lazo

-   **[*plus ultra*]:** Manejar correctamente números negativos y el caso especial del número 0.
-   **[*plus ultra*]:** Modularizar el conteo en una función recursiva o iterativa pura.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO contar_digitos
ENTRADA: numero (entero)
VARIABLES:
    contador (entero)

INICIO
    SI numero == 0 ENTONCES
        RETORNAR 1
    FIN SI

    contador = 0
    // Manejar números negativos
    numero_abs = VALOR_ABSOLUTO(numero)

    MIENTRAS numero_abs > 0 HACER
        numero_abs = numero_abs / 10
        contador = contador + 1
    FIN MIENTRAS

    RETORNAR contador
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
