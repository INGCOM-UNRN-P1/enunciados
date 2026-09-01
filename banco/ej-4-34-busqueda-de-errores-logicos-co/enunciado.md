### Ejercicio 4.34 - Búsqueda de errores lógicos con aserciones de invariante ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-invariantes-lazo
En el siguiente algoritmo para calcular la división entera por restas sucesivas,
agregá una aserción al final que verifique la invariante matemática fundamental:
$\text{dividendo} = \text{divisor} \times \text{cociente} + \text{resto}$.

```{code-block} c
:linenos:
void division_lenta(int dividendo, int divisor, int *cociente, int *resto)
{
    assert(divisor > 0);
    assert(dividendo >= 0);

    int c = 0;
    int r = dividendo;
    while (r >= divisor)
    {
        r -= divisor;
        c++;
    }
    *cociente = c;
    *resto = r;

    // Aserción de invariante:
    assert(dividendo == (divisor * (*cociente)) + (*resto));
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Diseñar tests unitarios para $10 \div 3$, $20 \div 5$ y
    $3 \div 7$.
-   **[*plus ultra*]:** Verificar que el resto siempre cumpla $0 \le r <
    \text{divisor}$.

:::
<!-- {exercise} -->

:::{solution} ej-test-invariantes-lazo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

void test_division_con_invariante(void)
{
    int c = 0;
    int r = 0;

    division_lenta(10, 3, &c, &r);
    assert(c == 3 && r == 1);

    division_lenta(20, 5, &c, &r);
    assert(c == 4 && r == 0);

    division_lenta(3, 7, &c, &r);
    assert(c == 0 && r == 3);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-invariantes-lazo -->

---

## 4. Estilo, Estructura y Contratos
