### Ejercicio 3.39 - Números de Carmichael ⭐⭐☆☆☆

#### Descripción
Un número de Carmichael es un número que satisface la congruencia $b^{n-1}
\equiv 1 \pmod{n}$ para todos los enteros `b` coprimos con `n`. Escribir una
función que verifique si un número es un número de Carmichael.

:::{hint} Lógica y Consideraciones
-   **Proceso:** 
    1.  Verificar si `n` es compuesto (no es primo).
    2.  Iterar con `b` desde 2 hasta `n-1`.
    3.  Si `mcd(b, n) == 1`, verificar si `potencia_modular(b, n-1, n) != 1`.
    4.  Si se encuentra un `b` que no cumple la condición, `n` no es de
        Carmichael. Si se prueban todos y la cumplen, sí lo es.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que el número sea compuesto y satisfaga a^(n-1) ≡ 1 (mod n) para todo a coprimo con n.
-   **[*plus ultra*]:** Comprobar el criterio de Korselt para verificar números de Carmichael.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_carmichael(n)
INICIO
    SI es_primo(n) O n MOD 2 == 0 RETORNAR FALSO

    PARA b DESDE 2 HASTA n-1 HACER
        SI mcd(b, n) == 1 ENTONCES
            SI potencia_modular(b, n-1, n) != 1 ENTONCES
                RETORNAR FALSO
            FIN SI
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
