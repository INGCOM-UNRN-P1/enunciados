### Ejercicio 4.11 - El misterio del test que falla según el orden ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-misterio-orden
Analizá el siguiente código. ¿Por qué `test_dos()` pasa exitosamente si se
ejecuta primero, pero falla si se ejecuta después de `test_uno()`?

```{code-block} c
:linenos:
#include <assert.h>

int total_acumulado = 0; // Variable global

void acumular(int valor)
{
    total_acumulado += valor;
}

void test_uno(void)
{
    acumular(5);
    acumular(10);
    assert(total_acumulado == 15);
}

void test_dos(void)
{
    acumular(20);
    assert(total_acumulado == 20); // ¿Por qué falla si corre después de test_uno?
}

int main(void)
{
    test_uno();
    test_dos();
    return 0;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Identificar la violación de la [Regla
    0x2004h](../../reglas/2_funciones.md#0x2004h).
-   **[*plus ultra*]:** Refactorizar `acumular` para que reciba el total actual
    y retorne el nuevo total de forma pura.

:::
<!-- {exercise} -->

:::{solution} ej-test-misterio-orden
:class: dropdown
`total_acumulado` es una variable global mutable. Al terminar `test_uno()`, su
valor queda en `15`. Cuando inicia `test_dos()`, `acumular(20)` suma 20 a 15,
resultando en `35` en lugar de `20`, provocando la caída del `assert`.

**Refactorización a función pura:**
```{code-block} c
:linenos:
int acumular(int total_actual, int valor)
{
    return total_actual + valor;
}

void test_uno(void)
{
    int total = 0;
    total = acumular(total, 5);
    total = acumular(total, 10);
    assert(total == 15);
}

void test_dos(void)
{
    int total = 0;
    total = acumular(total, 20);
    assert(total == 20);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-misterio-orden -->

---
