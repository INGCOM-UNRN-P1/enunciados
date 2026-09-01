### Ejercicio 4.52 - Suite de Pruebas: Palíndromo Numérico ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-suite-palindromo
Implementá `bool es_numero_capicua(int n)` mediante funciones auxiliares puras
(`invertir_numero`) y construí su suite de pruebas:
- Números de 1 solo dígito (siempre son capicúas: `0, 1, 7`).
- Números pares capicúas (`1221`, `44`).
- Números impares capicúas (`12321`, `505`).
- Números no capicúas (`123`, `100`).
- Números negativos (por convención, retornan `false`).

-   **[*plus ultra*]:** Validar que no se produzca desbordamiento entero al
    invertir.

:::
<!-- {exercise} -->

:::{solution} ej-test-suite-palindromo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

int invertir_entero(int n)
{
    int invertido = 0;
    while (n > 0)
    {
        invertido = (invertido * 10) + (n % 10);
        n /= 10;
    }
    return invertido;
}

bool es_numero_capicua(int n)
{
    if (n < 0)
    {
        return false;
    }
    if (n < 10)
    {
        return true;
    }
    return n == invertir_entero(n);
}

void test_capicua_un_digito(void)
{
    assert(es_numero_capicua(0) == true);
    assert(es_numero_capicua(7) == true);
}

void test_capicua_multiples_digitos(void)
{
    assert(es_numero_capicua(1221) == true);
    assert(es_numero_capicua(12321) == true);
    assert(es_numero_capicua(123) == false);
    assert(es_numero_capicua(-121) == false);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-suite-palindromo -->

---
