### Ejercicio 4.32 - Testeo de Año Bisiesto Exhaustivo ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-bisiesto-exhaustivo
Implementá `bool es_bisiesto(int anio)` y diseñá una suite de pruebas que
verifique las cuatro reglas del calendario gregoriano:
1. Años múltiplos de 4 no múltiplos de 100 (ej. 2024 $\rightarrow$ `true`).
2. Años no múltiplos de 4 (ej. 2023 $\rightarrow$ `false`).
3. Años múltiplos de 100 pero no de 400 (ej. 1900 $\rightarrow$ `false`).
4. Años múltiplos de 400 (ej. 2000 $\rightarrow$ `true`).

-   **[*plus ultra*]:** Validar que años $\le 0$ retornen `false`.
-   **[*plus ultra*]:** Escribir una función de test por cada regla evaluada.

:::
<!-- {exercise} -->

:::{solution} ej-test-bisiesto-exhaustivo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool es_bisiesto(int anio)
{
    if (anio <= 0)
    {
        return false;
    }
    return ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
}

void test_bisiesto_multiplo_4(void)
{
    assert(es_bisiesto(2024) == true);
}

void test_no_bisiesto_comun(void)
{
    assert(es_bisiesto(2023) == false);
}

void test_no_bisiesto_fin_de_siglo(void)
{
    assert(es_bisiesto(1900) == false);
}

void test_bisiesto_cuatrisecular(void)
{
    assert(es_bisiesto(2000) == true);
}

void test_bisiesto_invalido(void)
{
    assert(es_bisiesto(-400) == false);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-bisiesto-exhaustivo -->

---
