### Ejercicio 4.15 - Variable `static` local vs Variable Global ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-static-local
Analizá el siguiente código. ¿Qué valores retorna en las sucesivas llamadas?
¿Por qué una variable `static` local también genera problemas para el testing
unitario independiente?

```{code-block} c
:linenos:
int contador_llamadas(void)
{
    static int veces = 0;
    veces++;
    return veces;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Explicar la diferencia de alcance (*scope*) y tiempo de
    vida (*lifetime*) entre una variable global y una variable local `static`.
-   **[*plus ultra*]:** Escribir una versión reseteable o pasar el contador por
    parámetro.

:::
<!-- {exercise} -->

:::{solution} ej-test-static-local
:class: dropdown
La primera llamada retorna `1`, la segunda `2`, la tercera `3`, etc.

Aunque su alcance está restringido a la función, su tiempo de vida es durante
toda la ejecución del programa. Esto retiene estado mutable entre pruebas,
imposibilitando correr tests unitarios aislados y repetibles sin reiniciar el
binario.

:::
<!-- {solution} ej-test-static-local -->

---
