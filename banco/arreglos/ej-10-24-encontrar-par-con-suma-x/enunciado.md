### Ejercicio 10.24 - Encontrar par con suma X ⭐⭐☆☆☆


Dado un arreglo de números y un valor `X`, determinar si existe un par de
elementos en el arreglo cuya suma sea exactamente `X`.

:::{hint} Lógica y Consideraciones

-   **Proceso (Ordenando):**
    1.  Ordenar el arreglo.
    2.  Usar dos punteros: `izquierda` en el inicio y `derecha` en el final.
    3.  Mientras `izquierda < derecha`:
        a. Calcular la suma `s = arreglo[izquierda] + arreglo[derecha]`.
        b. Si `s == X`, se encontró el par.
        c. Si `s < X`, se necesita una suma mayor, así que se mueve `izquierda`
        a la derecha.
        d. Si `s > X`, se necesita una suma menor, así que se mueve `derecha` a
        la izquierda.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION existe_par_con_suma(arreglo, tamano, X)
VARIABLES:
    izquierda, derecha, suma (enteros)
INICIO
    ORDENAR(arreglo, tamano)
    izquierda = 0, derecha = tamano - 1

    MIENTRAS izquierda < derecha HACER
        suma = arreglo[izquierda] + arreglo[derecha]
        SI suma == X ENTONCES
            RETORNAR VERDADERO
        SINO SI suma < X ENTONCES
            izquierda = izquierda + 1
        SINO
            derecha = derecha - 1
        FIN SI
    FIN MIENTRAS
    RETORNAR FALSO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
