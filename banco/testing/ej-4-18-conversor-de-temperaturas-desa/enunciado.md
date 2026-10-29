### Ejercicio 4.18 - Conversor de Temperaturas desacoplado de estado ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-temperatura-desacoplada
Implementá las siguientes funciones puras de conversión sin usar variables
globales ni llamadas a `printf`:
- `double celsius_a_fahrenheit(double c)`
- `double fahrenheit_a_celsius(double f)`
- `double celsius_a_kelvin(double c)`

Escribí una función de prueba para cada conversión verificando los puntos fijos
conocidos ($0^\circ\text{C} = 32^\circ\text{F}$, $100^\circ\text{C} =
212^\circ\text{F}$, $0^\circ\text{C} = 273.15\text{ K}$).

-   **[*plus ultra*]:** Validar que las temperaturas no estén por debajo del
    cero absoluto ($-273.15^\circ\text{C}$).
-   **[*plus ultra*]:** Usar comparación con tolerancia `son_cercanos`.

:::
<!-- {exercise} -->

:::{solution} ej-test-temperatura-desacoplada
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>
#include <stdbool.h>

bool son_cercanos(double a, double b, double eps)
{
    return fabs(a - b) < eps;
}

double celsius_a_fahrenheit(double c)
{
    return (c * 9.0 / 5.0) + 32.0;
}

double fahrenheit_a_celsius(double f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

double celsius_a_kelvin(double c)
{
    return c + 273.15;
}

void test_celsius_a_fahrenheit_cero(void)
{
    assert(son_cercanos(celsius_a_fahrenheit(0.0), 32.0, 1e-6));
}

void test_celsius_a_fahrenheit_ebullicion(void)
{
    assert(son_cercanos(celsius_a_fahrenheit(100.0), 212.0, 1e-6));
}

void test_celsius_a_kelvin_cero(void)
{
    assert(son_cercanos(celsius_a_kelvin(0.0), 273.15, 1e-6));
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-temperatura-desacoplada -->

---
