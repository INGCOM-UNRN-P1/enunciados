### Ejercicio 11.5 - b.5 - Palíndromo ⭐⭐☆☆☆

#### Descripción
Implementar una función que verifique si una cadena es un palíndromo, es decir,
si se lee igual de izquierda a derecha que de derecha a izquierda. La
verificación debe ignorar espacios en blanco y no debe ser sensible a
mayúsculas/minúsculas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Entrada:** Una cadena de caracteres.
-   **Proceso (dos punteros/índices):**
    1.  Usar dos índices: `izquierda` al inicio de la cadena y `derecha` al
        final.
    2.  En un lazo `while (izquierda < derecha)`:
        a. Mover `izquierda` hacia la derecha hasta que apunte a un carácter
        alfabético.
        b. Mover `derecha` hacia la izquierda hasta que apunte a un carácter
        alfabético.
        c. Comparar los caracteres en `izquierda` y `derecha` (convertidos a
        minúsculas). Si son diferentes, la cadena no es un palíndromo y se puede
        retornar `falso`.
        d. Si son iguales, mover ambos punteros hacia el centro (`izquierda++`,
        `derecha--`).
-   **Salida:** Si el lazo termina, significa que todos los caracteres
    coincidieron, por lo que es un palíndromo y se retorna `verdadero`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_palindromo_complejo(cadena)
VARIABLES:
    izquierda, derecha (enteros)
INICIO
    izquierda = 0, derecha = LONGITUD(cadena) - 1
    MIENTRAS izquierda < derecha HACER
        MIENTRAS NO es_alfabetico(cadena[izquierda]) Y izquierda < derecha HACER
            izquierda = izquierda + 1
        FIN MIENTRAS
        MIENTRAS NO es_alfabetico(cadena[derecha]) Y izquierda < derecha HACER
            derecha = derecha - 1
        FIN MIENTRAS

        SI convertir_a_minuscula(cadena[izquierda]) != convertir_a_minuscula(cadena[derecha]) ENTONCES
            RETORNAR FALSO
        FIN SI
        izquierda = izquierda + 1
        derecha = derecha - 1
    FIN MIENTRAS
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
