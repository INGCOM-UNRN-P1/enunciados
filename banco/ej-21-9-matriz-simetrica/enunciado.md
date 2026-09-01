### Ejercicio 21.9 - Matriz simétrica ⭐⭐⭐☆☆

#### Descripción
Escribir una función que verifique si una matriz cuadrada es simétrica. Una
matriz es simétrica si es igual a su propia transpuesta, lo que significa que el
elemento en la fila `i`, columna `j` es igual al elemento en la fila `j`,
columna `i`.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
Matriz (3x3):
``` text
[ 1, 7, 3 ]
[ 7, 4, 5 ]
[ 3, 5, 6 ]
```
<!-- text -->

:::
<!-- {tab-item} Entrada -->
:::{tab-item} Salida
:sync: tab2
``` text
La matriz es simétrica.
```
<!-- text -->

:::
<!-- {tab-item} Salida -->

::::
<!-- {tab-set} -->

:::{hint} Lógica y Consideraciones

-   **Fórmula:** Una matriz `A` es simétrica si $A_{ij} = A_{ji}$ para todos los
    `i`, `j`.
-   **Proceso:**
    1.  Recorrer solo la mitad superior (o inferior) de la matriz es suficiente.
        Por ejemplo, con lazos anidados donde el lazo interior para `j` comienza
        en `i+1`.
    2.  En cada paso, comparar `matriz[i][j]` con `matriz[j][i]`.
    3.  Si en algún momento no son iguales, la matriz no es simétrica y la
        función puede devolver `falso` inmediatamente.
-   **Salida:** Si los lazos se completan sin encontrar diferencias, la matriz
    es simétrica.

:::
<!-- {hint} Lógica y Consideraciones -->

::::{hint} Diagrama
:class: dropdown
El diagrama muestra los pares de elementos que deben ser iguales. Solo es
necesario verificar una mitad del triángulo (excluyendo la diagonal).

:::{mermaid}

flowchart TD
    subgraph Matriz
        A11["a11"]
        A12["a12"]
        A13["a13"]
        A21["a21"]
        A22["a22"]
        A23["a23"]
        A31["a31"]
        A32["a32"]
        A33["a33"]
    end
    A12 <-.-> A21
    A13 <-.-> A31
    A23 <-.-> A32

:::
<!-- {mermaid} -->

::::
<!-- {hint} Diagrama -->

:::{hint} Ayuda (Pseudocódigo)
:class: dropdown

```{code-block} pseudocode
:linenos:
FUNCION es_simetrica(matriz, n)
INICIO
    PARA i DESDE 0 HASTA n-1 HACER
        PARA j DESDE i+1 HASTA n-1 HACER
            SI matriz[i][j] != matriz[j][i] ENTONCES
                RETORNAR FALSO
            FIN SI
        FIN PARA
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Ayuda (Pseudocódigo) -->
