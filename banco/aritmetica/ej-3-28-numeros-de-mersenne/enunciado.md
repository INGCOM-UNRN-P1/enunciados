### Ejercicio 3.28 - Números de Mersenne ⭐⭐☆☆☆

#### Descripción
Un número de Mersenne es un número de la forma $M_p = 2^p - 1$, donde `p` es un
número primo. El programa debe generar números de Mersenne y verificar si son a
su vez primos (primos de Mersenne).

:::{hint} Lógica y Consideraciones
-   **Proceso:** 
    1.  Generar números primos `p` (usando la criba o la función `es_primo`).
    2.  Para cada primo `p`, calcular $M_p = 2^p - 1$.
    3.  Verificar si el $M_p$ resultante es también primo.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar si el exponente p es primo antes de calcular 2^p - 1.
-   **[*plus ultra*]:** Verificar si el número de Mersenne obtenido es primo para valores pequeños de p.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO primos_de_mersenne(limite_p)
INICIO
    PARA p DESDE 2 HASTA limite_p HACER
        SI es_primo(p) ENTONCES
            m = potencia(2, p) - 1
            SI es_primo(m) ENTONCES
                ESCRIBIR "M(", p, ") = ", m, " es un primo de Mersenne."
            FIN SI
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
