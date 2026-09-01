### Ejercicio 9.50 - Conversor de Números Romanos Básicos ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-romanos-basicos
Refactorizá la siguiente función que convierte un carácter romano individual a
su valor numérico:

``` c
int r2d(char c){if(c=='I')return 1;if(c=='V')return 5;if(c=='X')return 10;if(c=='L')return 50;if(c=='C')return 100;if(c=='D')return 500;if(c=='M')return 1000;return 0;}
```
<!-- c -->

-   **[*plus ultra*]:** Refactorizar a un `switch` con cláusula `default`
    retornando `-1` ante error ([Regla
    0x1003h](../../reglas/1_control.md#0x1003h)).
-   **[*plus ultra*]:** Escribir tests unitarios con `assert()`.

:::
<!-- {exercise} -->

:::{solution} ej-ref-romanos-basicos
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

int obtener_valor_simbolo_romano(char simbolo)
{
    switch (simbolo)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return -1;
    }
}

void test_simbolos_romanos(void)
{
    assert(obtener_valor_simbolo_romano('X') == 10);
    assert(obtener_valor_simbolo_romano('M') == 1000);
    assert(obtener_valor_simbolo_romano('A') == -1);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-romanos-basicos -->

---
