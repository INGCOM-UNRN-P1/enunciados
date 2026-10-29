### Ejercicio 3.24 - Primos Gemelos ⭐⭐☆☆☆

#### Descripción
Dos números primos `p` y `q` son gemelos si `q = p + 2`. El programa debe
encontrar todos los pares de primos gemelos hasta un límite $N$.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un límite superior $N$.
-   **Proceso:** 
    1.  Iterar con un número `p` desde 2 hasta `N-2`.
    2.  En cada iteración, verificar si tanto `p` como `p+2` son primos.
    3.  Si ambos lo son, se ha encontrado un par de primos gemelos.
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Validar que el rango [a, b] sea válido y positivo.
-   **[*plus ultra*]:** Contar la cantidad total de pares de primos gemelos en el rango.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO primos_gemelos(N)
INICIO
    PARA p DESDE 2 HASTA N - 2 HACER
        SI es_primo(p) Y es_primo(p + 2) ENTONCES
            ESCRIBIR "(", p, ", ", p + 2, ")"
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
