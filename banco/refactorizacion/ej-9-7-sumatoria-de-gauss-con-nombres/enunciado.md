### Ejercicio 9.7 - Sumatoria de Gauss con Nombres Inadecuados ⭐☆☆☆☆

:::{exercise}
:label: ej-ref-gauss-inadecuado
Refactorizá la siguiente fórmula de Gauss:

``` c
int s(int n){return n*(n+1)/2;}
```
<!-- c -->

-   **[*plus ultra*]:** Validar que $n \ge 0$.
-   **[*plus ultra*]:** Usar el tipo `long long` para evitar desbordamientos
    enteros en valores de $n > 65535$.

:::
<!-- {exercise} -->

:::{solution} ej-ref-gauss-inadecuado
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

long long calcular_sumatoria_gauss(int limite_superior)
{
    if (limite_superior < 0)
    {
        return -1;
    }
    long long n = limite_superior;
    return (n * (n + 1)) / 2;
}

void test_sumatoria_gauss(void)
{
    assert(calcular_sumatoria_gauss(0) == 0);
    assert(calcular_sumatoria_gauss(10) == 55);
    assert(calcular_sumatoria_gauss(100) == 5050);
    assert(calcular_sumatoria_gauss(-5) == -1);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-gauss-inadecuado -->

---
