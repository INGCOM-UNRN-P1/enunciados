### Ejercicio 21.1 - Mostrar matriz ⭐⭐⭐☆☆

#### Descripción
Escribir una función que reciba una matriz (un arreglo 2D), sus dimensiones
(filas y columnas), y la imprima en la consola de una forma clara y ordenada,
fila por fila.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Una matriz 2x3: 
[[1, 2, 3], [4, 5, 6]]
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
``` text
Matriz (2x3):
[ 1, 2, 3 ]
[ 4, 5, 6 ]
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Proceso:** Se necesitan dos lazos `for` anidados para recorrer la matriz.
-   El lazo exterior itera sobre las filas (desde `0` hasta `filas-1`).
-   El lazo interior itera sobre las columnas de la fila actual (desde `0` hasta
    `columnas-1`).
-   Dentro del lazo interior, se imprime cada elemento `matriz[fila][columna]`.
-   Después de que el lazo interior termina (al final de cada fila), se debe
    imprimir un carácter de nueva línea (`\n`) para pasar a la siguiente fila.

:::
<!-- {hint} Lógica y Consideraciones -->

::::{hint} Diagrama
:class: dropdown

:::{mermaid}

flowchart TD
    A["Inicio"] --> B["fila = 0"]
    B --> C{"fila < num_filas?"}
    C -- Sí --> D["Imprimir '['"]
    D --> E["col = 0"]
    E --> F{"col < num_cols?"}
    F -- Sí --> G["Imprimir mat[fila][col]"]
    G --> H["col = col + 1"]
    H --> F
    F -- No --> I["Imprimir ']' y Salto de Línea"]
    I --> J["fila = fila + 1"]
    J --> C
    C -- No --> K["Fin"]

:::
<!-- {mermaid} -->

::::
<!-- {hint} Diagrama -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
PROCEDIMIENTO mostrar_matriz(matriz, filas, columnas)
INICIO
    PARA f DESDE 0 HASTA filas-1 HACER
        ESCRIBIR "[ " SIN SALTO DE LÍNEA
        PARA c DESDE 0 HASTA columnas-1 HACER
            ESCRIBIR matriz[f][c]
            SI c < columnas-1 ENTONCES
                ESCRIBIR ", " SIN SALTO DE LÍNEA
            FIN SI
        FIN PARA
        ESCRIBIR " ]" CON SALTO DE LÍNEA
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
