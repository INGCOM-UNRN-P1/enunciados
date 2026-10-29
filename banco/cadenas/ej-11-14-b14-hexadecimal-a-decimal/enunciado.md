### Ejercicio 11.14 - b.14 - Hexadecimal a decimal ⭐⭐☆☆☆

#### Descripción
Convertir una cadena que representa un número en formato hexadecimal (dígitos
0-9 y letras A-F, insensibles a mayúsculas) a su valor entero decimal.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:** Similar a la conversión de binario, pero la base es 16.
-   **Conversión de Dígitos:** Se necesita una lógica para convertir los
    caracteres 'A'- 'F' a sus valores numéricos (10-15).

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION hexadecimal_a_decimal(cadena_hex)
VARIABLES:
    decimal (entero)
    valor_digito (entero)
INICIO
    decimal = 0
    PARA cada caracter c en cadena_hex HACER
        SI c >= '0' Y c <= '9' ENTONCES
            valor_digito = c - '0'
        SINO SI c >= 'a' Y c <= 'f' ENTONCES
            valor_digito = c - 'a' + 10
        SINO SI c >= 'A' Y c <= 'F' ENTONCES
            valor_digito = c - 'A' + 10
        FIN SI
        decimal = (decimal * 16) + valor_digito
    FIN PARA
    RETORNAR decimal
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
