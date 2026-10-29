:::{exercise}
:label: ej-ref-fact-desborde
Refactorizá la siguiente función de factorial:

``` c
long f(int n){if(n<0||n>20)return -1;long r=1;for(int i=2;i<=n;i++)r*=i;return r;}
```

-   **[*plus ultra*]:** Reemplazar el número mágico `20` por una constante
    descriptiva `#define MAX_FACTORIAL_LONG 20`.
-   **[*plus ultra*]:** Escribir tests unitarios con `assert()`.

:::

:::{solution} ej-ref-fact-desborde
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

#define MAX_N_FACTORIAL_64BITS 20

long long calcular_factorial(int n)
{
    if (n < 0 || n > MAX_N_FACTORIAL_64BITS)
    {
        return -1;
    }
    long long resultado = 1;
    for (int factor = 2; factor <= n; factor++)
    {
        resultado *= factor;
    }
    return resultado;
}

void test_factorial(void)
{
    assert(calcular_factorial(0) == 1);
    assert(calcular_factorial(5) == 120);
    assert(calcular_factorial(21) == -1); // Error de desbordamiento
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_factorial
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long calcular_factorial(int n);

/*
 * Operación test_factorial
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_factorial(void);

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
