### Ejercicio 21.5 - Transposición ⭐⭐☆☆☆

#### Descripción
Calcular la transpuesta $A^T$ de una matriz $A$. La transposición se obtiene
intercambiando las filas por las columnas.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Matriz A (2x3): `[[1, 2, 3], [4, 5, 6]]`
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
Matriz $A^T$ (3x2):
``` text
[ 1, 4 ]
[ 2, 5 ]
[ 3, 6 ]
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Fórmula:** $(A^T)_{ij} = A_{ji}$.
-   **Dimensiones:** Si la matriz original es $m \times n$, su transpuesta será
    $n \times m$.
-   **Proceso:** Recorrer la matriz original `A` con lazos anidados. En cada
    posición `(i, j)`, copiar el elemento `A[i][j]` a la posición `(j, i)` de la
    nueva matriz transpuesta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
PROCEDIMIENTO transponer_matriz(A, filas, columnas, REF A_T)
INICIO
    PARA i DESDE 0 HASTA filas-1 HACER
        PARA j DESDE 0 HASTA columnas-1 HACER
            A_T[j][i] = A[i][j]
        FIN PARA
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Ayuda (Pseudocódigo) -->
