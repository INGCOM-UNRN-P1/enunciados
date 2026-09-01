### Ejercicio 4.10 - Estructura de Runner de Tests sin bibliotecas ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-runner-basico
Implementá un pequeño ejecutor de pruebas en C con retorno de conteos en `main`
para contabilizar pruebas ejecutadas y aprobadas sin usar variables globales.

-   **[*plus ultra*]:** Mostrar un resumen final con el total de tests exitosos.
-   **[*plus ultra*]:** Asegurar que el código de salida del programa sea 0 si
    todos pasan y 1 si alguno falla.

:::
<!-- {exercise} -->

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
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-runner-basico -->

---

## 2. Variables Globales y Efectos Colaterales
