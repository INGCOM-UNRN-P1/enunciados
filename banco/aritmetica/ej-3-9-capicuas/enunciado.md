### Ejercicio 3.9 - Capicúas ⭐⭐⭐⭐☆

#### Descripción
Verificar si un número es capicúa (o palíndromo), es decir, si se lee igual de
izquierda a derecha que de derecha a izquierda.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** La forma más sencilla es utilizar la función del ejercicio
    anterior para invertir el número y luego comparar el número invertido con el
    original.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Modularizar la verificación en una función bool es_capicua(long n).
-   **[*plus ultra*]:** Generar y mostrar todos los números capicúas dentro de un intervalo [a, b].

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_capicua(n)
INICIO
    SI n == invertir_numero(n) ENTONCES
        RETORNAR VERDADERO
    SINO
        RETORNAR FALSO
    FIN SI
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
