:::{exercise}
:label: ej-test-suite-palindromo
Implementá `bool es_numero_capicua(int n)` mediante funciones auxiliares puras
(`invertir_numero`) y construí su suite de pruebas:
- Números de 1 solo dígito (siempre son capicúas: `0, 1, 7`).
- Números pares capicúas (`1221`, `44`).
- Números impares capicúas (`12321`, `505`).
- Números no capicúas (`123`, `100`).
- Números negativos (por convención, retornan `false`).

-   **[*plus ultra*]:** Validar que no se produzca desbordamiento entero al
    invertir.

:::

:::{solution} ej-test-suite-palindromo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

int invertir_entero(int n)
{
    int invertido = 0;
    while (n > 0)
    {
        invertido = (invertido * 10) + (n % 10);
        n /= 10;
    }
    return invertido;
}

bool es_numero_capicua(int n)
{
    if (n < 0)
    {
        return false;
    }
    if (n < 10)
    {
        return true;
    }
    return n == invertir_entero(n);
}

void test_capicua_un_digito(void)
{
    assert(es_numero_capicua(0) == true);
    assert(es_numero_capicua(7) == true);
}

void test_capicua_multiples_digitos(void)
{
    assert(es_numero_capicua(1221) == true);
    assert(es_numero_capicua(12321) == true);
    assert(es_numero_capicua(123) == false);
    assert(es_numero_capicua(-121) == false);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación invertir_entero
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int invertir_entero(int n);

/*
 * Operación es_numero_capicua
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_numero_capicua(int n);

/*
 * Operación test_capicua_un_digito
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_capicua_un_digito(void);

/*
 * Operación test_capicua_multiples_digitos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_capicua_multiples_digitos(void);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
```
:::
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
