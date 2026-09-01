### Ejercicio 4.35 - Verificación de Estilo Allman ⭐☆☆☆☆

:::{exercise}
:label: ej-test-estilo-allman
Identificá las violaciones de la [Regla
0x000Bh](../../reglas/0_sintaxis.md#0x000bh) (Estilo Allman) en el siguiente
código y reescribilo con las llaves correctamente alineadas en su propia línea:

```{code-block} c
:linenos:
// Código mal formateado:
int valor_absoluto(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Formatear con 4 espacios de indentación.
-   **[*plus ultra*]:** Escribir una prueba unitaria para `valor_absoluto(-12)`
    y `valor_absoluto(0)`.

:::
<!-- {exercise} -->

:::{solution} ej-test-estilo-allman
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

int valor_absoluto(int n)
{
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

void test_valor_absoluto(void)
{
    assert(valor_absoluto(-12) == 12);
    assert(valor_absoluto(0) == 0);
    assert(valor_absoluto(15) == 15);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-estilo-allman -->

---
