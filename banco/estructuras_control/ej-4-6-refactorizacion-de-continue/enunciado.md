:::{exercise}
:label: lazo_continue
:enumerator: continue
Modificá el siguiente código para eliminar la instrucción `continue` prohibida:
```{code-block} c
:linenos:
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("i = %d\n", i);
    }
    return 0;
}
```

-   **[*plus ultra*]:** Refactorizar el lazo usando if-else para evitar bifurcaciones no estructuradas.
-   **[*plus ultra*]:** Verificar que la lógica sea equivalente mediante pruebas unitarias.

:::

:::{solution} lazo_continue
:label: solucion-lazo_continue
:class: dropdown
Se reestructura el lazo de forma segura eliminando la instrucción `continue` y
encerrando el cuerpo restante del lazo dentro de una condición positiva que
filtra los elementos que se desean procesar (en este caso, los impares):

```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("i = %d\n", i);
        }
    }
    return 0;
}
```

:::
