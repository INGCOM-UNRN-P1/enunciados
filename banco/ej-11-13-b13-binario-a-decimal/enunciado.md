### Ejercicio 11.13 - b.13 - Binario a decimal ⭐⭐⭐⭐☆

#### Descripción
Convertir una cadena que representa un número en formato binario (compuesta de
'0's y '1's) a su valor entero decimal correspondiente.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:** Recorrer la cadena binaria. Para cada dígito, multiplicar el
    valor acumulado por 2 y sumar el valor del dígito actual (0 o 1).
-   $D = \sum_{i=0}^{n-1} b_i \cdot 2^{n-1-i}$

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION binario_a_decimal(cadena_binaria)
VARIABLES:
    decimal (entero)
INICIO
    decimal = 0
    PARA cada caracter c en cadena_binaria HACER
        decimal = (decimal * 2) + (c - '0')
    FIN PARA
    RETORNAR decimal
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
