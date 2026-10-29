:::{exercise}
:label: ej-test-invariantes-lazo
En el siguiente algoritmo para calcular la división entera por restas sucesivas,
agregá una aserción al final que verifique la invariante matemática fundamental:
$\text{dividendo} = \text{divisor} \times \text{cociente} + \text{resto}$.

```{code-block} c
:linenos:
void division_lenta(int dividendo, int divisor, int *cociente, int *resto)
{
    assert(divisor > 0);
    assert(dividendo >= 0);

    int c = 0;
    int r = dividendo;
    while (r >= divisor)
    {
        r -= divisor;
        c++;
    }
    *cociente = c;
    *resto = r;

    // Aserción de invariante:
    assert(dividendo == (divisor * (*cociente)) + (*resto));
}

```

-   **[*plus ultra*]:** Diseñar tests unitarios para $10 \div 3$, $20 \div 5$ y
    $3 \div 7$.
-   **[*plus ultra*]:** Verificar que el resto siempre cumpla $0 \le r <
    \text{divisor}$.

:::

:::{solution} ej-test-invariantes-lazo
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

void test_division_con_invariante(void)
{
    int c = 0;
    int r = 0;

    division_lenta(10, 3, &c, &r);
    assert(c == 3 && r == 1);

    division_lenta(20, 5, &c, &r);
    assert(c == 4 && r == 0);

    division_lenta(3, 7, &c, &r);
    assert(c == 0 && r == 3);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación division_lenta
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void division_lenta(int dividendo, int divisor, int *cociente, int *resto);

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
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
