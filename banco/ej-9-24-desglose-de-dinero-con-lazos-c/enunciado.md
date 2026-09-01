### Ejercicio 9.24 - Desglose de Dinero con Lazos Confusos ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-desglose-dinero
Refactorizá la siguiente función que calcula monedas de cambio de manera
ofuscada:

``` c
int c100,c50,c10;
void m(int x){c100=x/100;x%=100;c50=x/50;x%=50;c10=x/10;}
```
<!-- c -->

-   **[*plus ultra*]:** Eliminar las variables globales retornando los
    resultados mediante parámetros o empaquetándolos en funciones atómicas.
-   **[*plus ultra*]:** Validar que el monto no sea negativo.

:::
<!-- {exercise} -->

:::{solution} ej-ref-desglose-dinero
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool desglosar_cambio(int monto, int *monedas_100, int *monedas_50, int *monedas_10)
{
    if (monto < 0 || monedas_100 == NULL || monedas_50 == NULL || monedas_10 == NULL)
    {
        return false;
    }
    *monedas_100 = monto / 100;
    monto %= 100;

    *monedas_50 = monto / 50;
    monto %= 50;

    *monedas_10 = monto / 10;
    return true;
}

void test_desglose_cambio(void)
{
    int m100 = 0, m50 = 0, m10 = 0;
    bool ok = desglosar_cambio(370, &m100, &m50, &m10);
    assert(ok && m100 == 3 && m50 == 1 && m10 == 2);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-desglose-dinero -->

---

## 4. Descomposición Modular y Funciones Reutilizables
