### Ejercicio 4.16 - Modificación inadvertida de bandera global ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-bandera-global
Descubrí el bug en este programa donde dos funciones manipulan la misma variable
global `hay_error`:

```{code-block} c
:linenos:
#include <stdbool.h>
#include <stdio.h>

bool hay_error = false;

void validar_rango(int x)
{
    if (x < 0 || x > 100)
    {
        hay_error = true;
    }
}

void validar_paridad(int x)
{
    if (x % 2 != 0)
    {
        hay_error = true;
    }
    else
    {
        hay_error = false; // ¡Peligro!
    }
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** ¿Qué ocurre si se llama `validar_rango(-5)` seguido de
    `validar_paridad(4)`?
-   **[*plus ultra*]:** Refactorizar ambas funciones para que retornen un `bool`
    independiente.

:::
<!-- {exercise} -->

:::{solution} ej-test-bandera-global
:class: dropdown
`validar_rango(-5)` detecta el error y pone `hay_error = true`. Pero luego
`validar_paridad(4)` como `4` es par, ejecuta la rama `else` y pone `hay_error =
false`, **borrando el error detectado previamente**.

**Refactorización:**
```{code-block} c
:linenos:
bool es_rango_valido(int x)
{
    return (x >= 0 && x <= 100);
}

bool es_par(int x)
{
    return (x % 2 == 0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-bandera-global -->

---
