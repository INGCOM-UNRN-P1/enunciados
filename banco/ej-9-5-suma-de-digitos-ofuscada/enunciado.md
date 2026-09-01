### Ejercicio 9.5 - Suma de Dígitos Ofuscada ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-suma-digitos
Analizá el siguiente código. ¿Qué hace y cómo falla si recibe un número
negativo?

``` c
int d(int n){int c=0;while(n){c+=n%10;n/=10;}return c;}
```
<!-- c -->

-   **[*plus ultra*]:** Refactorizar usando `abs()` o convirtiendo el número a
    positivo.
-   **[*plus ultra*]:** Escribir tests con `assert()` para números positivos,
    negativos y el cero.

:::
<!-- {exercise} -->

:::{solution} ej-ref-suma-digitos
:class: dropdown
**Diagnóstico:** Suma los dígitos de un número. Para `-123`, `n % 10` produce
restos negativos en C99+, dando una suma errónea (`-1 + -2 + -3 = -6`).

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdlib.h>

int sumar_digitos(int numero)
{
    int n = abs(numero);
    int suma = 0;
    while (n > 0)
    {
        suma += (n % 10);
        n /= 10;
    }
    return suma;
}

void test_sumar_digitos(void)
{
    assert(sumar_digitos(1234) == 10);
    assert(sumar_digitos(-505) == 10);
    assert(sumar_digitos(0) == 0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-suma-digitos -->

---
