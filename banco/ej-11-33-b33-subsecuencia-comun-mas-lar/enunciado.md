### Ejercicio 11.33 - b.33 - Subsecuencia común más larga (LCS) ⭐⭐☆☆☆

#### Descripción
Escribir una función que encuentre la longitud de la subsecuencia común más
larga (LCS) entre dos cadenas. Una subsecuencia no tiene por qué ser contigua.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Algoritmo:** Este es un problema clásico de programación dinámica.
-   **Proceso:**
    1.  Crear una matriz 2D `dp` de tamaño `(longitud1+1) x (longitud2+1)`.
    2.  `dp[i][j]` almacenará la longitud de la LCS de `cadena1[0..i-1]` y
        `cadena2[0..j-1]`.
    3.  Llenar la matriz usando la recurrencia:
        -   Si `cadena1[i-1] == cadena2[j-1]`, entonces `dp[i][j] = 1 +
            dp[i-1][j-1]`.
        -   Si no, `dp[i][j] = MAXIMO(dp[i-1][j], dp[i][j-1])`.
-   **Salida:** El resultado es el valor en `dp[longitud1][longitud2]`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION lcs(cadena1, cadena2)
VARIABLES:
    dp (matriz 2D)
INICIO
    // ... inicializar y llenar la matriz dp ...
    RETORNAR dp[LONGITUD(cadena1)][LONGITUD(cadena2)]
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
