### Ejercicio 10.35 - ¿Es subconjunto? ⭐⭐☆☆☆


Implementar una función que determine si un arreglo `A` es un subconjunto de
otro arreglo `B`. Esto significa que todos los elementos de `A` deben estar
presentes en `B`.

:::{hint} Lógica y Consideraciones

-   **Proceso (con ordenamiento):**
    1.  Ordenar ambos arreglos, `A` y `B`.
    2.  Usar dos punteros, `i` para `A` y `j` para `B`.
    3.  Recorrer ambos arreglos. Si `A[i] == B[j]`, se encontró una
        coincidencia, avanzar ambos. Si `A[i] > B[j]`, avanzar `j`. Si `A[i] <
        B[j]`, significa que `A[i]` no está en `B`, por lo que no es
        subconjunto.

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
FUNCION es_subconjunto(A, nA, B, nB)
VARIABLES:
    i, j (enteros)
INICIO
    ORDENAR(A, nA)
    ORDENAR(B, nB)
    i = 0, j = 0
    MIENTRAS i < nA Y j < nB HACER
        SI A[i] > B[j] ENTONCES
            j = j + 1
        SINO SI A[i] == B[j] ENTONCES
            i = i + 1, j = j + 1
        SINO // A[i] < B[j]
            RETORNAR FALSO
        FIN SI
    FIN MIENTRAS

    RETORNAR (i == nA)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
