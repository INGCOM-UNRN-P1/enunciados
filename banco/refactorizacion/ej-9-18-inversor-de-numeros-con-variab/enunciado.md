### Ejercicio 9.18 - Inversor de Números con Variables Reutilizadas ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-inversor-reutilizado
Descubrí el algoritmo y refactorizalo:

``` c
int inv(int x){int r=0;while(x>0){r=r*10+x%10;x=x/10;}return r;}
```
<!-- c -->

-   **[*plus ultra*]:** Manejar números negativos conservando su signo.
-   **[*plus ultra*]:** Comprobar palíndromos numéricos reutilizando esta
    función.

:::
<!-- {exercise} -->

:::{solution} ej-ref-inversor-reutilizado
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdlib.h>

int invertir_numero_entero(int numero)
{
    int signo = (numero < 0) ? -1 : 1;
    int n = abs(numero);
    int invertido = 0;

    while (n > 0)
    {
        invertido = (invertido * 10) + (n % 10);
        n /= 10;
    }
    return invertido * signo;
}

void test_invertir_numero(void)
{
    assert(invertir_numero_entero(1234) == 4321);
    assert(invertir_numero_entero(-580) == -85);
    assert(invertir_numero_entero(0) == 0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-inversor-reutilizado -->

---
