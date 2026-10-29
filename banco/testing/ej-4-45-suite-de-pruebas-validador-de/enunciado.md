:::{exercise}
:label: ej-test-suite-fechas
Implementá una función pura `bool es_fecha_valida(int dia, int mes, int anio)` y
construí una suite completa de pruebas unitarias que cubra:
- Días válidos para meses de 31 días.
- Días válidos para meses de 30 días.
- Casos válidos e inválidos de febrero en año bisiesto (29/02/2024 vs
  29/02/2023).
- Días negativos o mayores a 31.
- Meses fuera del rango 1 a 12.
- Años menores o iguales a cero.

-   **[*plus ultra*]:** Modularizar las pruebas en funciones separadas por cada
    categoría.
-   **[*plus ultra*]:** Crear la función `void correr_pruebas_fechas(void)` que
    las invoque a todas.

:::

:::{solution} ej-test-suite-fechas
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool es_bisiesto_aux(int anio)
{
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

bool es_fecha_valida(int dia, int mes, int anio)
{
    if (anio <= 0 || mes < 1 || mes > 12 || dia < 1)
    {
        return false;
    }
    int dias_max = 31;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias_max = 30;
    }
    else if (mes == 2)
    {
        dias_max = es_bisiesto_aux(anio) ? 29 : 28;
    }
    return dia <= dias_max;
}

void test_fecha_31_dias(void)
{
    assert(es_fecha_valida(31, 1, 2024) == true);
    assert(es_fecha_valida(32, 1, 2024) == false);
}

void test_fecha_30_dias(void)
{
    assert(es_fecha_valida(30, 4, 2024) == true);
    assert(es_fecha_valida(31, 4, 2024) == false);
}

void test_febrero_bisiesto(void)
{
    assert(es_fecha_valida(29, 2, 2024) == true);
    assert(es_fecha_valida(29, 2, 2023) == false);
}

void test_fecha_mes_invalido(void)
{
    assert(es_fecha_valida(15, 13, 2024) == false);
    assert(es_fecha_valida(15, 0, 2024) == false);
}

void correr_pruebas_fechas(void)
{
    test_fecha_31_dias();
    test_fecha_30_dias();
    test_febrero_bisiesto();
    test_fecha_mes_invalido();
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación es_bisiesto_aux
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_bisiesto_aux(int anio);

/*
 * Operación es_fecha_valida
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_fecha_valida(int dia, int mes, int anio);

/*
 * Operación test_fecha_31_dias
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_fecha_31_dias(void);

/*
 * Operación test_fecha_30_dias
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_fecha_30_dias(void);

/*
 * Operación test_febrero_bisiesto
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_febrero_bisiesto(void);

/*
 * Operación test_fecha_mes_invalido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_fecha_mes_invalido(void);

/*
 * Operación correr_pruebas_fechas
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void correr_pruebas_fechas(void);

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
