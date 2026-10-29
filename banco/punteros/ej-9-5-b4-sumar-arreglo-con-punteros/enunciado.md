### Ejercicio 9.5 - b.4 - Sumar arreglo con punteros ⭐⭐⭐☆☆

:::{exercise}
:label: sumar_arreglo_punteros
:enumerator: funciones-3

Creá una función `int sumar_arreglo(const int *inicio, const int *fin)` que
reciba un puntero al primer elemento de un arreglo y un puntero a la dirección
de memoria inmediatamente posterior al último elemento. La función debe sumar
los elementos del arreglo iterando con un puntero desde `inicio` hasta que
alcance a `fin`.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {exercise} -->

::::{solution} sumar_arreglo_punteros
:class: dropdown

:::{code-block}c
:linenos:
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
int sumar_arreglo(const int *inicio, const int *fin)
{
    assert(inicio != NULL);
    assert(fin != NULL);
    int suma = 0;
    // Iteramos mientras el puntero 'p' no haya llegado al puntero 'fin'
    for (const int *p = inicio; p < fin; p++)
    {
        suma += *p; // Sumamos el valor al que apunta 'p'
    }
    return suma;
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} sumar_arreglo_punteros -->
