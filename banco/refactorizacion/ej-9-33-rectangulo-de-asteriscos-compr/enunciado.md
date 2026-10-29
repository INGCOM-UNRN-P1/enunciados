### Ejercicio 9.33 - Rectángulo de Asteriscos Comprimido ⭐☆☆☆☆

:::{exercise}
:label: ej-ref-rectangulo-asteriscos
Analizá el siguiente código que imprime un rectángulo en consola mediante lazos
anidados en una sola línea y refactorizalo:

``` c
void r(int w,int h){for(int i=0;i<h;i++){for(int j=0;j<w;j++)printf("*");printf("\n");}}
```
<!-- c -->

-   **[*plus ultra*]:** Validar que ancho y alto sean mayores a cero.
-   **[*plus ultra*]:** Modularizar la impresión de una fila de caracteres en
    una función auxiliar `void imprimir_fila(char c, int longitud)`.

:::
<!-- {exercise} -->

:::{solution} ej-ref-rectangulo-asteriscos
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <stdio.h>

void imprimir_fila_caracter(char caracter, int longitud)
{
    for (int columna = 0; columna < longitud; columna++)
    {
        putchar(caracter);
    }
    putchar('\n');
}

void imprimir_rectangulo(int ancho, int alto)
{
    if (ancho <= 0 || alto <= 0)
    {
        return;
    }
    for (int fila = 0; fila < alto; fila++)
    {
        imprimir_fila_caracter('*', ancho);
    }
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-rectangulo-asteriscos -->

---
