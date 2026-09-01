### Ejercicio 9.34 - Matriz Identidad con Ternario Críptico ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-matriz-identidad
Refactorizá la siguiente función que determina el valor de cada celda en una
matriz identidad eliminando el ternario prohibido:

``` c
int id(int r,int c){return(r==c)?1:0;}
```
<!-- c -->

-   **[*plus ultra*]:** Escribir una función pura `int
    obtener_valor_identidad(int fila, int columna)` con validación de índices no
    negativos.
-   **[*plus ultra*]:** Testear con `assert()` celdas diagonales y fuera de la
    diagonal.

:::
<!-- {exercise} -->

:::{solution} ej-ref-matriz-identidad
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

int obtener_valor_identidad(int fila, int columna)
{
    if (fila < 0 || columna < 0)
    {
        return -1;
    }
    if (fila == columna)
    {
        return 1;
    }
    return 0;
}

void test_valor_identidad(void)
{
    assert(obtener_valor_identidad(0, 0) == 1);
    assert(obtener_valor_identidad(2, 2) == 1);
    assert(obtener_valor_identidad(0, 3) == 0);
    assert(obtener_valor_identidad(-1, 0) == -1);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-matriz-identidad -->

---
