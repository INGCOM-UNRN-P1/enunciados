### Ejercicio 11.9 - b.9 - Compresión RLE (Run-Length Encoding) ⭐⭐☆☆☆

#### Descripción
Implementar una forma simple de compresión de cadenas llamada Run-Length
Encoding. Esta técnica compacta una cadena reemplazando secuencias de caracteres
idénticos por el número de repeticiones seguido del carácter.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer la cadena de entrada.
    2.  Mantener un `contador` para el carácter actual.
    3.  Si el siguiente carácter es diferente o se llega al final de la cadena,
        se añade el `contador` y el carácter actual a la cadena de resultado.
    4.  Reiniciar el `contador` y continuar.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION comprimir_rle(cadena)
VARIABLES:
    resultado (cadena)
    contador, i (enteros)
INICIO
    i = 0
    MIENTRAS i < LONGITUD(cadena) HACER
        contador = 1
        MIENTRAS i+1 < LONGITUD(cadena) Y cadena[i] == cadena[i+1] HACER
            contador++, i++
        FIN MIENTRAS
        AÑADIR numero_a_cadena(contador) a resultado
        AÑADIR cadena[i] a resultado
        i++
    FIN MIENTRAS
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
