### Ejercicio 4.50 - Suite de Pruebas: Validador de Números Primos ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-suite-primos
Implementá la función pura `bool es_primo(int n)` con optimización hasta
$\sqrt{n}$ y diseñá su suite de pruebas con `assert()`:
- Casos no primos menores o iguales a 1 ($0, 1, -7$).
- Primer número primo ($2$).
- Primos pares e impares pequeños ($2, 3, 5, 7, 11, 13$).
- Compuestos impares que aparentan ser primos ($9, 15, 21, 25, 27, 49$).
- Primos grandes conocidos ($997$).

-   **[*plus ultra*]:** Escribir una función de prueba específica para cada
    categoría.
-   **[*plus ultra*]:** Documentar las precondiciones con `@pre` y
    postcondiciones con `@post`.

:::
<!-- {exercise} -->

:::{solution} ej-test-suite-primos
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool es_primo(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void test_primos_menores_o_iguales_uno(void)
{
    assert(es_primo(0) == false);
    assert(es_primo(1) == false);
    assert(es_primo(-7) == false);
}

void test_primos_basicos(void)
{
    assert(es_primo(2) == true);
    assert(es_primo(3) == true);
    assert(es_primo(13) == true);
    assert(es_primo(997) == true);
}

void test_compuestos_impares(void)
{
    assert(es_primo(9) == false);
    assert(es_primo(25) == false);
    assert(es_primo(49) == false);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-suite-primos -->

---
