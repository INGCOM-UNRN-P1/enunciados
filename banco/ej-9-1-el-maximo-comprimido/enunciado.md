### Ejercicio 9.1 - El Máximo Comprimido ⭐☆☆☆☆

:::{exercise}
:label: ej-ref-maximo-comprimido
Analizá y refactorizá la siguiente función que utiliza el operador ternario
prohibido y nombres crípticos:

``` c
int f(int a,int b){return(a>b)?a:b;}
```
<!-- c -->

-   **[*plus ultra*]:** Implementar `int obtener_mayor(int primer_numero, int
    segundo_numero)` con estilo Allman y `if-else`.
-   **[*plus ultra*]:** Escribir pruebas unitarias con `assert()` para números
    positivos, negativos e iguales.

:::
<!-- {exercise} -->

:::{solution} ej-ref-maximo-comprimido
:class: dropdown
**Diagnóstico:**
- Violación de la [Regla 0x1007h](../../reglas/1_control.md#0x1007h): uso del
  operador ternario `?:`.
- Violación de la [Regla 0x000Bh](../../reglas/0_sintaxis.md#0x000bh): llaves en
  la misma línea (no es Allman).
- Violación de la [Regla 0x0007h](../../reglas/0_sintaxis.md#0x0007h):
  identificadores de una letra `f, a, b`.

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

int obtener_mayor(int primer_numero, int segundo_numero)
{
    if (primer_numero > segundo_numero)
    {
        return primer_numero;
    }
    else
    {
        return segundo_numero;
    }
}

void test_obtener_mayor(void)
{
    assert(obtener_mayor(10, 5) == 10);
    assert(obtener_mayor(-3, -8) == -3);
    assert(obtener_mayor(7, 7) == 7);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-maximo-comprimido -->

---
