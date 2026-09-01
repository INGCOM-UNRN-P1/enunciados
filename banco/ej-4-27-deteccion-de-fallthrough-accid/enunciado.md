### Ejercicio 4.27 - Detección de Fallthrough accidental en switch ⭐⭐☆☆☆

:::{exercise}
:label: ej-test-fallthrough-switch
Descubrí el bug en la siguiente función de cálculo de días de un mes y
corregilo:

```{code-block} c
:linenos:
int dias_del_mes(int mes)
{
    int dias = 0;
    switch (mes)
    {
        case 2:
            dias = 28;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
        default:
            dias = -1;
    }
    return dias;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Explicar qué valor retornaría `dias_del_mes(2)` en el
    código original con bug.
-   **[*plus ultra*]:** Escribir una prueba unitaria que detecte el error.

:::
<!-- {exercise} -->

:::{solution} ej-test-fallthrough-switch
:class: dropdown
En el código original falta la instrucción `break;` al final de cada grupo de
casos. Por lo tanto, para cualquier mes, la ejecución continúa cayendo
(*fallthrough*) hasta el bloque `default`, retornando siempre `-1`.

**Solución:**
```{code-block} c
:linenos:
int dias_del_mes(int mes)
{
    switch (mes)
    {
        case 2:
            return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        default:
            return -1;
    }
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-fallthrough-switch -->

---
