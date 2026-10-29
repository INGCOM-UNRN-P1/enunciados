### Ejercicio 4.5 - Particiones de Equivalencia ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-particiones-equivalencia
Dada la siguiente especificación de la función `clasificar_edad`:
- Entrada: `edad` (entero).
- Retorno:
  - `1`: Menor de edad (`edad < 18`)
  - `2`: Adulto (`18 <= edad <= 64`)
  - `3`: Adulto mayor (`edad >= 65`)
  - `-1`: Edad inválida (`edad < 0` o `edad > 130`)

Diseñá el conjunto mínimo de valores de prueba para cubrir todas las
**particiones de equivalencia** válidas e inválidas.

-   **[*plus ultra*]:** Implementar la función `int clasificar_edad(int edad)` y
    su suite de tests correspondiente.
-   **[*plus ultra*]:** Documentar la función con etiquetas de contrato (`@pre`,
    `@returns`).

:::
<!-- {exercise} -->

:::{solution} ej-test-particiones-equivalencia
:class: dropdown
Las particiones de equivalencia mínimas son:
1. **Inválida negativa:** `edad = -5` $\rightarrow$ Esperado: `-1`
2. **Menor de edad:** `edad = 10` $\rightarrow$ Esperado: `1`
3. **Adulto:** `edad = 30` $\rightarrow$ Esperado: `2`
4. **Adulto mayor:** `edad = 70` $\rightarrow$ Esperado: `3`
5. **Inválida excesiva:** `edad = 150` $\rightarrow$ Esperado: `-1`

```{code-block} c
:linenos:
#include <assert.h>

int clasificar_edad(int edad)
{
    if (edad < 0 || edad > 130)
    {
        return -1;
    }
    if (edad < 18)
    {
        return 1;
    }
    if (edad <= 64)
    {
        return 2;
    }
    return 3;
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-particiones-equivalencia -->

---
