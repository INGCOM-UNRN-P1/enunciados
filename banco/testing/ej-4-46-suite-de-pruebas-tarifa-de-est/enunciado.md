### Ejercicio 4.46 - Suite de Pruebas: Tarifa de Estacionamiento ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-suite-estacionamiento
Una playa de estacionamiento cobra según las siguientes reglas:
- Primera hora o fracción: $200 (tarifa base).
- Cada hora adicional: $150.
- Si el tiempo supera las 6 horas, se aplica un descuento del 10% sobre el
  total.
- Máximo cobro diario: $1200.

Implementá la función pura `double calcular_estacionamiento(int minutos)` y
diseñá su suite de pruebas exhaustiva.

-   **[*plus ultra*]:** Validar que `minutos <= 0` retorne `0.0`.
-   **[*plus ultra*]:** Testear los minutos frontera: 0, 30, 60, 61, 360, 361,
    1440.

:::
<!-- {exercise} -->

:::{solution} ej-test-suite-estacionamiento
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>
#include <stdbool.h>

double calcular_estacionamiento(int minutos)
{
    if (minutos <= 0)
    {
        return 0.0;
    }
    int horas = (minutos + 59) / 60; // Redondeo hacia arriba a la hora siguiente
    double total = 200.0;
    if (horas > 1)
    {
        total += (horas - 1) * 150.0;
    }
    if (horas > 6)
    {
        total *= 0.90;
    }
    if (total > 1200.0)
    {
        total = 1200.0;
    }
    return total;
}

void test_estacionamiento_primera_hora(void)
{
    assert(calcular_estacionamiento(30) == 200.0);
    assert(calcular_estacionamiento(60) == 200.0);
}

void test_estacionamiento_horas_adicionales(void)
{
    assert(calcular_estacionamiento(61) == 350.0); // 2 horas
    assert(calcular_estacionamiento(180) == 500.0); // 3 horas
}

void test_estacionamiento_descuento_larga_estadia(void)
{
    // 7 horas = 200 + 6*150 = 1100. Con 10% desc = 990.
    assert(calcular_estacionamiento(420) == 990.0);
}

void test_estacionamiento_tope_maximo(void)
{
    assert(calcular_estacionamiento(1440) == 1200.0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-suite-estacionamiento -->

---
