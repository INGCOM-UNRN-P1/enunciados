:::{exercise}
:label: ej-test-bisiesto-exhaustivo
Implementá `bool es_bisiesto(int anio)` y diseñá una suite de pruebas que
verifique las cuatro reglas del calendario gregoriano:
1. Años múltiplos de 4 no múltiplos de 100 (ej. 2024 $\rightarrow$ `true`).
2. Años no múltiplos de 4 (ej. 2023 $\rightarrow$ `false`).
3. Años múltiplos de 100 pero no de 400 (ej. 1900 $\rightarrow$ `false`).
4. Años múltiplos de 400 (ej. 2000 $\rightarrow$ `true`).

-   **[*plus ultra*]:** Validar que años $\le 0$ retornen `false`.
-   **[*plus ultra*]:** Escribir una función de test por cada regla evaluada.

:::

:::{solution} ej-test-bisiesto-exhaustivo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool es_bisiesto(int anio)
{
    if (anio <= 0)
    {
        return false;
    }
    return ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
}

void test_bisiesto_multiplo_4(void)
{
    assert(es_bisiesto(2024) == true);
}

void test_no_bisiesto_comun(void)
{
    assert(es_bisiesto(2023) == false);
}

void test_no_bisiesto_fin_de_siglo(void)
{
    assert(es_bisiesto(1900) == false);
}

void test_bisiesto_cuatrisecular(void)
{
    assert(es_bisiesto(2000) == true);
}

void test_bisiesto_invalido(void)
{
    assert(es_bisiesto(-400) == false);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación es_bisiesto
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_bisiesto(int anio);

/*
 * Operación test_bisiesto_multiplo_4
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_bisiesto_multiplo_4(void);

/*
 * Operación test_no_bisiesto_comun
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_no_bisiesto_comun(void);

/*
 * Operación test_no_bisiesto_fin_de_siglo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_no_bisiesto_fin_de_siglo(void);

/*
 * Operación test_bisiesto_cuatrisecular
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_bisiesto_cuatrisecular(void);

/*
 * Operación test_bisiesto_invalido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_bisiesto_invalido(void);

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
