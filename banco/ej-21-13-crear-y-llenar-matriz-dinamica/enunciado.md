### Ejercicio 21.13 - Crear y llenar matriz dinámica ⭐⭐⭐☆☆

#### Descripción
Escribir una función que solicite al usuario las dimensiones (filas y columnas)
y luego los elementos de una matriz, para finalmente imprimirla.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
Se le pedirá al usuario que ingrese el número de filas y columnas, y luego cada
uno de los elementos.

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
La matriz ingresada por el usuario, impresa de forma ordenada.

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Entrada:** Se debe usar una función para leer la entrada del usuario para
    las dimensiones y los elementos.
-   **Proceso:**
    1.  Solicitar el número de filas (`filas`).
    2.  Solicitar el número de columnas (`columnas`).
    3.  Crear una matriz vacía con las dimensiones especificadas.
    4.  Usar dos lazos anidados para recorrer la matriz y solicitar cada
        elemento al usuario, asignándolo a la posición correspondiente.
    5.  Finalmente, llamar a la función `mostrar_matriz` (del ejercicio 1.1)
        para imprimir la matriz creada.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
PROCEDIMIENTO crear_y_llenar_matriz_dinamica()
INICIO
    ESCRIBIR "Ingrese el número de filas: " SIN SALTO DE LÍNEA
    LEER filas
    ESCRIBIR "Ingrese el número de columnas: " SIN SALTO DE LÍNEA
    LEER columnas

    // Crear una matriz de 'filas' x 'columnas'
    CREAR matriz[filas][columnas]

    ESCRIBIR "Ingrese los elementos de la matriz:"
    PARA i DESDE 0 HASTA filas-1 HACER
        PARA j DESDE 0 HASTA columnas-1 HACER
            ESCRIBIR "Elemento [", i, "][ ", j, "]: " SIN SALTO DE LÍNEA
            LEER matriz[i][j]
        FIN PARA
    FIN PARA

    // Asumiendo que la función mostrar_matriz está definida
    mostrar_matriz(matriz, filas, columnas)
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Ayuda (Pseudocódigo) -->

## Más Algoritmos con Matrices
