# Mayor de dos números

### Ejercicio 5.2 - Mayor de dos números ⭐⭐☆☆☆

:::{exercise}
:label: ej-funcion-mayor
:enumerator: funciones-2
Programá una función que reciba dos números enteros y retorne el mayor de ellos:

- `int mayor(int a, int b);`

Probala desde `main()` con distintos pares de números.

-   **[*plus ultra*]:** Implementar una función que calcule el mayor de tres números reutilizando la función mayor de dos.
-   **[*plus ultra*]:** Escribir aserciones con assert() para verificar el comportamiento con números iguales.

:::
<!-- {exercise} -->

:::{solution} ej-funcion-mayor
:class: dropdown

```{code-block} c
:linenos:
#include <stdio.h>
int mayor(int a, int b)
{
    int resultado = a;
    if (b > a)
    {
        resultado = b;
    }
    return resultado;
}
int main(void)
{
    int x = 10;
    int y = 7;
    printf("El mayor es: %d\n", mayor(x, y));
    return 0;
}
```
<!-- {code-block} c -->

:::
<!-- {solution} ej-funcion-mayor -->
(ejercicio_5_3)=
