### Ejercicio 4.5 - Refactorización de break ⭐⭐☆☆☆

:::{exercise}
:label: lazo_break
:enumerator: break
Modificá el siguiente programa para eliminar la instrucción `break` prohibida,
estructurando correctamente el lazo:
```{code-block} c
:linenos:
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("valor actual: %d\n", i);
        if (i == 4)
        {
            break;
        }
    }
    return 0;
}
```
<!-- {code-block} c -->
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Asegurar que la condición de parada del lazo sea explícita y auto-documentada.
-   **[*plus ultra*]:** Validar el comportamiento del lazo con datos de prueba extremos.

:::
<!-- {exercise} -->

:::{solution} lazo_break
:label: solucion-lazo_break
:class: dropdown
Se reestructura el lazo reemplazando el `for` e implementando un lazo `while`
controlado por una bandera lógica booleana (`bool`) del encabezado `<stdbool.h>`
que se establece en `false` al alcanzar la condición de parada:

```{code-block} c
:linenos:
#include <stdbool.h>
#include <stdio.h>
int main(void)
{
    int i = 0;
    bool continuar = true;
    while (i < 10 && continuar)
    {
        printf("valor actual: %d\n", i);
        if (i == 4)
        {
            continuar = false;
        }
        i++;
    }
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} lazo_break -->
