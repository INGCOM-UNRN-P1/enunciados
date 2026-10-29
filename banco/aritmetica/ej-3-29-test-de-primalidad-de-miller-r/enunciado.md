### Ejercicio 3.29 - Test de Primalidad de Miller-Rabin ⭐⭐☆☆☆

#### Descripción
Implementar una versión simplificada del test de primalidad de Miller-Rabin. Es
un test probabilístico que, a diferencia de la división por tentativa, es
eficiente para números grandes.

:::{hint} Lógica y Consideraciones
-   **Teorema:** Se basa en propiedades de los números primos relacionadas con
    el Pequeño Teorema de Fermat. Es más complejo que los algoritmos anteriores.
-   **Proceso Simplificado:** 
    1.  Dado un número `n` a probar, se eligen varias bases aleatorias `a` <
        `n`.
    2.  Para cada base `a`, se comprueba si satisface ciertas congruencias. Si
        para alguna base no las satisface, `n` es compuesto. Si las satisface
        para todas las bases, es "probablemente primo".
-   **Nota:** La implementación completa es avanzada. Un ejercicio más simple
    puede ser implementarlo para una sola base fija.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Modularizar la exponenciación modular (base^exp % mod) en una función pura.
-   **[*plus ultra*]:** Probar la primalidad con varias bases distintas para aumentar la certeza.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_probablemente_primo(n, k_iteraciones)
INICIO
    // ... Lógica compleja del test de Miller-Rabin ...
    // Descomponer n-1 en d * 2^s
    // Repetir k veces:
    //   Elegir 'a' aleatorio en [2, n-2]
    //   Calcular x = a^d mod n
    //   Si x == 1 o x == n-1, continuar
    //   ... (lazo para s-1) ...
    // Si no pasa las pruebas, RETORNAR FALSO
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
