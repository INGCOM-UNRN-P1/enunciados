### Ejercicio 3.2 - División lenta ⭐⭐☆☆☆

#### Descripción
Implementar la función `int division_lenta(int dividendo, int divisor);` que calcula el cociente entero de la división de dos enteros mediante restas sucesivas. Este método emula cómo se realiza una división entera sin utilizar el operador `/`.

:::{hint} Lógica y Consideraciones
-   **Firma requerida:** `int division_lenta(int dividendo, int divisor);`
-   **Entrada:** Dos enteros positivos, `dividendo` y `divisor`.
-   **Proceso:** Se resta el `divisor` del `dividendo` de forma repetida mientras `dividendo >= divisor`. Se incrementa un contador (`cociente`) en cada resta.
-   **Retorno:** La función debe retornar el cociente entero obtenido. Si `divisor <= 0` o `dividendo < 0`, retornar `0`.

-   **[*plus ultra*]:** Validar precondiciones con assert(`divisor > 0`).
-   **[*plus ultra*]:** Implementar una variante que también devuelva el resto de la división a través de un puntero de salida.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION division_lenta(dividendo, divisor)
VARIABLES:
    cociente (entero)
INICIO
    cociente = 0
    MIENTRAS dividendo >= divisor HACER
        dividendo = dividendo - divisor
        cociente = cociente + 1
    FIN MIENTRAS
    RETORNAR cociente
FIN FUNCION
```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
