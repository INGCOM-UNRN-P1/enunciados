:::{exercise}
:label: ej-ref-gauss-inadecuado
Refactorizá la siguiente fórmula de Gauss:

``` c
int s(int n){return n*(n+1)/2;}
```

-   **[*plus ultra*]:** Validar que $n \ge 0$.
-   **[*plus ultra*]:** Usar el tipo `long long` para evitar desbordamientos
    enteros en valores de $n > 65535$.

:::

:::{solution} ej-ref-gauss-inadecuado
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

long long calcular_sumatoria_gauss(int limite_superior)
{
    if (limite_superior < 0)
    {
        return -1;
    }
    long long n = limite_superior;
    return (n * (n + 1)) / 2;
}

void test_sumatoria_gauss(void)
{
    assert(calcular_sumatoria_gauss(0) == 0);
    assert(calcular_sumatoria_gauss(10) == 55);
    assert(calcular_sumatoria_gauss(100) == 5050);
    assert(calcular_sumatoria_gauss(-5) == -1);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_sumatoria_gauss
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long calcular_sumatoria_gauss(int limite_superior);

/*
 * Operación test_sumatoria_gauss
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_sumatoria_gauss(void);

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
