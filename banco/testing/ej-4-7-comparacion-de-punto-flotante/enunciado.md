### Ejercicio 4.7 - Comparación de punto flotante en testing ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-comparacion-float
Analizá por qué la siguiente prueba puede fallar inesperadamente en C y escribí
una función auxiliar `son_cercanos(double a, double b, double epsilon)` para
solucionarlo:

``` c
double tercio = 1.0 / 3.0;
assert(tercio * 3.0 == 1.0); // ¡Peligro de precisión!
```
<!-- c -->

-   **[*plus ultra*]:** Implementar `bool son_cercanos(double a, double b,
    double eps)` usando `fabs()` de `<math.h>`.
-   **[*plus ultra*]:** Escribir un test que verifique `0.1 + 0.2` frente a
    `0.3` con tolerancia $10^{-6}$.

:::
<!-- {exercise} -->

:::{solution} ej-test-comparacion-float
:class: dropdown
En aritmética binaria de punto flotante (IEEE 754), números como `0.1` o
`1.0/3.0` no tienen representación exacta finita, lo que produce pequeñas
discrepancias en los últimos decimales.

```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>
#include <stdbool.h>

bool son_cercanos(double a, double b, double epsilon)
{
    return fabs(a - b) < epsilon;
}

void test_suma_decimales(void)
{
    double resultado = 0.1 + 0.2;
    double esperado = 0.3;
    assert(son_cercanos(resultado, esperado, 1e-9));
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-comparacion-float -->

---
