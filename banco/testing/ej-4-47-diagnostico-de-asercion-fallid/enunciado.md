:::{exercise}
:label: ej-test-diagnostico-fallo
Al ejecutar una suite de pruebas, la terminal reporta el siguiente mensaje:

```
assertion failed: mcd(0, 5) == 5, file tests.c, line 42, function test_mcd_cero
Aborted (core dumped)
```

Analizá la causa raíz del fallo en la función `mcd(a, b)` y corregila:

``` c
int mcd(int a, int b)
{
    if (b == 0) return a;
    return mcd(b, a % b); // ¿Qué ocurre si a=0 y b=5 en la primera llamada?
}
```

-   **[*plus ultra*]:** Explicar por qué `0 % 5 == 0` y la siguiente llamada es
    `mcd(5, 0)` retornando `5`.
-   **[*plus ultra*]:** Asegurar que la función maneje argumentos negativos
    convirtiéndolos a valor absoluto.

:::

:::{solution} ej-test-diagnostico-fallo
:class: dropdown
Si se pasa `a = 0` y `b = 5`, la primera llamada no entra en `b == 0`. Llama a
`mcd(5, 0 % 5)` que es `mcd(5, 0)`, el cual entra en `b == 0` y retorna `5`.

Si la función original no contempla `a < 0` o `b < 0`, los módulos con signo en
C pueden generar números negativos. La corrección robusta es:

```{code-block} c
:linenos:
#include <assert.h>
#include <stdlib.h>

int mcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación mcd
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int mcd(int a, int b);

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
