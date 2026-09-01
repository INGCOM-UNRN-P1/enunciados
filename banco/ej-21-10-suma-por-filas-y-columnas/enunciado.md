### Ejercicio 21.10 - Suma por Filas y Columnas ⭐⭐☆☆☆

#### Descripción
Crear un programa que, dada una matriz, calcule dos arreglos: uno que contenga
la suma de los elementos de cada fila y otro que contenga la suma de los
elementos de cada columna.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
Matriz (2x3):
``` text
[ 1, 2, 3 ]
[ 4, 5, 6 ]
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
``` text
Suma de filas: [6, 15]
Suma de columnas: [5, 7, 9]
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Suma de Filas:**
    -   Recorrer cada fila con un lazo exterior.
    -   Para cada fila, inicializar una `suma_fila` en 0.
    -   Con un lazo interior, recorrer las columnas de esa fila y acumular los
        valores en `suma_fila`.
    -   Guardar el resultado en el arreglo de sumas de filas.
-   **Suma de Columnas:**
    -   El proceso es inverso. El lazo exterior recorre las columnas.
    -   El lazo interior recorre las filas de esa columna.
-   **Eficiencia:** Se pueden calcular ambas sumas en un solo par de lazos
    anidados. Al procesar el elemento `matriz[i][j]`, se añade a `suma_filas[i]`
    y a `suma_columnas[j]`.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{hint} Ayuda (Pseudocódigo Eficiente)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO sumar_filas_y_columnas(matriz, filas, cols, REF sumas_filas, REF sumas_cols)
INICIO
    // Inicializar arreglos de suma en 0
    PARA i DESDE 0 HASTA filas-1 HACER
        sumas_filas[i] = 0
    FIN PARA
    PARA j DESDE 0 HASTA cols-1 HACER
        sumas_cols[j] = 0
    FIN PARA

    // Calcular ambas sumas en una sola pasada
    PARA i DESDE 0 HASTA filas-1 HACER
        PARA j DESDE 0 HASTA cols-1 HACER
            sumas_filas[i] = sumas_filas[i] + matriz[i][j]
            sumas_cols[j] = sumas_cols[j] + matriz[i][j]
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
<!-- {hint} Ayuda (Pseudocódigo Eficiente) -->
