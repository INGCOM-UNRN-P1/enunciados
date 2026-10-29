:::{exercise}
:label: ej-test-calculo-descuento
Diseñá una función pura `double aplicar_descuento(double precio_base, double
porcentaje)` que:
- Si `precio_base < 0` o `porcentaje < 0` o `porcentaje > 100`, retorne `-1.0`.
- De lo contrario, retorne el precio final descontado.

Escribí su suite completa de pruebas unitarias cubriendo casos normales, bordes
e inválidos.

-   **[*plus ultra*]:** Documentar la función con `@param`, `@pre`, `@returns` y
    `@post`.
-   **[*plus ultra*]:** Validar que `aplicar_descuento(100.0, 0.0)` retorne
    `100.0` y `aplicar_descuento(100.0, 100.0)` retorne `0.0`.

:::

:::{solution} ej-test-calculo-descuento
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

double aplicar_descuento(double precio_base, double porcentaje)
{
    if (precio_base < 0.0 || porcentaje < 0.0 || porcentaje > 100.0)
    {
        return -1.0;
    }
    return precio_base * (1.0 - (porcentaje / 100.0));
}

void test_descuento_normal(void)
{
    assert(aplicar_descuento(200.0, 25.0) == 150.0);
}

void test_descuento_cero(void)
{
    assert(aplicar_descuento(100.0, 0.0) == 100.0);
}

void test_descuento_total(void)
{
    assert(aplicar_descuento(100.0, 100.0) == 0.0);
}

void test_descuento_precio_invalido(void)
{
    assert(aplicar_descuento(-50.0, 10.0) == -1.0);
}

void test_descuento_porcentaje_invalido(void)
{
    assert(aplicar_descuento(100.0, 150.0) == -1.0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación aplicar_descuento
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double aplicar_descuento(double precio_base, double porcentaje);

/*
 * Operación test_descuento_normal
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_descuento_normal(void);

/*
 * Operación test_descuento_cero
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_descuento_cero(void);

/*
 * Operación test_descuento_total
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_descuento_total(void);

/*
 * Operación test_descuento_precio_invalido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_descuento_precio_invalido(void);

/*
 * Operación test_descuento_porcentaje_invalido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_descuento_porcentaje_invalido(void);

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
