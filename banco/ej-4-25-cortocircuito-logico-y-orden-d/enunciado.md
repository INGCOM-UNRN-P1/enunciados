### Ejercicio 4.25 - Cortocircuito Lógico y Orden de Evaluación ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-cortocircuito
Analizá el comportamiento de las operaciones con cortocircuito lógico (`&&` y
`||`). ¿Qué imprime el siguiente código y por qué la función `incrementar` no
siempre es invocada?

```{code-block} c
:linenos:
#include <stdio.h>

int llamadas = 0;

int incrementar(void)
{
    llamadas++;
    return 1;
}

int main(void)
{
    int a = 0;
    if (a != 0 && incrementar())
    {
        printf("Rama 1\n");
    }
    printf("Llamadas tras primer if: %d\n", llamadas);

    int b = 1;
    if (b == 1 || incrementar())
    {
        printf("Rama 2\n");
    }
    printf("Llamadas tras segundo if: %d\n", llamadas);
    return 0;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Explicar por qué es peligroso colocar funciones con
    efectos secundarios dentro de condiciones compuestas.
-   **[*plus ultra*]:** Escribir aserciones que verifiquen el valor final de
    `llamadas`.

:::
<!-- {exercise} -->

:::{solution} ej-test-cortocircuito
:class: dropdown
Imprime:
```
Llamadas tras primer if: 0
Rama 2
Llamadas tras segundo if: 0
```
- En `a != 0 && incrementar()`, como `a != 0` es falso, el operador `&&` evalúa
  a falso sin evaluar la segunda parte.
- En `b == 1 || incrementar()`, como `b == 1` es verdadero, el operador `||`
  evalúa a verdadero sin evaluar la segunda parte.
En ningún caso se ejecuta `incrementar()`.

:::
<!-- {solution} ej-test-cortocircuito -->

---
