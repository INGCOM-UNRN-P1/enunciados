### Ejercicio 3.30 - Números Vampiro ⭐⭐☆☆☆

#### Descripción
Un número vampiro es un número de `2k` dígitos que puede ser factorizado en dos
números de `k` dígitos (los "colmillos"), donde los dígitos de los colmillos,
concatenados, son una permutación de los dígitos del número original.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un número `n` de 4 dígitos.
-   **Proceso:** 
    1.  Iterar a través de todos los posibles pares de "colmillos" de 2 dígitos
        (`i` y `j`).
    2.  Verificar si `i * j == n`.
    3.  Si es así, obtener los 4 dígitos de `n` y los 4 dígitos de `i` y `j`.
    4.  Verificar si los dos conjuntos de dígitos son permutaciones el uno del
        otro (ej. ordenándolos y comparando).
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que el número tenga una cantidad par de dígitos.
-   **[*plus ultra*]:** Verificar que los colmillos no terminen ambos en cero simultáneamente.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_vampiro_4_digitos(n)
INICIO
    PARA i DESDE 10 HASTA 99 HACER
        PARA j DESDE i HASTA 99 HACER
            SI i * j == n ENTONCES
                digitos_n = obtener_digitos_ordenados(n)
                digitos_colmillos = obtener_digitos_ordenados(i, j)
                SI digitos_n == digitos_colmillos ENTONCES
                    RETORNAR VERDADERO
                FIN SI
            FIN SI
        FIN PARA
    FIN PARA
    RETORNAR FALSO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
