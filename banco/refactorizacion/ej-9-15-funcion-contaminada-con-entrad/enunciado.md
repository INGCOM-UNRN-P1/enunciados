### Ejercicio 9.15 - Función Contaminada con Entrada/Salida ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-contaminada-io
La siguiente función viola la [Regla
0x2002h](../../reglas/2_funciones.md#0x2002h) porque realiza `printf` adentro
del cálculo. Refactorizala para que sea una función pura y testeable:

```{code-block} c
:linenos:
#include <stdio.h>

void clasificar_temperatura_ambiente(double temp)
{
    if (temp < 10.0)
    {
        printf("Hace frio\n");
    }
    else if (temp <= 25.0)
    {
        printf("Templado\n");
    }
    else
    {
        printf("Caluroso\n");
    }
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Retornar un `enum` o código entero descriptivo.
-   **[*plus ultra*]:** Escribir tests unitarios con `assert()`.

:::
<!-- {exercise} -->

:::{solution} ej-ref-contaminada-io
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

typedef enum
{
    CLIMA_FRIO,
    CLIMA_TEMPLADO,
    CLIMA_CALUROSO
} tipo_clima_t;

tipo_clima_t clasificar_temperatura(double temperatura_celsius)
{
    if (temperatura_celsius < 10.0)
    {
        return CLIMA_FRIO;
    }
    if (temperatura_celsius <= 25.0)
    {
        return CLIMA_TEMPLADO;
    }
    return CLIMA_CALUROSO;
}

void test_clasificar_clima(void)
{
    assert(clasificar_temperatura(5.0) == CLIMA_FRIO);
    assert(clasificar_temperatura(18.0) == CLIMA_TEMPLADO);
    assert(clasificar_temperatura(30.0) == CLIMA_CALUROSO);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-contaminada-io -->

---
