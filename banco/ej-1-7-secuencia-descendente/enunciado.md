### Ejercicio 1.7 - Secuencia Descendente ⭐⭐☆☆☆


Similar al anterior, pero esta vez la secuencia debe ir en orden descendente. Se
parte de un número `n` y se retrocede hasta un número `m`, sin incluirlo. Esto
corresponde al intervalo `(m, n]`.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer los enteros `n` (inclusive) y `m` (exclusive).
-   **Proceso:** Utilizar un lazo `for` que se inicialice en `n` y continúe
-   **Salida:** Imprimir el valor del contador en cada iteración.

-   **[*plus ultra*]:** Validar que n > m para que la secuencia descendente tenga al menos un elemento.
-   **[*plus ultra*]:** Permitir al usuario ingresar un paso de decremento personalizado.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO secuencia_descendente
ENTRADA: n, m (enteros)

INICIO
    PARA i DESDE n HASTA m+1 CON PASO -1 HACER
        ESCRIBIR i
    FIN PARA
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
