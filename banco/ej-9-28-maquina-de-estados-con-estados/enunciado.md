### Ejercicio 9.28 - Máquina de Estados con Estados Mágicos ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-fsm-estados-magicos
Refactorizá la siguiente máquina de estados que usa números enteros mágicos (`0,
1, 2, 3`) para procesar palabras, sustituyéndolos por un `enum` autoexplicativo
y funciones de transición puras:

```{code-block} c
:linenos:
int st = 0;

void step(char c)
{
    if (st == 0 && c != ' ') st = 1;
    else if (st == 1 && c == ' ') st = 2;
    else if (st == 2 && c != ' ') st = 1;
    else if (c == '\n') st = 3;
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Eliminar la variable global `st`.
-   **[*plus ultra*]:** Escribir una suite de pruebas de transición de estados.

:::
<!-- {exercise} -->

---
