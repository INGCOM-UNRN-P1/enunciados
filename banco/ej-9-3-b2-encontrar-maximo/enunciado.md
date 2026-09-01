### Ejercicio 9.3 - b.2 - Encontrar máximo ⭐⭐☆☆☆

:::{exercise}
:label: encontrar_maximo
:enumerator: funciones-1

Escribí una función `int encontrar_maximo(const int *arreglo, size_t n)` que
reciba un puntero al inicio de un arreglo de enteros (marcado como `const` para
no modificarlo) y su tamaño. La función debe recorrer el arreglo usando el
puntero y devolver el valor del elemento más grande.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {exercise} -->

::::{solution} encontrar_maximo
:class: dropdown

:::{code-block}c
:linenos:
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
int encontrar_maximo(const int *arreglo, size_t n)
{
    assert(arreglo != NULL);
    if (n == 0)
    {
        return 0; // O un valor de error apropiado
    }
    int maximo = *arreglo; // Suponemos que el primer elemento es el máximo
    // Avanzamos el puntero por el resto del arreglo
    for (size_t i = 1; i < n; i++)
    {
        // Usamos aritmética de punteros para acceder al siguiente elemento
        if (*(arreglo + i) > maximo)
        {
            maximo = *(arreglo + i);
        }
    }
    return maximo;
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} encontrar_maximo -->
