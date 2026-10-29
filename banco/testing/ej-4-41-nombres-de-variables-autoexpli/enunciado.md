### Ejercicio 4.41 - Nombres de Variables Autoexplicativos ⭐☆☆☆☆

:::{exercise}
:label: ej-test-nombres-variables
Refactorizá el siguiente código reemplazando los nombres de variables crípticos
por identificadores claros en `snake_case` según la [Regla
0x0007h](../../reglas/0_sintaxis.md#0x0007h):

```{code-block} c
:linenos:
// Código críptico:
double c(double p, double d, double t)
{
    double r = p - (p * (d / 100.0));
    double f = r + (r * (t / 100.0));
    return f;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Escribir un test unitario con assert para verificar el
    cálculo del precio final con descuento e impuesto.

:::
<!-- {exercise} -->

:::{solution} ej-test-nombres-variables
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

double calcular_precio_final(double precio_base, double porcentaje_descuento, double porcentaje_impuesto)
{
    double precio_con_descuento = precio_base - (precio_base * (porcentaje_descuento / 100.0));
    double precio_final = precio_con_descuento + (precio_con_descuento * (porcentaje_impuesto / 100.0));
    return precio_final;
}

void test_precio_final(void)
{
    assert(calcular_precio_final(100.0, 10.0, 21.0) == 108.9);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-nombres-variables -->

---
