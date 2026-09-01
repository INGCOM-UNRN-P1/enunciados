### Ejercicio 11.12 - b.12 - Búsqueda de subcadena ⭐⭐⭐☆☆

#### Descripción
Implementar una función que busque la primera ocurrencia de una subcadena
(`needle` o aguja) dentro de una cadena principal (`haystack` o pajar). Es una
reimplementación de la función `strstr`.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso (Fuerza Bruta):**
    1.  Usar un lazo exterior para recorrer la cadena `haystack` con un índice
        `i`.
    2.  En cada posición `i`, usar un lazo interior para comparar la subcadena
        de `haystack` que empieza en `i` con la cadena `needle`.
    3.  Si todos los caracteres de `needle` coinciden, devolver la posición `i`
        (o un puntero a `haystack[i]`).
    4.  Si el lazo exterior termina, la subcadena no se encontró.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION buscar_subcadena(haystack, needle)
VARIABLES:
    n, m, i, j (enteros)
INICIO
    n = LONGITUD(haystack)
    m = LONGITUD(needle)

    PARA i DESDE 0 HASTA n - m HACER
        j = 0
        MIENTRAS j < m Y haystack[i+j] == needle[j] HACER
            j = j + 1
        FIN MIENTRAS

        SI j == m ENTONCES
            RETORNAR i // Subcadena encontrada en el índice i
        FIN SI
    FIN PARA

    RETORNAR -1 // No encontrada
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Conversión de Base Numérica
