### Ejercicio 4.40 - Red de Seguridad: Default en Switch ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-default-switch
¿Por qué toda sentencia `switch` debe contener obligatoriamente una cláusula
`default` según la [Regla 0x1003h](../../reglas/1_control.md#0x1003h), incluso
si el programador cree haber cubierto todos los casos posibles?

-   **[*plus ultra*]:** Implementar una función `int obtener_dias_trimestre(int
    trimestre)` con manejo de `default` que retorne `-1`.
-   **[*plus ultra*]:** Escribir tests unitarios que verifiquen el caso
    `default`.

:::
<!-- {exercise} -->

:::{solution} ej-test-default-switch
:class: dropdown
El bloque `default` actúa como una red de seguridad defensiva ante datos
imprevistos, corrupción de memoria o adición futura de nuevos valores en el
dominio que no fueron contemplados.

```{code-block} c
:linenos:
#include <assert.h>

int obtener_dias_trimestre(int trimestre)
{
    switch (trimestre)
    {
        case 1:
            return 90;
        case 2:
            return 91;
        case 3:
            return 92;
        case 4:
            return 92;
        default:
            return -1; // Captura de valores inválidos
    }
}

void test_trimestres(void)
{
    assert(obtener_dias_trimestre(1) == 90);
    assert(obtener_dias_trimestre(5) == -1);
    assert(obtener_dias_trimestre(-1) == -1);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-default-switch -->

---
