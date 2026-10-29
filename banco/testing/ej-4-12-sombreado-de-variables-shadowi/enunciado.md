### Ejercicio 4.12 - Sombreado de Variables (Shadowing) ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-shadowing
Leé el siguiente fragmento e indicá qué imprime en consola y por qué:

```{code-block} c
:linenos:
#include <stdio.h>

int factor = 10; // Global

int multiplicar(int valor)
{
    int factor = 2; // Local con mismo nombre que la global
    return valor * factor;
}

int main(void)
{
    int resultado = multiplicar(5);
    printf("Resultado: %d, Factor: %d\n", resultado, factor);
    return 0;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Explicar qué advertencia emite el compilador al compilar
    con `-Wshadow`.
-   **[*plus ultra*]:** Eliminar la variable global para evitar confusiones de
    alcance (*scope*).

:::
<!-- {exercise} -->

:::{solution} ej-test-shadowing
:class: dropdown
Imprime: `Resultado: 10, Factor: 10`.

La variable local `factor = 2` dentro de `multiplicar` oculta ("ensombrece") a
la variable global `factor = 10` durante el alcance de la función. Al salir de
la función, la global permanece inalterada con valor `10`. La bandera `-Wshadow`
alerta explícitamente sobre estas declaraciones ambiguas.

:::
<!-- {solution} ej-test-shadowing -->

---
