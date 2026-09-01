### Ejercicio 4.21 - Calculadora con memoria local vs global ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-calculadora-memoria
Implementá una calculadora donde el valor acumulado en memoria sea una variable
local gestionada en `main` o en las pruebas, utilizando funciones puras:
- `double calc_sumar(double acumulador, double valor)`
- `double calc_restar(double acumulador, double valor)`
- `double calc_multiplicar(double acumulador, double valor)`
- `double calc_dividir(double acumulador, double valor, bool *ok)`

Escribí pruebas unitarias para cada operación y una prueba para una secuencia de
operaciones combinadas.

-   **[*plus ultra*]:** Validar división por cero poniendo `*ok = false`.
-   **[*plus ultra*]:** Verificar que el acumulador original no se altere si la
    división falla.

:::
<!-- {exercise} -->

:::{solution} ej-test-calculadora-memoria
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

double calc_sumar(double acumulador, double valor)
{
    return acumulador + valor;
}

double calc_restar(double acumulador, double valor)
{
    return acumulador - valor;
}

double calc_multiplicar(double acumulador, double valor)
{
    return acumulador * valor;
}

double calc_dividir(double acumulador, double valor, bool *ok)
{
    if (valor == 0.0)
    {
        *ok = false;
        return acumulador;
    }
    *ok = true;
    return acumulador / valor;
}

void test_secuencia_calculadora(void)
{
    double acc = 0.0;
    bool ok = false;

    acc = calc_sumar(acc, 50.0);
    acc = calc_multiplicar(acc, 2.0);
    acc = calc_restar(acc, 20.0);
    acc = calc_dividir(acc, 4.0, &ok);

    assert(ok == true);
    assert(acc == 20.0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-calculadora-memoria -->

---
