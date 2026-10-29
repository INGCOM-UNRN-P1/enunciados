:::{exercise}
:label: ej-test-comparacion-float
Analizá por qué la siguiente prueba puede fallar inesperadamente en C y escribí
una función auxiliar `son_cercanos(double a, double b, double epsilon)` para
solucionarlo:

``` c
double tercio = 1.0 / 3.0;
assert(tercio * 3.0 == 1.0); // ¡Peligro de precisión!
```

-   **[*plus ultra*]:** Implementar `bool son_cercanos(double a, double b,
    double eps)` usando `fabs()` de `<math.h>`.
-   **[*plus ultra*]:** Escribir un test que verifique `0.1 + 0.2` frente a
    `0.3` con tolerancia $10^{-6}$.

:::

:::{solution} ej-test-comparacion-float
:class: dropdown
En aritmética binaria de punto flotante (IEEE 754), números como `0.1` o
`1.0/3.0` no tienen representación exacta finita, lo que produce pequeñas
discrepancias en los últimos decimales.

```{code-block} c
:linenos:
#include <assert.h>
#include <math.h>
#include <stdbool.h>

bool son_cercanos(double a, double b, double epsilon)
{
    return fabs(a - b) < epsilon;
}

void test_suma_decimales(void)
{
    double resultado = 0.1 + 0.2;
    double esperado = 0.3;
    assert(son_cercanos(resultado, esperado, 1e-9));
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación son_cercanos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool son_cercanos(double a, double b, double epsilon);

/*
 * Operación test_suma_decimales
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_suma_decimales(void);

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
