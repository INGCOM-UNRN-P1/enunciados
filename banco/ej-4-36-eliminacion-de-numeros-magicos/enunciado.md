### Ejercicio 4.36 - Eliminación de Números Mágicos ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-numeros-magicos
Refactorizá la siguiente función reemplazando todos los **números mágicos** por
constantes simbólicas (`#define` o `const`) descriptivas según la [Regla
0x0004h](../../reglas/0_sintaxis.md#0x0004h):

```{code-block} c
:linenos:
double calcular_costo_envio(double peso)
{
    if (peso <= 5.0)
    {
        return 500.0;
    }
    if (peso <= 20.0)
    {
        return 500.0 + (peso - 5.0) * 80.0;
    }
    return 1700.0 + (peso - 20.0) * 120.0;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Escribir tests unitarios para los puntos de quiebre (5.0
    kg y 20.0 kg).
-   **[*plus ultra*]:** Explicar por qué los números mágicos dificultan el
    mantenimiento del código.

:::
<!-- {exercise} -->

:::{solution} ej-test-numeros-magicos
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

#define PESO_LIMITE_LIVIANO 5.0
#define PESO_LIMITE_MEDIO 20.0
#define TARIFA_BASE_LIVIANO 500.0
#define TARIFA_BASE_MEDIO 1700.0
#define COSTO_KG_MEDIO 80.0
#define COSTO_KG_PESADO 120.0

double calcular_costo_envio(double peso)
{
    if (peso <= 0.0)
    {
        return -1.0;
    }
    if (peso <= PESO_LIMITE_LIVIANO)
    {
        return TARIFA_BASE_LIVIANO;
    }
    if (peso <= PESO_LIMITE_MEDIO)
    {
        return TARIFA_BASE_LIVIANO + (peso - PESO_LIMITE_LIVIANO) * COSTO_KG_MEDIO;
    }
    return TARIFA_BASE_MEDIO + (peso - PESO_LIMITE_MEDIO) * COSTO_KG_PESADO;
}

void test_costo_envio_limites(void)
{
    assert(calcular_costo_envio(5.0) == 500.0);
    assert(calcular_costo_envio(10.0) == 900.0);
    assert(calcular_costo_envio(20.0) == 1700.0);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-numeros-magicos -->

---
