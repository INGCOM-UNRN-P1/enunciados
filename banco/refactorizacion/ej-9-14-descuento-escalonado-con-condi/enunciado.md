:::{exercise}
:label: ej-ref-descuento-solapado
Analizá el siguiente código con condiciones redundantes y números mágicos:

```{code-block} c
:linenos:
double desc(double m)
{
    if (m > 0 && m < 1000) return m;
    if (m >= 1000 && m < 5000) return m * 0.95;
    if (m >= 5000 && m < 10000) return m * 0.90;
    if (m >= 10000) return m * 0.80;
    return 0;
}

```

-   **[*plus ultra*]:** Refactorizar utilizando cláusulas de guarda ordenadas
    sin comparaciones dobles redundantes.
-   **[*plus ultra*]:** Reemplazar los porcentajes por constantes simbólicas.

:::

:::{solution} ej-ref-descuento-solapado
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

#define UMBRAL_NIVEL_1 1000.0
#define UMBRAL_NIVEL_2 5000.0
#define UMBRAL_NIVEL_3 10000.0

#define FACTOR_DESCUENTO_1 0.95
#define FACTOR_DESCUENTO_2 0.90
#define FACTOR_DESCUENTO_3 0.80

double aplicar_descuento_escalonado(double monto_compra)
{
    if (monto_compra <= 0.0)
    {
        return 0.0;
    }
    if (monto_compra >= UMBRAL_NIVEL_3)
    {
        return monto_compra * FACTOR_DESCUENTO_3;
    }
    if (monto_compra >= UMBRAL_NIVEL_2)
    {
        return monto_compra * FACTOR_DESCUENTO_2;
    }
    if (monto_compra >= UMBRAL_NIVEL_1)
    {
        return monto_compra * FACTOR_DESCUENTO_1;
    }
    return monto_compra;
}

void test_descuentos(void)
{
    assert(aplicar_descuento_escalonado(500.0) == 500.0);
    assert(aplicar_descuento_escalonado(2000.0) == 1900.0);
    assert(aplicar_descuento_escalonado(6000.0) == 5400.0);
    assert(aplicar_descuento_escalonado(12000.0) == 9600.0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación desc
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double desc(double m);

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
