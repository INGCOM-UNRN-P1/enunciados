### Ejercicio 10.32 - Reorganizar positivos y negativos ⭐⭐☆☆☆


Reorganizar un arreglo _in-place_ de tal manera que todos los números negativos
aparezcan antes que todos los números positivos. El orden relativo entre los
números del mismo signo no es importante.

:::{hint} Lógica y Consideraciones

-   **Proceso (similar a separar pares/impares):** Usar dos punteros,
    `izquierda` y `derecha`. Mover `izquierda` hasta encontrar un número
    positivo y `derecha` hasta encontrar uno negativo. Luego, intercambiarlos y
    continuar hasta que los punteros se crucen.

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
PROCEDIMIENTO reorganizar_signos(REF arreglo, tamano)
VARIABLES:
    izquierda, derecha (enteros)
INICIO
    izquierda = 0, derecha = tamano - 1
    MIENTRAS izquierda <= derecha HACER
        SI arreglo[izquierda] < 0 Y arreglo[derecha] < 0 ENTONCES
            izquierda = izquierda + 1
        SINO SI arreglo[izquierda] > 0 Y arreglo[derecha] < 0 ENTONCES
            INTERCAMBIAR(arreglo[izquierda], arreglo[derecha])
            izquierda = izquierda + 1, derecha = derecha - 1
        SINO SI arreglo[izquierda] > 0 Y arreglo[derecha] > 0 ENTONCES
            derecha = derecha - 1
        SINO
            izquierda = izquierda + 1, derecha = derecha - 1
        FIN SI
    FIN MIENTRAS
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
