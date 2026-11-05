:::{exercise}
:label: lazo_repeat
:enumerator: for
Diseñá un programa con un lazo `do...while` que solicite repetidamente una clave
de acceso numérica al usuario hasta que ingrese el valor correcto `1234`.

Antes de cada intento imprimí `Ingrese la clave: `; si es incorrecto, imprimí `Clave incorrecta. Reintente.` y un salto de línea. Al acertar, imprimí `Acceso concedido.` y un salto de línea.

-   **[*plus ultra*]:** Limitar el número máximo de intentos fallidos antes de terminar.
-   **[*plus ultra*]:** Informar cuántos intentos quedan disponibles en cada iteración.

:::

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

:::

---

## Control de Flujo Seguro
