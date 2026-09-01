### Ejercicio 4.1 - Anatomía de una aserción ⭐☆☆☆☆

:::{exercise}
:label: ej-test-anatomia
Analizá el siguiente código y respondé:
1. ¿Qué biblioteca estándar se debe incluir para utilizar la macro `assert`?
2. ¿Qué ocurre exactamente en tiempo de ejecución si la condición evaluada
   resulta verdadera (`true`)?
3. ¿Qué ocurre si la condición resulta falsa (`false`)?

```{code-block} c
:linenos:
#include <assert.h>

int cuadrado(int n)
{
    return n * n;
}

int main(void)
{
    assert(cuadrado(4) == 16);
    assert(cuadrado(-3) == 9);
    return 0;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Explicar qué información diagnóstica imprime `assert` en
    la consola al fallar (archivo, línea, expresión y función).
-   **[*plus ultra*]:** Investigar qué efecto produce la macro `#define NDEBUG`
    colocada antes de `#include <assert.h>`.

:::
<!-- {exercise} -->

:::{solution} ej-test-anatomia
:class: dropdown
1. Se incluye `<assert.h>`.
2. Si la condición es `true`, el programa continúa su ejecución normal sin
   ninguna interrupción ni mensaje.
3. Si la condición es `false`, la macro `assert` aborta inmediatamente el
   programa con `SIGABRT` e imprime en `stderr` el nombre del archivo, el número
   de línea, la función y el texto exacto de la condición que falló.

:::
<!-- {solution} ej-test-anatomia -->

---
