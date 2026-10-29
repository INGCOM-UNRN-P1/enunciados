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

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación tiempo_avanzar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int tiempo_avanzar(int tiempo_actual, int segundos_delta);

/*
 * Operación tiempo_reiniciar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int tiempo_reiniciar(void);

/*
 * Operación tiempo_obtener_minutos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int tiempo_obtener_minutos(int tiempo_total);

/*
 * Operación tiempo_obtener_segundos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int tiempo_obtener_segundos(int tiempo_total);

/*
 * Operación test_cronometro_avance
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_cronometro_avance(void);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
