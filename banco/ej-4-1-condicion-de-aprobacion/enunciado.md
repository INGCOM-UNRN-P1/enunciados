### Ejercicio 4.1 - Condición de aprobación ⭐⭐☆☆☆

:::{exercise}
:label: entrada-2
:enumerator: entrada-2
Pedí al usuario que ingrese su nota final (entera) e imprimí su condición:
- "Promociona" si la nota es mayor o igual a 6.
- "Aprueba" si la nota es mayor o igual a 4 pero menor a 6.
- "Desaprueba" si la nota es menor a 4.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que la calificación esté dentro del rango válido [1, 10].
-   **[*plus ultra*]:** Modularizar la condición en una función booleana independiente.

:::
<!-- {exercise} -->

:::{solution} entrada-2
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    int nota = 0;
    printf("Ingrese la nota: ");
    if (scanf("%d", &nota) != 1)
    {
        printf("Error al leer la nota.\n");
        return 1;
    }
    if (nota >= 6)
    {
        printf("Promociona\n");
    }
    else if (nota >= 4)
    {
        printf("Aprueba\n");
    }
    else
    {
        printf("Desaprueba\n");
    }
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} entrada-2 -->

---

## Estructuras de Repetición (Lazos)
