:::{exercise}
:label: ej-test-misterio-orden
Analizá el siguiente código. ¿Por qué `test_dos()` pasa exitosamente si se
ejecuta primero, pero falla si se ejecuta después de `test_uno()`?

```{code-block} c
:linenos:
#include <assert.h>

int total_acumulado = 0; // Variable global

void acumular(int valor)
{
    total_acumulado += valor;
}

void test_uno(void)
{
    acumular(5);
    acumular(10);
    assert(total_acumulado == 15);
}

void test_dos(void)
{
    acumular(20);
    assert(total_acumulado == 20); // ¿Por qué falla si corre después de test_uno?
}

int main(void)
{
    test_uno();
    test_dos();
    return 0;
}

```

-   **[*plus ultra*]:** Identificar la violación de la [Regla
    0x2004h](../../reglas/2_funciones.md#0x2004h).
-   **[*plus ultra*]:** Refactorizar `acumular` para que reciba el total actual
    y retorne el nuevo total de forma pura.

:::

:::{solution} ej-test-misterio-orden
:class: dropdown
`total_acumulado` es una variable global mutable. Al terminar `test_uno()`, su
valor queda en `15`. Cuando inicia `test_dos()`, `acumular(20)` suma 20 a 15,
resultando en `35` en lugar de `20`, provocando la caída del `assert`.

**Refactorización a función pura:**
```{code-block} c
:linenos:
int acumular(int total_actual, int valor)
{
    return total_actual + valor;
}

void test_uno(void)
{
    int total = 0;
    total = acumular(total, 5);
    total = acumular(total, 10);
    assert(total == 15);
}

void test_dos(void)
{
    int total = 0;
    total = acumular(total, 20);
    assert(total == 20);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación acumular
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
void acumular(int valor);

/*
 * Operación test_uno
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_uno(void);

/*
 * Operación test_dos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_dos(void);

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
