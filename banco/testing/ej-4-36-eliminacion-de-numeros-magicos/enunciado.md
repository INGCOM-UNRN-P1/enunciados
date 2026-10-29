:::{exercise}
:label: ej-test-numeros-magicos
Refactorizá la siguiente función reemplazando todos los **números mágicos** por
constantes simbólicas (`#define` o `const`) descriptivas según la [Regla
0x0004h](../../reglas/0_sintaxis.md#0x0004h):

```{code-block} c
:linenos:
double calcular_costo_envio(double peso)
{
    if (peso <= 5.0)
    {
        return 500.0;
    }
    if (peso <= 20.0)
    {
        return 500.0 + (peso - 5.0) * 80.0;
    }
    return 1700.0 + (peso - 20.0) * 120.0;
}

```

-   **[*plus ultra*]:** Escribir tests unitarios para los puntos de quiebre (5.0
    kg y 20.0 kg).
-   **[*plus ultra*]:** Explicar por qué los números mágicos dificultan el
    mantenimiento del código.

:::

:::{solution} ej-test-numeros-magicos
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

#define PESO_LIMITE_LIVIANO 5.0
#define PESO_LIMITE_MEDIO 20.0
#define TARIFA_BASE_LIVIANO 500.0
#define TARIFA_BASE_MEDIO 1700.0
#define COSTO_KG_MEDIO 80.0
#define COSTO_KG_PESADO 120.0

double calcular_costo_envio(double peso)
{
    if (peso <= 0.0)
    {
        return -1.0;
    }
    if (peso <= PESO_LIMITE_LIVIANO)
    {
        return TARIFA_BASE_LIVIANO;
    }
    if (peso <= PESO_LIMITE_MEDIO)
    {
        return TARIFA_BASE_LIVIANO + (peso - PESO_LIMITE_LIVIANO) * COSTO_KG_MEDIO;
    }
    return TARIFA_BASE_MEDIO + (peso - PESO_LIMITE_MEDIO) * COSTO_KG_PESADO;
}

void test_costo_envio_limites(void)
{
    assert(calcular_costo_envio(5.0) == 500.0);
    assert(calcular_costo_envio(10.0) == 900.0);
    assert(calcular_costo_envio(20.0) == 1700.0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_costo_envio
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double calcular_costo_envio(double peso);

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

:::{hint} Consideraciones Didácticas
- Reemplazá literales numéricos 'mágicos' por constantes descriptivas con #define o enum.
- Agrupá constantes relacionadas en enumeraciones para mejorar la legibilidad y seguridad de tipos.
- Centralizá los parámetros de configuración en la cabecera del módulo para facilitar su mantenimiento.
:::
