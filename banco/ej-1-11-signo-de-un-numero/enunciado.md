### Ejercicio 1.11 - Signo de un Número ⭐⭐☆☆☆


El programa debe clasificar un número real (de punto flotante) ingresado por el
usuario en una de tres categorías: positivo, negativo o cero.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer un número que puede tener decimales (tipo `float` o
-   **Proceso:** Utilizar una estructura de condicionales anidados o `if-else
-   **Condiciones:**
-   **Salida:** Imprimir el mensaje correspondiente a la categoría.

-   **[*plus ultra*]:** Encapsular la clasificación en una función que retorne 1 (positivo), -1 (negativo) o 0 (cero).
-   **[*plus ultra*]:** Manejar valores muy cercanos a cero dentro de un margen de tolerancia (epsilon) si se usan reales.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO clasificar_signo
ENTRADA: numero (real)

INICIO
    LEER numero
    SI numero > 0 ENTONCES
        ESCRIBIR "El número es Positivo."
    SINO SI numero < 0 ENTONCES
        ESCRIBIR "El número es Negativo."
    SINO
        ESCRIBIR "El número es Cero."
    FIN SI
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

---

## Fórmulas Geométricas
