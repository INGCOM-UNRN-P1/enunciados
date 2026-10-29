:::{exercise}
:label: ej-test-estilo-allman
Identificá las violaciones de la [Regla
0x000Bh](../../reglas/0_sintaxis.md#0x000bh) (Estilo Allman) en el siguiente
código y reescribilo con las llaves correctamente alineadas en su propia línea:

```{code-block} c
:linenos:
// Código mal formateado:
int valor_absoluto(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}

```

-   **[*plus ultra*]:** Formatear con 4 espacios de indentación.
-   **[*plus ultra*]:** Escribir una prueba unitaria para `valor_absoluto(-12)`
    y `valor_absoluto(0)`.

:::

:::{solution} ej-test-estilo-allman
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

int valor_absoluto(int n)
{
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

void test_valor_absoluto(void)
{
    assert(valor_absoluto(-12) == 12);
    assert(valor_absoluto(0) == 0);
    assert(valor_absoluto(15) == 15);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación valor_absoluto
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int valor_absoluto(int n);

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
