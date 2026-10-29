:::{exercise}
:label: ej-ref-tarifa-taxi
Analizá qué hace la variable `t` en el siguiente fragmento y refactorizá el
cálculo declarando variables de propósito único y constantes claras:

```{code-block} c
:linenos:
double calc(double k, int n)
{
    double t = 150.0; // Bajada de bandera
    if (k > 0) t += k * 80.0;
    if (n == 1) t = t * 1.20; // Recargo nocturno
    return t;
}

```

-   **[*plus ultra*]:** Validar que la distancia `k` no sea negativa.
-   **[*plus ultra*]:** Documentar el cálculo con Doxygen.

:::

:::{solution} ej-ref-tarifa-taxi
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

#define BAJADA_DE_BANDERA 150.0
#define COSTO_POR_KILOMETRO 80.0
#define FACTOR_RECARGO_NOCTURNO 1.20

double calcular_tarifa_taxi(double kilometros, bool es_tarifa_nocturna)
{
    if (kilometros < 0.0)
    {
        return -1.0;
    }
    double costo_distancia = kilometros * COSTO_POR_KILOMETRO;
    double subtotal = BAJADA_DE_BANDERA + costo_distancia;

    if (es_tarifa_nocturna)
    {
        return subtotal * FACTOR_RECARGO_NOCTURNO;
    }
    return subtotal;
}

void test_tarifa_taxi(void)
{
    assert(calcular_tarifa_taxi(10.0, false) == 950.0);
    assert(calcular_tarifa_taxi(10.0, true) == 1140.0);
    assert(calcular_tarifa_taxi(-5.0, false) == -1.0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calc
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double calc(double k, int n);

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
