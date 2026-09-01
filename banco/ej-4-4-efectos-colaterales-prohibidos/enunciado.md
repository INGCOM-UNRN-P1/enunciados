### Ejercicio 4.4 - Efectos colaterales prohibidos dentro de assert ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-side-effects-assert
Analizá el siguiente código. ¿Qué error crítico ocurrirá si este programa se
compila en modo Release con `-DNDEBUG`?

```{code-block} c
:linenos:
#include <assert.h>
#include <stdio.h>

int procesar_siguiente_item(int *indice)
{
    return (*indice)++;
}

int main(void)
{
    int idx = 0;
    assert(procesar_siguiente_item(&idx) == 0);
    assert(procesar_siguiente_item(&idx) == 1);
    printf("Índice final: %d\n", idx);
    return 0;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Formular la regla general: *Nunca colocar llamadas con
    efectos colaterales dentro de un `assert()`*.
-   **[*plus ultra*]:** Reescribir el código separando la acción del assert.

:::
<!-- {exercise} -->

:::{solution} ej-test-side-effects-assert
:class: dropdown
Cuando se define `NDEBUG`, el preprocesador reemplaza todas las macros
`assert(x)` por nada (bloque vacío `((void)0)`).

En consecuencia, las llamadas a `procesar_siguiente_item(&idx)` **desaparecen
por completo del código ejecutable**, por lo que `idx` nunca se incrementa y el
programa finaliza imprimiendo `Índice final: 0` en lugar de `2`.

**Forma correcta:**
``` c
int idx = 0;
int r1 = procesar_siguiente_item(&idx);
assert(r1 == 0);
int r2 = procesar_siguiente_item(&idx);
assert(r2 == 1);
```
<!-- c -->

:::
<!-- {solution} ej-test-side-effects-assert -->

---
