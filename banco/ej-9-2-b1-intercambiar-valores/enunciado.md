### Ejercicio 9.2 - b.1 - Intercambiar valores ⭐⭐☆☆☆

:::{exercise}
:label: intercambiar_valores
:enumerator: punteros-1

Implementá un procedimiento `void intercambiar(int *a, int *b)` que reciba dos
punteros a enteros. La función debe intercambiar los valores de las variables
originales a las que apuntan estos punteros.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {exercise} -->

::::{solution} intercambiar_valores
:class: dropdown

:::{code-block}c
:linenos:
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
void intercambiar(int *a, int *b)
{
    assert(a != NULL);
    assert(b != NULL);
    int temporal = *a; // Guardamos el valor al que apunta 'a'
    *a = *b;           // Asignamos al lugar de 'a' el valor al que apunta 'b'
    *b = temporal;     // Asignamos al lugar de 'b' el valor guardado
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} intercambiar_valores -->
