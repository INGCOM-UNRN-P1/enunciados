### Ejercicio 21.2 - Multiplicación por un escalar ⭐⭐☆☆☆

#### Descripción
Implementar una función que multiplique cada elemento de una matriz por un
número escalar dado. La operación modifica la matriz original (_in-place_).

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Matriz: [[1, 2], [3, 4]]
Escalar: 5
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
``` text
Matriz modificada: [[5, 10], [15, 20]]
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Fórmula:** Para cada elemento $a_{ij}$ de la matriz $A$, el nuevo elemento
    es $b_{ij} = k \cdot a_{ij}$.
-   **Proceso:** Se utilizan dos lazos anidados para recorrer cada elemento de
    la matriz.
-   En el cuerpo del lazo interior, se multiplica el elemento
    `matriz[fila][columna]` por el escalar y se guarda el resultado en la misma
    posición.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
PROCEDIMIENTO multiplicar_por_escalar(REF matriz, filas, columnas, escalar)
INICIO
    PARA f DESDE 0 HASTA filas-1 HACER
        PARA c DESDE 0 HASTA columnas-1 HACER
            matriz[f][c] = matriz[f][c] * escalar
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

## Aritmética Matricial
