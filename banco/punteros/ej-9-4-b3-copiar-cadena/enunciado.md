### Ejercicio 9.4 - b.3 - Copiar cadena ⭐⭐⭐☆☆

:::{exercise}
:label: copiar_cadena
:enumerator: funciones-2

Implementá un procedimiento `void copiar_cadena(char *destino, const char
*origen)`. La función debe copiar la cadena de caracteres de `origen` a
`destino`, incluyendo el carácter nulo final (`\0`). Debés resolverlo
recorriendo las cadenas exclusivamente con punteros.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {exercise} -->

::::{solution} copiar_cadena
:class: dropdown

:::{code-block}c
:linenos:
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
void copiar_cadena(char *destino, const char *origen)
{
    assert(destino != NULL);
    assert(origen != NULL);
    // Mientras el valor al que apunta 'origen' no sea el carácter nulo...
    while (*origen != '\0')
    {
        *destino = *origen; // Copiamos el valor
        origen++;           // Avanzamos el puntero de origen
        destino++;          // Avanzamos el puntero de destino
    }
    *destino = '\0'; // Aseguramos que la cadena destino termine con el nulo
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} copiar_cadena -->
