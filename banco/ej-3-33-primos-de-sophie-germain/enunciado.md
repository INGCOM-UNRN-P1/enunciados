### Ejercicio 3.33 - Primos de Sophie Germain ⭐⭐☆☆☆

#### Descripción
Un número primo `p` es un primo de Sophie Germain si `2p + 1` también es un
número primo. El programa debe encontrar todos los primos de Sophie Germain
hasta un límite $N$.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un límite superior $N$.
-   **Proceso:** 
    1.  Iterar con un número `p` desde 2 hasta $N$.
    2.  En cada iteración, verificar si `p` es primo.
    3.  Si `p` es primo, calcular `q = 2*p + 1` y verificar si `q` también es
        primo.
    4.  Si ambos son primos, `p` es un primo de Sophie Germain.
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Validar que tanto p como 2p + 1 sean números primos.
-   **[*plus ultra*]:** Listar todos los primos de Sophie Germain menores a un límite dado.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO primos_sophie_germain(N)
INICIO
    PARA p DESDE 2 HASTA N HACER
        SI es_primo(p) Y es_primo(2*p + 1) ENTONCES
            ESCRIBIR p
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
