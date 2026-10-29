### Ejercicio 4.13 - Refactorización de Cuenta Bancaria con Estado Global ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-refactor-banco
El siguiente código implementa operaciones bancarias usando estado global.
Refactorizalo a funciones puras que reciban el saldo como parámetro y retornen
el nuevo saldo:

```{code-block} c
:linenos:
double saldo_global = 0.0;

void depositar(double monto)
{
    if (monto > 0)
    {
        saldo_global += monto;
    }
}

bool extraer(double monto)
{
    if (monto > 0 && saldo_global >= monto)
    {
        saldo_global -= monto;
        return true;
    }
    return false;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Escribir tests unitarios que verifiquen depósitos y
    extracciones sin necesidad de reiniciar variables globales.
-   **[*plus ultra*]:** Manejar saldos negativos o montos inválidos retornando
    códigos de error.

:::
<!-- {exercise} -->

:::{solution} ej-test-refactor-banco
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

double depositar(double saldo_actual, double monto)
{
    if (monto <= 0.0 || saldo_actual < 0.0)
    {
        return saldo_actual;
    }
    return saldo_actual + monto;
}

double extraer(double saldo_actual, double monto, bool *exito)
{
    if (monto <= 0.0 || monto > saldo_actual)
    {
        *exito = false;
        return saldo_actual;
    }
    *exito = true;
    return saldo_actual - monto;
}

void test_operaciones_bancarias_puras(void)
{
    double saldo = 1000.0;
    bool ok = false;

    saldo = depositar(saldo, 500.0);
    assert(saldo == 1500.0);

    saldo = extraer(saldo, 200.0, &ok);
    assert(ok == true);
    assert(saldo == 1300.0);

    saldo = extraer(saldo, 2000.0, &ok);
    assert(ok == false);
    assert(saldo == 1300.0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-refactor-banco -->

---
