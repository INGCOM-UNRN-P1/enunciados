:::{exercise}
:label: ej-test-suite-segundos-tiempo
Implementá `bool segundos_a_tiempo(int total_segundos, int *horas, int *minutos,
int *segundos)` y diseñá su suite de pruebas con `assert()`:
- `total_segundos = 0` $\rightarrow$ `0h 0m 0s`.
- `total_segundos = 59` $\rightarrow$ `0h 0m 59s`.
- `total_segundos = 60` $\rightarrow$ `0h 1m 0s`.
- `total_segundos = 3661` $\rightarrow$ `1h 1m 1s`.
- `total_segundos = 86399` $\rightarrow$ `23h 59m 59s`.
- `total_segundos = -5` $\rightarrow$ `false`.

-   **[*plus ultra*]:** Verificar que la función retorne `false` si cualquier
    puntero recibido es `NULL`.

:::

:::{solution} ej-test-suite-segundos-tiempo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>
#include <stddef.h>

bool segundos_a_tiempo(int total_segundos, int *horas, int *minutos, int *segundos)
{
    if (total_segundos < 0 || !horas || !minutos || !segundos)
    {
        return false;
    }
    *horas = total_segundos / 3600;
    int resto = total_segundos % 3600;
    *minutos = resto / 60;
    *segundos = resto % 60;
    return true;
}

void test_segundos_a_tiempo_normal(void)
{
    int h = 0, m = 0, s = 0;
    bool ok = segundos_a_tiempo(3661, &h, &m, &s);
    assert(ok == true);
    assert(h == 1 && m == 1 && s == 1);
}

void test_segundos_a_tiempo_cero(void)
{
    int h = 0, m = 0, s = 0;
    bool ok = segundos_a_tiempo(0, &h, &m, &s);
    assert(ok == true);
    assert(h == 0 && m == 0 && s == 0);
}

void test_segundos_a_tiempo_invalido(void)
{
    int h = 0, m = 0, s = 0;
    assert(segundos_a_tiempo(-10, &h, &m, &s) == false);
    assert(segundos_a_tiempo(100, NULL, &m, &s) == false);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación segundos_a_tiempo
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool segundos_a_tiempo(int total_segundos, int *horas, int *minutos, int *segundos);

/*
 * Operación test_segundos_a_tiempo_normal
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_segundos_a_tiempo_normal(void);

/*
 * Operación test_segundos_a_tiempo_cero
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_segundos_a_tiempo_cero(void);

/*
 * Operación test_segundos_a_tiempo_invalido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_segundos_a_tiempo_invalido(void);

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
