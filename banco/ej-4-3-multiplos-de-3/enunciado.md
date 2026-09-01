### Ejercicio 4.3 - Múltiplos de 3 ⭐⭐☆☆☆

:::{exercise}
:label: lazo_for
:enumerator: for
Usá un lazo `for` para mostrar los números múltiplos de 3 comprendidos en el
rango de 0 a 30 inclusive.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Permitir al usuario definir el límite superior hasta el cual buscar múltiplos.
-   **[*plus ultra*]:** Contar la cantidad total de múltiplos encontrados.

:::
<!-- {exercise} -->

:::{solution} lazo_for
:label: solucion-lazo_for
:class: dropdown
```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    for (int i = 0; i <= 30; i = i + 1)
    {
        if (i % 3 == 0)
        {
            printf("%d es múltiplo de 3\n", i);
        }
    }
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} lazo_for -->
