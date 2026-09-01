### Ejercicio 4.4 - Clave de acceso con do-while ⭐⭐☆☆☆

:::{exercise}
:label: lazo_repeat
:enumerator: for
Diseñá un programa con un lazo `do...while` que solicite repetidamente una clave
de acceso numérica al usuario hasta que ingrese el valor correcto `1234`.
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Limitar el número máximo de intentos fallidos antes de terminar.
-   **[*plus ultra*]:** Informar cuántos intentos quedan disponibles en cada iteración.

:::
<!-- {exercise} -->

:::{solution} lazo_repeat
:label: solucion-lazo_repeat
:class: dropdown
```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    int clave = 0;
    int clave_correcta = 1234;
    do
    {
        printf("Ingrese la clave: ");
        if (scanf("%d", &clave) != 1)
        {
            printf("Error al leer la clave.\n");
            return 1;
        }
        if (clave != clave_correcta)
        {
            printf("Clave incorrecta. Reintente.\n");
        }
    } while (clave != clave_correcta);
    printf("Acceso concedido.\n");
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} lazo_repeat -->

---

## Control de Flujo Seguro
