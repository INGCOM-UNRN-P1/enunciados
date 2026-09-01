### Ejercicio 4.22 - Máquina de Estados Finita Pura ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-fsm-pura
Modelá un validador de contraseña simple (estados: `0 = INICIO`, `1 =
TIENE_LONGITUD`, `2 = VALIDA`, `-1 = ERROR`) mediante una función pura de
transición:
`int transicion_estado(int estado_actual, char entrada)`

Escribí pruebas unitarias que simulen la secuencia de caracteres `a`, `b`, `1`
para verificar la transición de estados paso a paso sin variables globales.

-   **[*plus ultra*]:** Documentar la tabla de transiciones en un comentario
    formal.
-   **[*plus ultra*]:** Verificar que entradas inválidas conduzcan al estado
    `-1`.

:::
<!-- {exercise} -->

:::{solution} ej-test-fsm-pura
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>
#include <ctype.h>

int transicion_estado(int estado_actual, char entrada)
{
    if (estado_actual == 0)
    {
        return isalpha(entrada) ? 1 : -1;
    }
    if (estado_actual == 1)
    {
        return isdigit(entrada) ? 2 : 1;
    }
    if (estado_actual == 2)
    {
        return 2;
    }
    return -1;
}

void test_fsm_camino_exitoso(void)
{
    int estado = 0;
    estado = transicion_estado(estado, a);
    assert(estado == 1);
    estado = transicion_estado(estado, b);
    assert(estado == 1);
    estado = transicion_estado(estado, '9\);
    assert(estado == 2);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-fsm-pura -->

---

## 3. Lectura, Análisis y Flujo de Control
