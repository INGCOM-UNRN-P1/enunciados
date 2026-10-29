### Ejercicio 4.51 - Testeo de Funciones con Códigos de Error ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-codigos-error
Diseñá una función pura para calcular la velocidad promedio $v = d / t$:
`int calcular_velocidad(double distancia, double tiempo, double *velocidad)`

Códigos de retorno:
- `0`: Éxito.
- `1`: Distancia inválida (`distancia < 0`).
- `2`: Tiempo inválido (`tiempo <= 0`).
- `3`: Puntero `velocidad` nulo (`NULL`).

Escribí pruebas unitarias para cada uno de los 4 códigos posibles.

-   **[*plus ultra*]:** Asegurar que ante código de error, `*velocidad` no sea
    modificada.

:::
<!-- {exercise} -->

:::{solution} ej-test-codigos-error
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stddef.h>

int calcular_velocidad(double distancia, double tiempo, double *velocidad)
{
    if (velocidad == NULL)
    {
        return 3;
    }
    if (distancia < 0.0)
    {
        return 1;
    }
    if (tiempo <= 0.0)
    {
        return 2;
    }
    *velocidad = distancia / tiempo;
    return 0;
}

void test_velocidad_exito(void)
{
    double v = 0.0;
    int codigo = calcular_velocidad(100.0, 2.0, &v);
    assert(codigo == 0);
    assert(v == 50.0);
}

void test_velocidad_distancia_invalida(void)
{
    double v = -99.0;
    int codigo = calcular_velocidad(-10.0, 2.0, &v);
    assert(codigo == 1);
    assert(v == -99.0);
}

void test_velocidad_tiempo_invalido(void)
{
    double v = -99.0;
    int codigo = calcular_velocidad(100.0, 0.0, &v);
    assert(codigo == 2);
    assert(v == -99.0);
}

void test_velocidad_puntero_nulo(void)
{
    int codigo = calcular_velocidad(100.0, 2.0, NULL);
    assert(codigo == 3);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-codigos-error -->

---
