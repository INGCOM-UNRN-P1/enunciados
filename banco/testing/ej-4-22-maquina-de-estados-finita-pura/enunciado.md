:::{exercise}
:label: ej-test-fsm-pura
Modelá un validador de contraseña simple (estados: `0 = INICIO`, `1 =
TIENE_LONGITUD`, `2 = VALIDA`, `-1 = ERROR`) mediante una función pura de
transición:
`int transicion_estado(int estado_actual, char entrada)`

Escribí pruebas unitarias que simulen la secuencia de caracteres `a`, `b`, `1`
para verificar la transición de estados paso a paso sin variables globales.

-   **[*plus ultra*]:** Documentar la tabla de transiciones en un comentario
    formal.
-   **[*plus ultra*]:** Verificar que entradas inválidas conduzcan al estado
    `-1`.

:::

:::{solution} ej-test-fsm-pura
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <ctype.h>

int transicion_estado(int estado_actual, char entrada)
{
    if (estado_actual == 0)
    {
        return isalpha(entrada) ? 1 : -1;
    }
    if (estado_actual == 1)
    {
        return isdigit(entrada) ? 2 : 1;
    }
    if (estado_actual == 2)
    {
        return 2;
    }
    return -1;
}

void test_fsm_camino_exitoso(void)
{
    int estado = 0;
    estado = transicion_estado(estado, a);
    assert(estado == 1);
    estado = transicion_estado(estado, b);
    assert(estado == 1);
    estado = transicion_estado(estado, '9\);
    assert(estado == 2);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Máquina de Estados Finita Pura
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__estados_finita_pura(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
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
