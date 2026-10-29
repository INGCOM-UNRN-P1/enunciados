### Ejercicio 9.6 - b.5 - Invertir arreglo in-place ⭐⭐⭐☆☆

:::{exercise}
:label: invertir_arreglo_inplace
:enumerator: punteros-2

Implementá un procedimiento `void invertir_arreglo(int *arreglo, size_t n)` que
invierta el orden de los elementos de un arreglo "in-place" (sin usar un arreglo
auxiliar). Utilizá dos punteros: uno que apunte al inicio del arreglo y otro que
apunte al final. Intercambiá los valores a los que apuntan y mové los punteros
hacia el centro hasta que se crucen.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {exercise} -->

::::{solution} invertir_arreglo_inplace
:class: dropdown

:::{code-block}c
:linenos:
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
void invertir_arreglo(int *arreglo, size_t n)
{
    assert(arreglo != NULL);
    if (n < 2)
    {
        return; // No hay nada que invertir
    }
    int *inicio = arreglo;
    int *fin = arreglo + n - 1;
    while (inicio < fin)
    {
        // Intercambiamos los valores
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        // Movemos los punteros hacia el centro
        inicio++;
        fin--;
    }
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} invertir_arreglo_inplace -->
