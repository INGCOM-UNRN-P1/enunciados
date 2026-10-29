### Ejercicio 3.22 - Números Triangulares ⭐⭐☆☆☆

#### Descripción
Un número triangular es la suma de los `n` primeros números naturales. Por
ejemplo, el 4º número triangular es 1+2+3+4=10. El objetivo es escribir una
función que determine si un número entero dado es un número triangular.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero positivo `num`.
-   **Proceso:** Hay dos enfoques principales:
    1.  **Iterativo:** Generar números triangulares sumando 1, 2, 3, ... en un
        acumulador. En cada paso, comparar el acumulador con `num`. Si son
        iguales, es triangular. Si el acumulador supera a `num`, no lo es.
    2.  **Matemático:** Un número `x` es triangular si y solo si $8x+1$ es un
        cuadrado perfecto. Se puede calcular $8x+1$, obtener su raíz cuadrada, y
        verificar si es un entero.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Verificar si un número dado es triangular resolviendo la ecuación cuadrática asociada.
-   **[*plus ultra*]:** Generar y mostrar los primeros N números triangulares.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_triangular(num)
VARIABLES:
    suma, i (enteros)
INICIO
    SI num < 0 RETORNAR FALSO

    suma = 0
    i = 1
    MIENTRAS suma < num HACER
        suma = suma + i
        i = i + 1
    FIN MIENTRAS

    RETORNAR (suma == num)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
