### Ejercicio 1.35 - Patrón de Rombo ⭐⭐☆☆☆


Implementar un programa que pida un número impar `n` e imprima un rombo de
asteriscos de `n` filas de altura.

:::{hint} Lógica y Consideraciones
-   **Estructura:** Un rombo puede verse como una pirámide seguida de una
-   **Entrada:** Leer un entero impar `n`.
-   **Proceso:**

-   **[*plus ultra*]:** Validar que el tamaño del rombo sea un número impar positivo.
-   **[*plus ultra*]:** Generar el rombo con bordes decorativos personalizados.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO rombo_asteriscos
ENTRADA: n (entero impar)

INICIO
    // Parte superior (pirámide)
    PARA fila DESDE 1 HASTA (n/2) + 1 HACER
        // Imprimir espacios y asteriscos como en el ejercicio de la pirámide
    FIN PARA

    // Parte inferior (pirámide invertida)
    PARA fila DESDE n/2 HASTA 1 CON PASO -1 HACER
        // Imprimir espacios y asteriscos de forma similar pero con el lazo decreciente
    FIN PARA
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
