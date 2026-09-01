### Ejercicio 9.2 - Geometría sin Nombres ⭐☆☆☆☆

:::{exercise}
:label: ej-ref-area-triangulo
Descifrá el propósito geométrico del siguiente fragmento y refactorizalo:

``` c
double x(double a,double b){return a*b/2.0;}
```
<!-- c -->

-   **[*plus ultra*]:** Validar que las dimensiones sean estrictamente positivas
    retornando `-1.0` si son inválidas.
-   **[*plus ultra*]:** Documentar con etiquetas Doxygen (`@param`, `@pre`,
    `@returns`).

:::
<!-- {exercise} -->

:::{solution} ej-ref-area-triangulo
:class: dropdown
**Diagnóstico:** Calcula el área de un triángulo con base `a` y altura `b`. No
valida dimensiones no positivas.

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

double calcular_area_triangulo(double base, double altura)
{
    if (base <= 0.0 || altura <= 0.0)
    {
        return -1.0;
    }
    return (base * altura) / 2.0;
}

void test_area_triangulo(void)
{
    assert(calcular_area_triangulo(10.0, 5.0) == 25.0);
    assert(calcular_area_triangulo(-2.0, 5.0) == -1.0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-area-triangulo -->

---
