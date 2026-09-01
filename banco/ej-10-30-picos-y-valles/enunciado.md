### Ejercicio 10.30 - Picos y valles ⭐⭐☆☆☆


Escribir una función que encuentre todos los "picos" en un arreglo. Un pico es
un elemento que es estrictamente mayor que sus dos vecinos (el anterior y el
siguiente). Los elementos en los extremos no pueden ser picos.

:::{hint} Lógica y Consideraciones

-   **Proceso:** Recorrer el arreglo desde el segundo elemento (`i=1`) hasta el
    penúltimo (`i=n-2`).
-   **Condición:** En cada posición `i`, verificar si `arreglo[i] >
    arreglo[i-1]` Y `arreglo[i] > arreglo[i+1]`.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO encontrar_picos(arreglo, tamano)
INICIO
    PARA i DESDE 1 HASTA tamano-2 HACER
        SI arreglo[i] > arreglo[i-1] Y arreglo[i] > arreglo[i+1] ENTONCES
            ESCRIBIR arreglo[i], " es un pico en el índice ", i
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
