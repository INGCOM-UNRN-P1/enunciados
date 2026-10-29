### Ejercicio 3.10 - Números Primos ⭐⭐☆☆☆

#### Descripción
Verificar si un número entero mayor que 1 es un número primo. Un número es primo
si solo es divisible por 1 y por sí mismo.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Casos Base:** Números menores o iguales a 1 no son primos. 2 es el único
    primo par.
-   **Proceso:** Para verificar si `n` es primo, basta con comprobar si es
    divisible por algún número desde 2 hasta la raíz cuadrada de `n`
    ($\sqrt{n}$). Si se encuentra un divisor en ese rango, el número no es
    primo.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Optimizar el lazo comprobando divisores solo hasta sqrt(n).
-   **[*plus ultra*]:** Contar la cantidad de números primos dentro de un rango dado por el usuario.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_primo(n)
INICIO
    SI n <= 1 ENTONCES RETORNAR FALSO
    PARA i DESDE 2 HASTA RAIZ_CUADRADA(n) HACER
        SI n MOD i == 0 ENTONCES
            RETORNAR FALSO
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
