### Ejercicio 1.4 - Pares en un rango ⭐⭐⭐☆☆


El programa debe ser capaz de identificar y mostrar todos los números pares que
existen dentro de un intervalo cerrado `[n, m]`, donde los límites `n` y `m` son
proporcionados por el usuario.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Se deben leer dos números enteros, `n` (inicio del rango) y `m`
-   **Proceso:** Se utiliza un lazo `for` que recorra cada número `i` desde `n`
-   **Condición de Paridad:** Dentro del lazo, para cada número `i`, se debe
-   **Salida:** Si la condición de paridad se cumple, el número `i` se imprime

-   **[*plus ultra*]:** Permitir que el usuario ingrese el intervalo en cualquier orden (si n > m, intercambiar automáticamente los límites).
-   **[*plus ultra*]:** Contar la cantidad total de pares encontrados y mostrar el resultado al finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO pares_en_rango
ENTRADA: n, m (enteros)

INICIO
    PARA i DESDE n HASTA m HACER
        SI i MOD 2 == 0 ENTONCES
            ESCRIBIR i
        FIN SI
    FIN PARA
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
