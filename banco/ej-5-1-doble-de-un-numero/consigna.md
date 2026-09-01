# Doble de un número

### Ejercicio 5.1 - Doble de un número ⭐⭐☆☆☆

:::{exercise}
:label: ej-funcion-doble
Escribí una función que reciba un número entero y devuelva su doble:

- `int doble(int n);`

Probala desde `main()` con distintos valores y aserciones.

-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen (`@param`, `@return`).
-   **[*plus ultra*]:** Escribir una función de prueba con assert() que verifique casos positivos, negativos y cero.

:::
<!-- {exercise} -->

:::{solution} ej-funcion-doble
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int doble(int n)
{
    return 2 * n;
}
int main(void)
{
    printf("Doble de 5: %d\n", doble(5));
    printf("Doble de 12: %d\n", doble(12));
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} ej-funcion-doble -->
(ejercicio_5_2)=
