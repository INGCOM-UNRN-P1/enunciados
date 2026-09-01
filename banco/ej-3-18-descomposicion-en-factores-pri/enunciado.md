### Ejercicio 3.18 - Descomposición en Factores Primos ⭐⭐☆☆☆

#### Descripción
Dado un número entero, encontrar y mostrar su descomposición en factores primos.
Por ejemplo, para 360, la salida sería `2^3 * 3^2 * 5`.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** 
    1.  Se itera con un divisor `d` comenzando en 2.
    2.  Mientras `d*d <= n`, se verifica si `d` divide a `n`.
    3.  Si `d` divide a `n`, se cuenta cuántas veces lo divide, se imprime el
        factor y su potencia, y se actualiza `n` dividiéndolo por `d` esa
        cantidad de veces.
    4.  Si al final del lazo `n` es mayor que 1, ese `n` restante es también un
        factor primo.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Mostrar los factores primos en formato canónico con exponentes (ej. 2^3 * 3^2).
-   **[*plus ultra*]:** Validar que el número a factorizar sea mayor que 1.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO factores_primos(n)
VARIABLES:
    contador (entero)
INICIO
    // Manejar el factor 2
    contador = 0
    MIENTRAS n MOD 2 == 0 HACER
        contador = contador + 1
        n = n / 2
    FIN MIENTRAS
    SI contador > 0 ENTONCES ESCRIBIR "2^", contador

    // Manejar factores impares
    PARA i DESDE 3 HASTA RAIZ_CUADRADA(n) CON PASO 2 HACER
        contador = 0
        MIENTRAS n MOD i == 0 HACER
            contador = contador + 1
            n = n / i
        FIN MIENTRAS
        SI contador > 0 ENTONCES ESCRIBIR i, "^", contador
    FIN PARA

    // Si n es primo > 2
    SI n > 2 ENTONCES
        ESCRIBIR n, "^1"
    FIN SI
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
