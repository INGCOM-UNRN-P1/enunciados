### Ejercicio 4.9 - Función pura para cálculo de descuento ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-calculo-descuento
Diseñá una función pura `double aplicar_descuento(double precio_base, double
porcentaje)` que:
- Si `precio_base < 0` o `porcentaje < 0` o `porcentaje > 100`, retorne `-1.0`.
- De lo contrario, retorne el precio final descontado.

Escribí su suite completa de pruebas unitarias cubriendo casos normales, bordes
e inválidos.

-   **[*plus ultra*]:** Documentar la función con `@param`, `@pre`, `@returns` y
    `@post`.
-   **[*plus ultra*]:** Validar que `aplicar_descuento(100.0, 0.0)` retorne
    `100.0` y `aplicar_descuento(100.0, 100.0)` retorne `0.0`.

:::
<!-- {exercise} -->

:::{solution} ej-test-calculo-descuento
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

double aplicar_descuento(double precio_base, double porcentaje)
{
    if (precio_base < 0.0 || porcentaje < 0.0 || porcentaje > 100.0)
    {
        return -1.0;
    }
    return precio_base * (1.0 - (porcentaje / 100.0));
}

void test_descuento_normal(void)
{
    assert(aplicar_descuento(200.0, 25.0) == 150.0);
}

void test_descuento_cero(void)
{
    assert(aplicar_descuento(100.0, 0.0) == 100.0);
}

void test_descuento_total(void)
{
    assert(aplicar_descuento(100.0, 100.0) == 0.0);
}

void test_descuento_precio_invalido(void)
{
    assert(aplicar_descuento(-50.0, 10.0) == -1.0);
}

void test_descuento_porcentaje_invalido(void)
{
    assert(aplicar_descuento(100.0, 150.0) == -1.0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-calculo-descuento -->

---
