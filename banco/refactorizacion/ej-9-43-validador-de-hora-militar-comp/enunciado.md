:::{exercise}
:label: ej-ref-hora-militar
Refactorizá la siguiente función de validación de horarios en formato 24 horas:

``` c
int ch(int h,int m,int s){return(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)?1:0;}
```

-   **[*plus ultra*]:** Retornar un `bool` y eliminar el operador ternario.
-   **[*plus ultra*]:** Usar constantes para los límites `#define MAX_HORAS 24`,
    `#define MAX_MINUTOS 60`.

:::

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

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación es_horario_valido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_horario_valido(int horas, int minutos, int segundos);

/*
 * Operación test_es_horario_valido
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_es_horario_valido(void);

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
