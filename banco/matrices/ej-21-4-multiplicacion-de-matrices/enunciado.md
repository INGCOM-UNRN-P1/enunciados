### Ejercicio 21.4 - Multiplicación de matrices ⭐⭐⭐☆☆

#### Descripción
Implementar la multiplicación de dos matrices, `A` (de $m \times n$) y `B` (de
$n \times p$), cuyo resultado es una nueva matriz `C` (de $m \times p$).

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Matriz A (2x3): [[1, 2, 3], [4, 5, 6]]
Matriz B (3x2): [[7, 8], [9, 10], [11, 12]]
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
``` text
Matriz C (2x2): [[58, 64], [139, 154]]
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Precondición:** El número de columnas de la matriz `A` debe ser igual al
    número de filas de la matriz `B`.
-   **Fórmula:** Cada elemento $c_{ij}$ de la matriz resultado se calcula como
    el producto punto de la fila `i` de `A` y la columna `j` de `B`: $c_{ij} =
    \sum_{k=0}^{n-1} a_{ik} \cdot b_{kj}$.
-   **Proceso:** Se necesitan tres lazos anidados:
    1.  Lazo para las filas de `C` (y `A`), de `i=0` a `m-1`.
    2.  Lazo para las columnas de `C` (y `B`), de `j=0` a `p-1`.
    3.  Lazo para la suma del producto punto, de `k=0` a `n-1`.

:::
<!-- {hint} Lógica y Consideraciones -->

::::{hint} Diagrama
:class: dropdown

:::{mermaid}

flowchart TD
    A["Inicio"] --> B["i = 0..m-1"]
    B --> C["j = 0..p-1"]
    C --> D["suma = 0"]
    D --> E["k = 0..n-1"]
    E --> F["suma += A[i][k] * B[k][j]"]
    F --> E
    E -- "Fin del lazo k" --> G["C[i][j] = suma"]
    G --> C
    C -- "Fin del lazo j" --> B
    B -- "Fin del lazo i" --> H["Fin"]

:::
<!-- {mermaid} -->

::::
<!-- {hint} Diagrama -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
PROCEDIMIENTO multiplicar_matrices(A, m, n, B, p, REF C)
INICIO
    // Asumiendo que n == p
    PARA i DESDE 0 HASTA m-1 HACER
        PARA j DESDE 0 HASTA p-1 HACER
            suma = 0
            PARA k DESDE 0 HASTA n-1 HACER
                suma = suma + A[i][k] * B[k][j]
            FIN PARA
            C[i][j] = suma
        FIN PARA
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Ayuda (Pseudocódigo) -->

## Manipulación
