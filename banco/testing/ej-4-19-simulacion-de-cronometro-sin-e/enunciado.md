### Ejercicio 4.19 - Simulación de cronómetro sin estado global ⭐⭐⭐☆☆

:::{exercise}
:label: ej-test-cronometro-puro
Diseñá funciones para manipular el tiempo acumulado en segundos representándolo
como un valor entero pasado por parámetro:
- `int tiempo_avanzar(int tiempo_actual, int segundos_delta)`
- `int tiempo_reiniciar(void)`
- `int tiempo_obtener_minutos(int tiempo_total)`
- `int tiempo_obtener_segundos(int tiempo_total)`

Escribí las pruebas unitarias que validen avances sucesivos.

-   **[*plus ultra*]:** Validar que `segundos_delta >= 0`.
-   **[*plus ultra*]:** Probar el avance cruzando la frontera de 60 segundos.

:::
<!-- {exercise} -->

:::{solution} ej-test-cronometro-puro
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

int tiempo_avanzar(int tiempo_actual, int segundos_delta)
{
    if (segundos_delta < 0)
    {
        return tiempo_actual;
    }
    return tiempo_actual + segundos_delta;
}

int tiempo_reiniciar(void)
{
    return 0;
}

int tiempo_obtener_minutos(int tiempo_total)
{
    return tiempo_total / 60;
}

int tiempo_obtener_segundos(int tiempo_total)
{
    return tiempo_total % 60;
}

void test_cronometro_avance(void)
{
    int t = tiempo_reiniciar();
    t = tiempo_avanzar(t, 45);
    t = tiempo_avanzar(t, 30);
    assert(t == 75);
    assert(tiempo_obtener_minutos(t) == 1);
    assert(tiempo_obtener_segundos(t) == 15);
}

```
<!-- {code-block} c -->

:::
<!-- {solution} ej-test-cronometro-puro -->

---
