### Ejercicio 4.53 - Suite de Pruebas: Validador de Triángulo ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-suite-triangulo
Implementá `int clasificar_triangulo(double a, double b, double c)`:
- `0`: No es triángulo válido (viola desigualdad triangular o lados $\le 0$).
- `1`: Equilátero (3 lados iguales).
- `2`: Isósceles (2 lados iguales).
- `3`: Escaleno (3 lados distintos).

Diseñá la suite de pruebas unitarias verificando cada clase y casos degenerados
($a + b = c$).

-   **[*plus ultra*]:** Usar comparación con tolerancia `son_cercanos` para los
    lados.

:::
<!-- {exercise} -->

:::{solution} ej-test-suite-triangulo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>
#include <stdbool.h>

bool lados_cercanos(double x, double y)
{
    return fabs(x - y) < 1e-6;
}

int clasificar_triangulo(double a, double b, double c)
{
    if (a <= 0.0 || b <= 0.0 || c <= 0.0)
    {
        return 0;
    }
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return 0; // Desigualdad triangular violada
    }
    if (lados_cercanos(a, b) && lados_cercanos(b, c))
    {
        return 1; // Equilátero
    }
    if (lados_cercanos(a, b) || lados_cercanos(a, c) || lados_cercanos(b, c))
    {
        return 2; // Isósceles
    }
    return 3; // Escaleno
}

void test_triangulo_invalido(void)
{
    assert(clasificar_triangulo(1.0, 2.0, 3.0) == 0); // Degenerado
    assert(clasificar_triangulo(-1.0, 2.0, 2.0) == 0);
}

void test_triangulo_tipos(void)
{
    assert(clasificar_triangulo(5.0, 5.0, 5.0) == 1);
    assert(clasificar_triangulo(5.0, 5.0, 8.0) == 2);
    assert(clasificar_triangulo(3.0, 4.0, 5.0) == 3);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-suite-triangulo -->

---
