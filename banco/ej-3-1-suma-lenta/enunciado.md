### Ejercicio 3.1 - Suma lenta ⭐⭐☆☆☆

#### Descripción
Implementar la función `int suma_lenta(int a, int b);` que simule la adición de dos números enteros, `a` y `b`, utilizando únicamente las operaciones más básicas de la unidad aritmético-lógica: sumar o restar 1. Este ejercicio ayuda a comprender la suma como una serie de incrementos o decrementos sucesivos.

:::{hint} Lógica y Consideraciones
-   **Firma requerida:** `int suma_lenta(int a, int b);`
-   **Entrada:** Dos números enteros, `a` y `b`.
-   **Proceso:** El objetivo es llegar desde `a` al resultado `a+b` aplicando la
    operación de incremento `b` veces (si `b` es positivo) o la operación de
    decremento `|b|` veces (si `b` es negativo).
-   Se puede usar un lazo que se repita `abs(b)` veces (el valor absoluto de `b`).
-   Dentro del lazo, se verifica el signo de `b`. Si `b > 0`, se incrementa el
    resultado. Si `b < 0`, se decrementa.

-   **[*plus ultra*]:** Validar que los operandos sean enteros no negativos antes de iniciar las sumas sucesivas.
-   **[*plus ultra*]:** Contar la cantidad total de incrementos realizados para verificar el costo de la operación.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION suma_lenta(a, b)
VARIABLES:
    resultado (entero)
INICIO
    resultado = a
    SI b > 0 ENTONCES
        PARA i DESDE 1 HASTA b HACER
            resultado = resultado + 1
        FIN PARA
    SINO
        PARA i DESDE 1 HASTA VALOR_ABSOLUTO(b) HACER
            resultado = resultado - 1
        FIN PARA
    FIN SI
    RETORNAR resultado
FIN FUNCION
```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
