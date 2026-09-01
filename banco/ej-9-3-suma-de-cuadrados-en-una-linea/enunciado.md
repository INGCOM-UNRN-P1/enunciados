### Ejercicio 9.3 - Suma de Cuadrados en Una Línea ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-suma-cuadrados
Analizá el siguiente lazo comprimido y refactorizalo para que sea claro, robusto
y testeable:

``` c
int p(int n){int s=0;for(int i=1;i<=n;i++)s+=i*i;return s;}
```
<!-- c -->

-   **[*plus ultra*]:** Validar que $n \ge 0$.
-   **[*plus ultra*]:** Comparar el resultado del lazo con la fórmula cerrada
    $\frac{n(n+1)(2n+1)}{6}$.

:::
<!-- {exercise} -->

:::{solution} ej-ref-suma-cuadrados
:class: dropdown
**Diagnóstico:** Calcula $\sum_{i=1}^n i^2$. Carece de espacios, llaves Allman y
validación para $n < 0$.

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

int calcular_suma_cuadrados(int limite)
{
    if (limite < 0)
    {
        return -1;
    }
    int acumulador = 0;
    for (int i = 1; i <= limite; i++)
    {
        acumulador += (i * i);
    }
    return acumulador;
}

void test_suma_cuadrados(void)
{
    assert(calcular_suma_cuadrados(0) == 0);
    assert(calcular_suma_cuadrados(3) == 14); // 1 + 4 + 9 = 14
    assert(calcular_suma_cuadrados(-5) == -1);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-suma-cuadrados -->

---
