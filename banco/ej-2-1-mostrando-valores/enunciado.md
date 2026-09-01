### Ejercicio 2.1 - Mostrando valores ⭐⭐☆☆☆

:::{exercise}
:label: Mostrando valores
:enumerator: Valores
Escribí un programa en C que declare e inicialice variables para tu edad, tu
altura en metros y tu inicial de nombre, y muestre sus valores en la consola.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que la edad y la altura sean valores positivos coherentes.
-   **[*plus ultra*]:** Formatear la salida tabulada en columnas alineadas.

:::
<!-- {exercise} -->

:::{solution} Mostrando valores
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    int edad = 20;
    float altura = 1.82f;
    char inicial = 'J';
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} Mostrando valores -->
