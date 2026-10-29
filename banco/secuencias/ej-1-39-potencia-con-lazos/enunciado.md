### Ejercicio 1.39 - Potencia con Lazos ⭐⭐☆☆☆


Escribir una función que calcule `base^exponente` sin usar la función `pow()` de
la biblioteca `math.h`. Debe funcionar para exponentes enteros no negativos.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Una base y un exponente (entero no negativo).
-   **Variables:** Se necesita una variable `resultado` inicializada en 1.
-   **Proceso:**
-   **Salida:** Devolver el `resultado`.

-   **[*plus ultra*]:** Validar que el exponente sea un entero no negativo o manejar exponentes negativos retornando un double.
-   **[*plus ultra*]:** Comparar el rendimiento contra la función pow() de math.h.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO potencia_iterativa
ENTRADA: base (real), exponente (entero)
VARIABLES:
    resultado (real)

INICIO
    resultado = 1.0
    PARA i DESDE 1 HASTA exponente HACER
        resultado = resultado * base
    FIN PARA
    RETORNAR resultado
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
