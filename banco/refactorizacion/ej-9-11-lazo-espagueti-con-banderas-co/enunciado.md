### Ejercicio 9.11 - Lazo Espagueti con Banderas Confusas ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-lazo-espagueti
Refactorizá la siguiente función que utiliza lazos infinitos `while(1)`,
variables `flag` crípticas y `break` desordenados para verificar si un número es
primo:

```{code-block} c
:linenos:
int check(int n)
{
    int flag = 1;
    int i = 2;
    if (n <= 1) return 0;
    while (1)
    {
        if (i * i > n) break;
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }
    return flag;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Eliminar `while(1)` y `break` reemplazándolos por un
    lazo estructurado con condición clara.
-   **[*plus ultra*]:** Optimizar evaluando solo números impares después del 2.

:::
<!-- {exercise} -->

---
