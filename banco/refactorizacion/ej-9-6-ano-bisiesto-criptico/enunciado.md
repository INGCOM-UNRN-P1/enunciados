### Ejercicio 9.6 - Año Bisiesto Críptico ⭐☆☆☆☆

:::{exercise}
:label: ej-ref-bisiesto-criptico
El siguiente código evalúa años bisiestos en una sola línea condensada sin
validar años negativos:

``` c
bool b(int y){return(y%4==0&&y%100!=0)||(y%400==0);}
```
<!-- c -->

-   **[*plus ultra*]:** Refactorizar con cláusula de guarda para años $\le 0$.
-   **[*plus ultra*]:** Escribir una suite con tests unitarios separados para
    cada rama de decisión.

:::
<!-- {exercise} -->

:::{solution} ej-ref-bisiesto-criptico
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool es_anio_bisiesto(int anio)
{
    if (anio <= 0)
    {
        return false;
    }
    bool es_div_4 = (anio % 4 == 0);
    bool es_div_100 = (anio % 100 == 0);
    bool es_div_400 = (anio % 400 == 0);

    return (es_div_4 && !es_div_100) || es_div_400;
}

void test_es_anio_bisiesto(void)
{
    assert(es_anio_bisiesto(2024) == true);
    assert(es_anio_bisiesto(2023) == false);
    assert(es_anio_bisiesto(1900) == false);
    assert(es_anio_bisiesto(2000) == true);
    assert(es_anio_bisiesto(-4) == false);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-bisiesto-criptico -->

---
