# Promedio de notas

### Ejercicio 5.4 - Promedio de notas ⭐⭐☆☆☆

:::{exercise}
:label: funcion_promedio
:enumerator: funciones-4
Escribí una función que reciba tres notas enteras y devuelva el promedio en
punto flotante. Mostrá el resultado en `main()`.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que las notas se encuentren en el rango [1, 10] retornando un código de error si alguna es inválida.
-   **[*plus ultra*]:** Escribir aserciones para verificar el cálculo del promedio con decimales.

:::
<!-- {exercise} -->

:::{solution} funcion_promedio
:class: dropdown
```{code-block} c
:linenos:
#include <stdio.h>
float promedio(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}
int main(void)
{
    printf("Promedio: %.2f\n", promedio(7, 8, 10));
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} funcion_promedio -->
(ejercicio_5_5)=