### Ejercicio 9.4 - Conversión Térmica con División Entera Peligrosa ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-conversion-termica
El siguiente código intentó convertir grados Celsius a Fahrenheit, pero tiene
problemas de estilo y posibles riesgos de tipos:

``` c
double k(double c){return(c*9/5)+32;}
```
<!-- c -->

-   **[*plus ultra*]:** Reemplazar los números literales por constantes
    flotantes `9.0 / 5.0` y `32.0`.
-   **[*plus ultra*]:** Validar que la temperatura no sea inferior al cero
    absoluto ($-273.15^\circ\text{C}$).

:::
<!-- {exercise} -->

:::{solution} ej-ref-conversion-termica
:class: dropdown
**Diagnóstico:** Nombres opacos, falta de constantes simbólicas y sin
verificación del límite físico del cero absoluto.

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>
#include <stdbool.h>

#define CERO_ABSOLUTO_CELSIUS -273.15
#define FACTOR_ESCALA (9.0 / 5.0)
#define DESPLAZAMIENTO_FAHRENHEIT 32.0

double convertir_celsius_a_fahrenheit(double temperatura_celsius, bool *es_valida)
{
    if (temperatura_celsius < CERO_ABSOLUTO_CELSIUS || es_valida == NULL)
    {
        if (es_valida != NULL)
        {
            *es_valida = false;
        }
        return 0.0;
    }
    *es_valida = true;
    return (temperatura_celsius * FACTOR_ESCALA) + DESPLAZAMIENTO_FAHRENHEIT;
}

void test_conversion_celsius(void)
{
    bool ok = false;
    double f = convertir_celsius_a_fahrenheit(0.0, &ok);
    assert(ok && fabs(f - 32.0) < 1e-6);
    f = convertir_celsius_a_fahrenheit(100.0, &ok);
    assert(ok && fabs(f - 212.0) < 1e-6);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-conversion-termica -->

---
