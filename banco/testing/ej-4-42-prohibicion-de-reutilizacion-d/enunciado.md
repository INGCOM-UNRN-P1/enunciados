### Ejercicio 4.42 - Prohibición de Reutilización de Variables ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-reutilizacion-variables
Analizá qué problema de legibilidad y mantenimiento tiene el siguiente código
donde la variable `aux` se usa para tres propósitos completamente distintos:

```{code-block} c
:linenos:
int calcular_estadisticas_ventas(int ventas[], int n)
{
    int aux = 0;
    // Uso 1: acumular suma
    for (int i = 0; i < n; i++)
    {
        aux += ventas[i];
    }
    int promedio = aux / n;

    // Uso 2: buscar maximo
    aux = ventas[0];
    for (int i = 1; i < n; i++)
    {
        if (ventas[i] > aux)
        {
            aux = ventas[i];
        }
    }
    return aux;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Refactorizar declarando variables con nombres de
    propósito único (`suma`, `maximo`).
-   **[*plus ultra*]:** Modularizar en funciones independientes.

:::
<!-- {exercise} -->

:::{solution} ej-test-reutilizacion-variables
:class: dropdown
Reutilizar la misma variable para propósitos disímiles dificulta la lectura,
impide agregar aserciones claras sobre estados intermedios y propaga errores si
un bloque asume que la variable conserva su valor anterior.

:::
<!-- {solution} ej-test-reutilizacion-variables -->

---
