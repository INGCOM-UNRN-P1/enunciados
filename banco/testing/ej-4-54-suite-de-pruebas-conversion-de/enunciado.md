### Ejercicio 4.54 - Suite de Pruebas: Conversión de Segundos a Tiempo ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-suite-segundos-tiempo
Implementá `bool segundos_a_tiempo(int total_segundos, int *horas, int *minutos,
int *segundos)` y diseñá su suite de pruebas con `assert()`:
- `total_segundos = 0` $\rightarrow$ `0h 0m 0s`.
- `total_segundos = 59` $\rightarrow$ `0h 0m 59s`.
- `total_segundos = 60` $\rightarrow$ `0h 1m 0s`.
- `total_segundos = 3661` $\rightarrow$ `1h 1m 1s`.
- `total_segundos = 86399` $\rightarrow$ `23h 59m 59s`.
- `total_segundos = -5` $\rightarrow$ `false`.

-   **[*plus ultra*]:** Verificar que la función retorne `false` si cualquier
    puntero recibido es `NULL`.

:::
<!-- {exercise} -->

:::{solution} ej-test-suite-segundos-tiempo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>
#include <stddef.h>

bool segundos_a_tiempo(int total_segundos, int *horas, int *minutos, int *segundos)
{
    if (total_segundos < 0 || !horas || !minutos || !segundos)
    {
        return false;
    }
    *horas = total_segundos / 3600;
    int resto = total_segundos % 3600;
    *minutos = resto / 60;
    *segundos = resto % 60;
    return true;
}

void test_segundos_a_tiempo_normal(void)
{
    int h = 0, m = 0, s = 0;
    bool ok = segundos_a_tiempo(3661, &h, &m, &s);
    assert(ok == true);
    assert(h == 1 && m == 1 && s == 1);
}

void test_segundos_a_tiempo_cero(void)
{
    int h = 0, m = 0, s = 0;
    bool ok = segundos_a_tiempo(0, &h, &m, &s);
    assert(ok == true);
    assert(h == 0 && m == 0 && s == 0);
}

void test_segundos_a_tiempo_invalido(void)
{
    int h = 0, m = 0, s = 0;
    assert(segundos_a_tiempo(-10, &h, &m, &s) == false);
    assert(segundos_a_tiempo(100, NULL, &m, &s) == false);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-suite-segundos-tiempo -->

---
