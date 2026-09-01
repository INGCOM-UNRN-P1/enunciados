### Ejercicio 4.20 - Detección de fugas de estado entre funciones ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-fuga-estado
Dado el siguiente código con una variable global oculta:

```{code-block} c
:linenos:
int ultimo_resultado = 0;

int multiplicar_y_guardar(int a, int b)
{
    ultimo_resultado = a * b;
    return ultimo_resultado;
}

```
<!-- {code-block} c -->

Explicá qué problema de diseño introduce `ultimo_resultado` si dos partes del
programa invocan la función en momentos intercalados.

-   **[*plus ultra*]:** Refactorizar eliminando la variable global.
-   **[*plus ultra*]:** Explicar el concepto de función reentrante (*reentrant
    function*).

:::
<!-- {exercise} -->

:::{solution} ej-test-fuga-estado
:class: dropdown
Si una parte del programa llama a `multiplicar_y_guardar(3, 4)`, el resultado
esperado es `12`. Pero si otra parte del programa llama a
`multiplicar_y_guardar(10, 2)` antes de que la primera lea `ultimo_resultado`,
el valor se sobrescribe a `20`, corrompiendo los datos del primer llamador.

:::
<!-- {solution} ej-test-fuga-estado -->

---
