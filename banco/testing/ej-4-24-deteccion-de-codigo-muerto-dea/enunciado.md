### Ejercicio 4.24 - Detección de Código Muerto (Dead Code) ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-dead-code
Analizá la siguiente función e identificá qué bloque de código es **código
muerto** (nunca podrá ejecutarse bajo ninguna circunstancia):

```{code-block} c
:linenos:
int calcular_tarifa(int edad)
{
    if (edad < 0)
    {
        return -1;
    }
    if (edad >= 0 && edad <= 12)
    {
        return 50;
    }
    if (edad > 12)
    {
        return 100;
    }
    // ¿Puede ejecutarse esta línea alguna vez?
    return 0;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Simplificar la estructura lógica eliminando
    redundancias.
-   **[*plus ultra*]:** Escribir pruebas unitarias que demuestren que la versión
    simplificada produce los mismos resultados.

:::
<!-- {exercise} -->

:::{solution} ej-test-dead-code
:class: dropdown
La línea `return 0;` al final es **código muerto** porque los tres bloques `if`
anteriores cubren exhaustivamente todos los números enteros posibles ($
ext{edad} < 0$, $0 \le  ext{edad} \le 12$, $    ext{edad} > 12$).

**Versión refactorizada y limpia:**
```{code-block} c
:linenos:
int calcular_tarifa(int edad)
{
    if (edad < 0)
    {
        return -1;
    }
    if (edad <= 12)
    {
        return 50;
    }
    return 100;
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-dead-code -->

---
