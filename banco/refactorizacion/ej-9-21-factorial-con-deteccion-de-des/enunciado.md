### Ejercicio 9.21 - Factorial con Detección de Desbordamiento Oculto ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-fact-desborde
Refactorizá la siguiente función de factorial:

``` c
long f(int n){if(n<0||n>20)return -1;long r=1;for(int i=2;i<=n;i++)r*=i;return r;}
```
<!-- c -->

-   **[*plus ultra*]:** Reemplazar el número mágico `20` por una constante
    descriptiva `#define MAX_FACTORIAL_LONG 20`.
-   **[*plus ultra*]:** Escribir tests unitarios con `assert()`.

:::
<!-- {exercise} -->

:::{solution} ej-ref-fact-desborde
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

#define MAX_N_FACTORIAL_64BITS 20

long long calcular_factorial(int n)
{
    if (n < 0 || n > MAX_N_FACTORIAL_64BITS)
    {
        return -1;
    }
    long long resultado = 1;
    for (int factor = 2; factor <= n; factor++)
    {
        resultado *= factor;
    }
    return resultado;
}

void test_factorial(void)
{
    assert(calcular_factorial(0) == 1);
    assert(calcular_factorial(5) == 120);
    assert(calcular_factorial(21) == -1); // Error de desbordamiento
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-fact-desborde -->

---
