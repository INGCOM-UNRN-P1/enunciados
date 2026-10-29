### Ejercicio 3.31 - Cuadrado Mágico ⭐⭐☆☆☆

#### Descripción
Verificar si una matriz cuadrada `n x n` de números es un cuadrado mágico. Un
cuadrado mágico es una matriz donde la suma de los números de cada fila, cada
columna y ambas diagonales principales es la misma ("constante mágica").

:::{hint} Lógica y Consideraciones
-   **Entrada:** Una matriz `n x n`.
-   **Proceso:** 
    1.  Calcular la suma de la primera fila y guardarla como la
        `constante_magica` de referencia.
    2.  Iterar por las demás filas, calculando su suma y comparándola con la
        `constante_magica`.
    3.  Iterar por todas las columnas, calculando su suma y comparándola.
    4.  Calcular la suma de la diagonal principal y la diagonal secundaria y
        compararlas.
-   Si todas las sumas son iguales, es un cuadrado mágico.
    filas (*row-major order*) para mejorar el uso de caché.
    estrictamente dentro de los límites del contenedor.

-   **[*plus ultra*]:** Validar que la dimensión sea un entero impar positivo mayor o igual a 3.
-   **[*plus ultra*]:** Verificar que la constante mágica calculada sea igual a n*(n^2 + 1)/2.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_cuadrado_magico(matriz, n)
VARIABLES:
    constante_magica, suma_actual (entero)
INICIO
    // Calcular constante de referencia
    constante_magica = suma_fila(matriz, 0)

    // Verificar filas y columnas
    PARA i DESDE 1 HASTA n-1 HACER
        SI suma_fila(matriz, i) != constante_magica RETORNAR FALSO
        SI suma_columna(matriz, i) != constante_magica RETORNAR FALSO
    FIN PARA

    // Verificar diagonales
    SI suma_diagonal_principal(matriz) != constante_magica RETORNAR FALSO
    SI suma_diagonal_secundaria(matriz) != constante_magica RETORNAR FALSO

    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

---

## Más Teoría de Números y Algoritmos
