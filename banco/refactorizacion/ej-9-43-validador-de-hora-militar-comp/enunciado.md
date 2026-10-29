### Ejercicio 9.43 - Validador de Hora Militar Comprimido ⭐☆☆☆☆

:::{exercise}
:label: ej-ref-hora-militar
Refactorizá la siguiente función de validación de horarios en formato 24 horas:

``` c
int ch(int h,int m,int s){return(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)?1:0;}
```
<!-- c -->

-   **[*plus ultra*]:** Retornar un `bool` y eliminar el operador ternario.
-   **[*plus ultra*]:** Usar constantes para los límites `#define MAX_HORAS 24`,
    `#define MAX_MINUTOS 60`.

:::
<!-- {exercise} -->

:::{solution} ej-ref-hora-militar
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

#define MIN_HORAS 0
#define MAX_HORAS 23
#define MIN_MINUTOS 0
#define MAX_MINUTOS 59
#define MIN_SEGUNDOS 0
#define MAX_SEGUNDOS 59

bool es_horario_valido(int horas, int minutos, int segundos)
{
    if (horas < MIN_HORAS || horas > MAX_HORAS)
    {
        return false;
    }
    if (minutos < MIN_MINUTOS || minutos > MAX_MINUTOS)
    {
        return false;
    }
    if (segundos < MIN_SEGUNDOS || segundos > MAX_SEGUNDOS)
    {
        return false;
    }
    return true;
}

void test_es_horario_valido(void)
{
    assert(es_horario_valido(14, 30, 0) == true);
    assert(es_horario_valido(23, 59, 59) == true);
    assert(es_horario_valido(24, 0, 0) == false);
    assert(es_horario_valido(12, -1, 0) == false);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-ref-hora-militar -->

---
