# Paridad de un número

### Ejercicio 5.3 - Paridad de un número ⭐⭐☆☆☆

:::{exercise}
:label: ej-funcion-par-impar
Definí una función que indique si un número es par o impar. Mostrá el resultado
llamando a la función desde `main()`.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Hacer que la función retorne un bool en lugar de imprimir directamente en consola.
-   **[*plus ultra*]:** Escribir pruebas unitarias que verifiquen paridad en números pares, impares y negativos.

:::
<!-- {exercise} -->

:::{solution} ej-funcion-par-impar
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
void par_impar(int n)
{
    if (n % 2 == 0)
    {
        printf("%d es par\n", n);
    }
    else
    {
        printf("%d es impar\n", n);
    }
}
int main(void)
{
    par_impar(7);
    par_impar(12);
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} ej-funcion-par-impar -->
(ejercicio_5_4)=