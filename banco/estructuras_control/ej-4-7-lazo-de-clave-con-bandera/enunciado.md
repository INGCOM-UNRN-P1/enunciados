### Ejercicio 4.7 - Lazo de clave con bandera ⭐⭐☆☆☆

:::{exercise}
:label: lazo_flag_break
:enumerator: continue
Reescribí el ingreso de clave de acceso del Ejercicio 5.4 utilizando un lazo
controlado por una bandera booleana (`bool`) en lugar de `do...while`.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Usar una variable bool con nombre representativo (ej. clave_correcta).
-   **[*plus ultra*]:** Manejar intentos máximos permitidos en la condición del lazo.

:::
<!-- {exercise} -->

:::{solution} lazo_flag_break
:label: solucion-lazo_flag_break
:class: dropdown
```{code-block} c
:linenos:
#include <stdbool.h>
#include <stdio.h>
int main(void)
{
    int clave = 0;
    int clave_correcta = 1234;
    bool clave_correcta_ingresada = false;
    while (clave_correcta_ingresada == false)
    {
        printf("Ingrese la clave de acceso: ");
        if (scanf("%d", &clave) != 1)
        {
            printf("Error al leer la clave.\n");
            return 1;
        }
        if (clave == clave_correcta)
        {
            printf("Acceso concedido.\n");
            clave_correcta_ingresada =
                true; // Se modifica el estado de la bandera
        }
        else
        {
            printf("Clave incorrecta. Intente nuevamente.\n");
        }
    }
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} lazo_flag_break -->

---
## Ejercicios de Práctica de Control

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->
