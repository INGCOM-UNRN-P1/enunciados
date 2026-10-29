:::{exercise}
:label: ej-test-temperatura-desacoplada
Implementá las siguientes funciones puras de conversión sin usar variables
globales ni llamadas a `printf`:
- `double celsius_a_fahrenheit(double c)`
- `double fahrenheit_a_celsius(double f)`
- `double celsius_a_kelvin(double c)`

Escribí una función de prueba para cada conversión verificando los puntos fijos
conocidos ($0^\circ\text{C} = 32^\circ\text{F}$, $100^\circ\text{C} =
212^\circ\text{F}$, $0^\circ\text{C} = 273.15\text{ K}$).

-   **[*plus ultra*]:** Validar que las temperaturas no estén por debajo del
    cero absoluto ($-273.15^\circ\text{C}$).
-   **[*plus ultra*]:** Usar comparación con tolerancia `son_cercanos`.

:::

:::{solution} ej-test-temperatura-desacoplada
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>
#include <stdbool.h>

bool son_cercanos(double a, double b, double eps)
{
    return fabs(a - b) < eps;
}

double celsius_a_fahrenheit(double c)
{
    return (c * 9.0 / 5.0) + 32.0;
}

double fahrenheit_a_celsius(double f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

double celsius_a_kelvin(double c)
{
    return c + 273.15;
}

void test_celsius_a_fahrenheit_cero(void)
{
    assert(son_cercanos(celsius_a_fahrenheit(0.0), 32.0, 1e-6));
}

void test_celsius_a_fahrenheit_ebullicion(void)
{
    assert(son_cercanos(celsius_a_fahrenheit(100.0), 212.0, 1e-6));
}

void test_celsius_a_kelvin_cero(void)
{
    assert(son_cercanos(celsius_a_kelvin(0.0), 273.15, 1e-6));
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación son_cercanos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool son_cercanos(double a, double b, double eps);

/*
 * Operación celsius_a_fahrenheit
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double celsius_a_fahrenheit(double c);

/*
 * Operación fahrenheit_a_celsius
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double fahrenheit_a_celsius(double f);

/*
 * Operación celsius_a_kelvin
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double celsius_a_kelvin(double c);

/*
 * Operación test_celsius_a_fahrenheit_cero
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_celsius_a_fahrenheit_cero(void);

/*
 * Operación test_celsius_a_fahrenheit_ebullicion
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_celsius_a_fahrenheit_ebullicion(void);

/*
 * Operación test_celsius_a_kelvin_cero
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_celsius_a_kelvin_cero(void);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
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
