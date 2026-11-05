:::{exercise}
:label: lazo_while 
:enumerator: while
Escribí un programa en C que imprima los números del 10 al 1 de forma
descendente usando un lazo `while`.

Imprimí cada número en una línea propia.

-   **[*plus ultra*]:** Validar que el número inicial sea mayor que cero.
-   **[*plus ultra*]:** Permitir al usuario configurar el paso de la cuenta regresiva.

:::

:::{solution} lazo_while
:label: solucion-lazo_while
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d\n", i);
        i = i - 1;
    }
    return 0;
}
```

:::
