### Ejercicio 9.10 - Menú con Ifs Caóticos ⭐⭐☆☆☆

:::{exercise}
:label: ej-ref-menu-ifs
Refactorizá la siguiente selección de opciones a una estructura `switch` clara
con cláusula `default` ([Regla 0x1003h](../../reglas/1_control.md#0x1003h)):

```{code-block} c
:linenos:
double operacion(int op, double a, double b)
{
    if (op == 1) {
        return a + b;
    } else if (op == 2) {
        return a - b;
    } else if (op == 3) {
        return a * b;
    } else if (op == 4) {
        if (b != 0) return a / b;
        else return 0;
    } else {
        return 0;
    }
}

```
<!-- {code-block} c -->

-   **[*plus ultra*]:** Manejar el error de división por cero y opción inválida
    mediante un puntero booleano `bool *ok`.
-   **[*plus ultra*]:** Definir un `enum` con los códigos de operación.

:::
<!-- {exercise} -->

:::{solution} ej-ref-menu-ifs
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

typedef enum
{
    OP_SUMAR = 1,
    OP_RESTAR = 2,
    OP_MULTIPLICAR = 3,
    OP_DIVIDIR = 4
} tipo_operacion_t;

double calcular_operacion(tipo_operacion_t operacion, double a, double b, bool *exito)
{
    if (exito == NULL)
    {
        return 0.0;
    }
    *exito = true;
    switch (operacion)
    {
        case OP_SUMAR:
            return a + b;
        case OP_RESTAR:
            return a - b;
        case OP_MULTIPLICAR:
            return a * b;
        case OP_DIVIDIR:
            if (b == 0.0)
            {
                *exito = false;
                return 0.0;
            }
            return a / b;
        default:
            *exito = false;
            return 0.0;
    }
}

void test_operaciones(void)
{
    bool ok = false;
    assert(calcular_operacion(OP_SUMAR, 3.0, 4.0, &ok) == 7.0 && ok);
    assert(calcular_operacion(OP_DIVIDIR, 10.0, 2.0, &ok) == 5.0 && ok);
    calcular_operacion(OP_DIVIDIR, 10.0, 0.0, &ok);
    assert(!ok);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-menu-ifs -->

---
