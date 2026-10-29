### Ejercicio 9.26 - Herón y Clasificación de Triángulos Todo-en-Uno ⭐⭐⭐☆☆

:::{exercise}
:label: ej-ref-heron-todo-en-uno
Refactorizá la siguiente función separando la validación geométrica, el cálculo
del área por fórmula de Herón y la clasificación del triángulo en funciones
independientes:

```{code-block} c
:linenos:
#include <math.h>

double tri(double a, double b, double c, int *tipo)
{
    if (a+b<=c||a+c<=b||b+c<=a) { *tipo=0; return 0; }
    if (a==b&&b==c) *tipo=1;
    else if (a==b||b==c||a==c) *tipo=2;
    else *tipo=3;
    double s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Usar comparación con tolerancia `fabs(a - b) < 1e-6`
    para punto flotante.
-   **[*plus ultra*]:** Escribir tests unitarios para cada función por separado.

:::
<!-- {exercise} -->

---
