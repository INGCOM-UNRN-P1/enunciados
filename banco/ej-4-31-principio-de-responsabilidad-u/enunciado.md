### Ejercicio 4.31 - Principio de Responsabilidad Única (SRP) ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-srp-refactor
La siguiente función realiza tres tareas simultáneas: calcular la suma de un
arreglo, buscar el máximo y contar negativos. Refactorizala en tres funciones
atómicas según la [Regla 0x2005h](../../reglas/2_funciones.md#0x2005h):

``` c
void procesar_todo(const int arr[], int n, int *suma, int *maximo, int *negativos);
```
<!-- c -->

-   **[*plus ultra*]:** Escribir pruebas unitarias independientes para cada
    función resultante.
-   **[*plus ultra*]:** Explicar por qué es más fácil reutilizar y mantener
    funciones con una sola responsabilidad.

:::
<!-- {exercise} -->

:::{solution} ej-test-srp-refactor
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

int calcular_suma(const int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

int encontrar_maximo(const int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int contar_negativos(const int arr[], int n)
{
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cont++;
        }
    }
    return cont;
}

void test_funciones_atomicas(void)
{
    int datos[] = {3, -1, 8, -5, 2};
    assert(calcular_suma(datos, 5) == 7);
    assert(encontrar_maximo(datos, 5) == 8);
    assert(contar_negativos(datos, 5) == 2);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-srp-refactor -->

---
