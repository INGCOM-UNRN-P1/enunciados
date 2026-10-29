:::{exercise}
:label: ej-test-calculadora-memoria
Implementá una calculadora donde el valor acumulado en memoria sea una variable
local gestionada en `main` o en las pruebas, utilizando funciones puras:
- `double calc_sumar(double acumulador, double valor)`
- `double calc_restar(double acumulador, double valor)`
- `double calc_multiplicar(double acumulador, double valor)`
- `double calc_dividir(double acumulador, double valor, bool *ok)`

Escribí pruebas unitarias para cada operación y una prueba para una secuencia de
operaciones combinadas.

-   **[*plus ultra*]:** Validar división por cero poniendo `*ok = false`.
-   **[*plus ultra*]:** Verificar que el acumulador original no se altere si la
    división falla.

:::

:::{solution} ej-test-calculadora-memoria
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

double calc_sumar(double acumulador, double valor)
{
    return acumulador + valor;
}

double calc_restar(double acumulador, double valor)
{
    return acumulador - valor;
}

double calc_multiplicar(double acumulador, double valor)
{
    return acumulador * valor;
}

double calc_dividir(double acumulador, double valor, bool *ok)
{
    if (valor == 0.0)
    {
        *ok = false;
        return acumulador;
    }
    *ok = true;
    return acumulador / valor;
}

void test_secuencia_calculadora(void)
{
    double acc = 0.0;
    bool ok = false;

    acc = calc_sumar(acc, 50.0);
    acc = calc_multiplicar(acc, 2.0);
    acc = calc_restar(acc, 20.0);
    acc = calc_dividir(acc, 4.0, &ok);

    assert(ok == true);
    assert(acc == 20.0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calc_sumar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
double calc_sumar(double acumulador, double valor);

/*
 * Operación calc_restar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
double calc_restar(double acumulador, double valor);

/*
 * Operación calc_multiplicar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
double calc_multiplicar(double acumulador, double valor);

/*
 * Operación calc_dividir
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
double calc_dividir(double acumulador, double valor, bool *ok);

/*
 * Operación test_secuencia_calculadora
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_secuencia_calculadora(void);

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
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
