:::{exercise}
:label: ej-test-bandera-global
Descubrí el bug en este programa donde dos funciones manipulan la misma variable
global `hay_error`:

```{code-block} c
:linenos:
#include <stdbool.h>
#include <stdio.h>

bool hay_error = false;

void validar_rango(int x)
{
    if (x < 0 || x > 100)
    {
        hay_error = true;
    }
}

void validar_paridad(int x)
{
    if (x % 2 != 0)
    {
        hay_error = true;
    }
    else
    {
        hay_error = false; // ¡Peligro!
    }
}

```

-   **[*plus ultra*]:** ¿Qué ocurre si se llama `validar_rango(-5)` seguido de
    `validar_paridad(4)`?
-   **[*plus ultra*]:** Refactorizar ambas funciones para que retornen un `bool`
    independiente.

:::

:::{solution} ej-test-bandera-global
:class: dropdown
`validar_rango(-5)` detecta el error y pone `hay_error = true`. Pero luego
`validar_paridad(4)` como `4` es par, ejecuta la rama `else` y pone `hay_error =
false`, **borrando el error detectado previamente**.

**Refactorización:**
```{code-block} c
:linenos:
bool es_rango_valido(int x)
{
    return (x >= 0 && x <= 100);
}

bool es_par(int x)
{
    return (x % 2 == 0);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación validar_rango
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void validar_rango(int x);

/*
 * Operación validar_paridad
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void validar_paridad(int x);

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
