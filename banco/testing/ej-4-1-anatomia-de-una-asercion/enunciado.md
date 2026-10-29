:::{exercise}
:label: ej-test-anatomia
Analizá el siguiente código y respondé:
1. ¿Qué biblioteca estándar se debe incluir para utilizar la macro `assert`?
2. ¿Qué ocurre exactamente en tiempo de ejecución si la condición evaluada
   resulta verdadera (`true`)?
3. ¿Qué ocurre si la condición resulta falsa (`false`)?

```{code-block} c
:linenos:
#include <assert.h>

int cuadrado(int n)
{
    return n * n;
}

int main(void)
{
    assert(cuadrado(4) == 16);
    assert(cuadrado(-3) == 9);
    return 0;
}

```

-   **[*plus ultra*]:** Explicar qué información diagnóstica imprime `assert` en
    la consola al fallar (archivo, línea, expresión y función).
-   **[*plus ultra*]:** Investigar qué efecto produce la macro `#define NDEBUG`
    colocada antes de `#include <assert.h>`.

:::

:::{solution} ej-test-anatomia
:class: dropdown
1. Se incluye `<assert.h>`.
2. Si la condición es `true`, el programa continúa su ejecución normal sin
   ninguna interrupción ni mensaje.
3. Si la condición es `false`, la macro `assert` aborta inmediatamente el
   programa con `SIGABRT` e imprime en `stderr` el nombre del archivo, el número
   de línea, la función y el texto exacto de la condición que falló.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación cuadrado
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int cuadrado(int n);

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
