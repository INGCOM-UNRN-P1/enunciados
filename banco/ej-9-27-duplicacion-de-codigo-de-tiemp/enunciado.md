### Ejercicio 9.27 - Duplicación de Código de Tiempo (Violación DRY) ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-violacion-dry
El siguiente programa repite tres veces la misma lógica de cálculo de segundos a
HH:MM:SS en diferentes lugares. Aplicá el principio **DRY (Don't Repeat
Yourself)** abstrayendo la lógica en una función reutilizable:

```{code-block} c
:linenos:
void imprimir_tres_horarios(int t1, int t2, int t3)
{
    int h1 = t1 / 3600; int m1 = (t1 % 3600) / 60; int s1 = t1 % 60;
    int h2 = t2 / 3600; int m2 = (t2 % 3600) / 60; int s2 = t2 % 60;
    int h3 = t3 / 3600; int m3 = (t3 % 3600) / 60; int s3 = t3 % 60;
    // ...
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Implementar `void descomponer_segundos(int
    total_segundos, int *h, int *m, int *s)`.
-   **[*plus ultra*]:** Escribir pruebas unitarias para la función de
    descomposición.

:::
<!-- {exercise} -->

:::{solution} ej-ref-violacion-dry
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool descomponer_segundos(int total_segundos, int *horas, int *minutos, int *segundos)
{
    if (total_segundos < 0 || horas == NULL || minutos == NULL || segundos == NULL)
    {
        return false;
    }
    *horas = total_segundos / 3600;
    int resto = total_segundos % 3600;
    *minutos = resto / 60;
    *segundos = resto % 60;
    return true;
}

void test_descomponer_segundos(void)
{
    int h = 0, m = 0, s = 0;
    assert(descomponer_segundos(3665, &h, &m, &s));
    assert(h == 1 && m == 1 && s == 5);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-violacion-dry -->

---
