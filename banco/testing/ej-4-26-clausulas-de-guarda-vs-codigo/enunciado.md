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

-   **[*plus ultra*]:** Comprobar que la función reduzca la sangría horizontal
    manteniendo exactamente el mismo comportamiento.
-   **[*plus ultra*]:** Escribir pruebas unitarias con `assert()` para cada
    salida prematura.

:::

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

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación procesar_pedido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int procesar_pedido(int cantidad, double precio_unitario, bool cliente_vip);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
