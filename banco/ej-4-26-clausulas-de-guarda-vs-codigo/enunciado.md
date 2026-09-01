### Ejercicio 4.26 - Cláusulas de Guarda vs Código en Flecha ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-guardas-vs-flecha
Refactorizá la siguiente función anidada aplicando **cláusulas de guarda** según
la [Regla 0x2001h](../../reglas/2_funciones.md#0x2001h):

```{code-block} c
:linenos:
int procesar_pedido(int cantidad, double precio_unitario, bool cliente_vip)
{
    int resultado = -1;
    if (cantidad > 0)
    {
        if (precio_unitario > 0.0)
        {
            if (cliente_vip)
            {
                resultado = (int)(cantidad * precio_unitario * 0.85);
            }
            else
            {
                resultado = (int)(cantidad * precio_unitario);
            }
        }
    }
    return resultado;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Comprobar que la función reduzca la sangría horizontal
    manteniendo exactamente el mismo comportamiento.
-   **[*plus ultra*]:** Escribir pruebas unitarias con `assert()` para cada
    salida prematura.

:::
<!-- {exercise} -->

:::{solution} ej-test-guardas-vs-flecha
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

int procesar_pedido(int cantidad, double precio_unitario, bool cliente_vip)
{
    if (cantidad <= 0 || precio_unitario <= 0.0)
    {
        return -1;
    }
    if (cliente_vip)
    {
        return (int)(cantidad * precio_unitario * 0.85);
    }
    return (int)(cantidad * precio_unitario);
}

void test_pedido_invalido_cantidad(void)
{
    assert(procesar_pedido(0, 10.0, false) == -1);
}

void test_pedido_invalido_precio(void)
{
    assert(procesar_pedido(5, -2.0, false) == -1);
}

void test_pedido_regular(void)
{
    assert(procesar_pedido(10, 10.0, false) == 100);
}

void test_pedido_vip(void)
{
    assert(procesar_pedido(10, 10.0, true) == 85);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-guardas-vs-flecha -->

---
