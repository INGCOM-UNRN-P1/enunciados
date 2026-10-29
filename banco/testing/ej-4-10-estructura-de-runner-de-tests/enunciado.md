:::{exercise}
:label: ej-test-runner-basico
Implementá un pequeño ejecutor de pruebas en C con retorno de conteos en `main`
para contabilizar pruebas ejecutadas y aprobadas sin usar variables globales.

-   **[*plus ultra*]:** Mostrar un resumen final con el total de tests exitosos.
-   **[*plus ultra*]:** Asegurar que el código de salida del programa sea 0 si
    todos pasan y 1 si alguno falla.

:::

:::{solution} ej-test-runner-basico
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdio.h>

int test_cuadrado_positivo(void)
{
    assert(2 * 2 == 4);
    return 1;
}

int test_cuadrado_cero(void)
{
    assert(0 * 0 == 0);
    return 1;
}

int main(void)
{
    int pasados = 0;
    int totales = 0;

    totales++;
    pasados += test_cuadrado_positivo();

    totales++;
    pasados += test_cuadrado_cero();

    printf("Resultados: %d/%d tests aprobados.\n", pasados, totales);
    return (pasados == totales) ? 0 : 1;
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación test_cuadrado_positivo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int test_cuadrado_positivo(void);

/*
 * Operación test_cuadrado_cero
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int test_cuadrado_cero(void);

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

:::{hint} Consideraciones Didácticas
- Diseñá una macro o función de aserción que contabilice tests aprobados y fallidos sin abortar abruptamente.
- Imprimí un resumen claro con el nombre del test, estado (PASS/FAIL) y total de pruebas ejecutadas.
- Retorná un código de salida no nulo si al menos una prueba falló para integrar con pipelines CI.
:::
