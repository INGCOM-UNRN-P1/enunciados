### Ejercicio 10.19 - Separar pares e impares ⭐⭐☆☆☆


Reorganizar un arreglo _in-place_ de tal manera que todos los números pares
queden al principio y todos los impares al final. El orden relativo entre los
números pares o entre los impares no necesita conservarse.

:::{hint} Lógica y Consideraciones

-   **Proceso (dos punteros):**
    1.  Usar dos índices, `izquierda` comenzando en 0 y `derecha` en `tamaño-1`.
    2.  Mientras `izquierda < derecha`:
        a. Mover `izquierda` hacia la derecha hasta encontrar un número impar.
        b. Mover `derecha` hacia la izquierda hasta encontrar un número par.
        c. Si `izquierda < derecha`, intercambiar los elementos en esas
        posiciones.

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
PROCEDIMIENTO separar_pares_impares(REF arreglo, tamano)
VARIABLES:
    izquierda, derecha (enteros)
INICIO
    izquierda = 0, derecha = tamano - 1
    MIENTRAS izquierda < derecha HACER
        MIENTRAS arreglo[izquierda] MOD 2 == 0 Y izquierda < derecha HACER
            izquierda = izquierda + 1
        FIN MIENTRAS
        MIENTRAS arreglo[derecha] MOD 2 != 0 Y izquierda < derecha HACER
            derecha = derecha - 1
        FIN MIENTRAS

        SI izquierda < derecha ENTONCES
            INTERCAMBIAR(arreglo[izquierda], arreglo[derecha])
            izquierda = izquierda + 1
            derecha = derecha - 1
        FIN SI
    FIN MIENTRAS
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
