### Ejercicio 9.8 - Cilindro con Número Mágico ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-cilindro-magico
Refactorizá la siguiente función que calcula el volumen de un cilindro
eliminando la constante mágica y aplicando contratos:

``` c
double v(double r,double h){return 3.14159265*r*r*h;}
```
<!-- c -->

-   **[*plus ultra*]:** Definir `#define CONSTANTE_PI 3.141592653589793`.
-   **[*plus ultra*]:** Validar que radio y altura sean mayores a cero.

:::
<!-- {exercise} -->

:::{solution} ej-ref-cilindro-magico
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>

#define CONSTANTE_PI 3.14159265358979323846

double calcular_volumen_cilindro(double radio, double altura)
{
    if (radio <= 0.0 || altura <= 0.0)
    {
        return -1.0;
    }
    return CONSTANTE_PI * radio * radio * altura;
}

void test_volumen_cilindro(void)
{
    double vol = calcular_volumen_cilindro(1.0, 10.0);
    assert(fabs(vol - (CONSTANTE_PI * 10.0)) < 1e-6);
    assert(calcular_volumen_cilindro(-1.0, 5.0) == -1.0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-cilindro-magico -->

---

## 2. Control de Flujo Espagueti y Anidaciones Profundas
