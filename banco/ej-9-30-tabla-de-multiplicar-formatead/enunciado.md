### Ejercicio 9.30 - Tabla de Multiplicar Formateada y Modularizada ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-tabla-multiplicar-modular
Refactorizá la siguiente función que imprime tablas de multiplicar desacoplando
la generación del producto de la salida por pantalla:

```{code-block} c
:linenos:
#include <stdio.h>

void tabla(int n)
{
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Implementar `int calcular_producto(int multiplicando,
    int multiplicador)`.
-   **[*plus ultra*]:** Formatear las columnas en `imprimir_tabla` con ancho
    fijo `%2d x %2d = %4d`.

:::
<!-- {exercise} -->

:::{solution} ej-ref-tabla-multiplicar-modular
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdio.h>

int calcular_producto(int multiplicando, int multiplicador)
{
    return multiplicando * multiplicador;
}

void imprimir_tabla_multiplicar(int numero)
{
    for (int factor = 1; factor <= 10; factor++)
    {
        int resultado = calcular_producto(numero, factor);
        printf("%2d x %2d = %4d\n", numero, factor, resultado);
    }
}

void test_calcular_producto(void)
{
    assert(calcular_producto(7, 8) == 56);
    assert(calcular_producto(0, 5) == 0);
    assert(calcular_producto(-3, 4) == -12);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-tabla-multiplicar-modular -->

---
