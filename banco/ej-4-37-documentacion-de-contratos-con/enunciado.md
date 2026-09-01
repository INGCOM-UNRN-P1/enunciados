### Ejercicio 4.37 - Documentación de Contratos con Doxygen ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-contratos-doxygen
Escribí el bloque de documentación estructurada con etiquetas Doxygen (`@brief`,
`@param`, `@pre`, `@returns`, `@post`) para la función
`calcular_potencia_entera`:

```{code-block} c
:linenos:
/**
 * @brief ...
 * @param base ...
 * @param exponente ...
 * @param ok ...
 * @pre ...
 * @returns ...
 * @post ...
 */
int calcular_potencia_entera(int base, int exponente, bool *ok);

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Implementar la función validando que `exponente >= 0`.
-   **[*plus ultra*]:** Escribir tests unitarios que verifiquen las
    postcondiciones.

:::
<!-- {exercise} -->

:::{solution} ej-test-contratos-doxygen
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

/**
 * @brief Calcula la potencia entera de una base elevada a un exponente no negativo.
 *
 * @param base Base entera.
 * @param exponente Exponente entero.
 * @param ok Puntero a booleano de estado de éxito.
 *
 * @pre `exponente >= 0`
 * @pre `ok != NULL`
 *
 * @returns El resultado de base^exponente si ok es true, o 0 en caso de error.
 *
 * @post Si exponente == 0, el retorno es 1 y *ok == true.
 */
int calcular_potencia_entera(int base, int exponente, bool *ok)
{
    if (ok == NULL || exponente < 0)
    {
        if (ok != NULL)
        {
            *ok = false;
        }
        return 0;
    }
    *ok = true;
    int resultado = 1;
    for (int i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    return resultado;
}

void test_potencia_contrato(void)
{
    bool ok = false;
    assert(calcular_potencia_entera(2, 3, &ok) == 8 && ok);
    assert(calcular_potencia_entera(5, 0, &ok) == 1 && ok);
    calcular_potencia_entera(2, -1, &ok);
    assert(ok == false);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-contratos-doxygen -->

---
