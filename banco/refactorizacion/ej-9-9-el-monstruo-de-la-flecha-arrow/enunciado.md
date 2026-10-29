### Ejercicio 9.9 - El Monstruo de la Flecha (Arrow Code) ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-arrow-code
Refactorizá la siguiente función anidada en forma de flecha aplicando
**cláusulas de guarda** según la [Regla
0x2001h](../../reglas/2_funciones.md#0x2001h):

```{code-block} c
:linenos:
int calificar(int nota, int asistencia)
{
    int r = 0;
    if (asistencia >= 75)
    {
        if (nota >= 0)
        {
            if (nota <= 100)
            {
                if (nota >= 60)
                {
                    if (nota >= 90)
                    {
                        r = 3; // Sobresaliente
                    }
                    else
                    {
                        r = 2; // Aprobado
                    }
                }
                else
                {
                    r = 1; // Reprobado
                }
            }
            else
            {
                r = -1; // Error nota
            }
        }
        else
        {
            r = -1; // Error nota
        }
    }
    else
    {
        r = 0; // Libre
    }
    return r;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Reducir la profundidad máxima de indentación a 1 nivel
    dentro de la función.
-   **[*plus ultra*]:** Escribir pruebas unitarias para cada uno de los valores
    de retorno.

:::
<!-- {exercise} -->

:::{solution} ej-ref-arrow-code
:class: dropdown
**Diagnóstico:** Anidación excesiva de 5 niveles que dificulta el seguimiento de
los casos de error.

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

#define ESTADO_NOTA_INVALIDA -1
#define ESTADO_LIBRE 0
#define ESTADO_REPROBADO 1
#define ESTADO_APROBADO 2
#define ESTADO_SOBRESALIENTE 3

int clasificar_desempenio(int nota, int asistencia_porcentaje)
{
    if (nota < 0 || nota > 100)
    {
        return ESTADO_NOTA_INVALIDA;
    }
    if (asistencia_porcentaje < 75)
    {
        return ESTADO_LIBRE;
    }
    if (nota >= 90)
    {
        return ESTADO_SOBRESALIENTE;
    }
    if (nota >= 60)
    {
        return ESTADO_APROBADO;
    }
    return ESTADO_REPROBADO;
}

void test_clasificar_desempenio(void)
{
    assert(clasificar_desempenio(95, 80) == ESTADO_SOBRESALIENTE);
    assert(clasificar_desempenio(70, 80) == ESTADO_APROBADO);
    assert(clasificar_desempenio(50, 80) == ESTADO_REPROBADO);
    assert(clasificar_desempenio(80, 50) == ESTADO_LIBRE);
    assert(clasificar_desempenio(105, 80) == ESTADO_NOTA_INVALIDA);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-arrow-code -->

---
