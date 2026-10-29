:::{exercise}
:label: ej-ref-bisiesto-criptico
El siguiente código evalúa años bisiestos en una sola línea condensada sin
validar años negativos:

``` c
bool b(int y){return(y%4==0&&y%100!=0)||(y%400==0);}
```

-   **[*plus ultra*]:** Refactorizar con cláusula de guarda para años $\le 0$.
-   **[*plus ultra*]:** Escribir una suite con tests unitarios separados para
    cada rama de decisión.

:::

:::{solution} ej-ref-bisiesto-criptico
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>
#include <stdbool.h>

bool es_anio_bisiesto(int anio)
{
    if (anio <= 0)
    {
        return false;
    }
    bool es_div_4 = (anio % 4 == 0);
    bool es_div_100 = (anio % 100 == 0);
    bool es_div_400 = (anio % 400 == 0);

    return (es_div_4 && !es_div_100) || es_div_400;
}

void test_es_anio_bisiesto(void)
{
    assert(es_anio_bisiesto(2024) == true);
    assert(es_anio_bisiesto(2023) == false);
    assert(es_anio_bisiesto(1900) == false);
    assert(es_anio_bisiesto(2000) == true);
    assert(es_anio_bisiesto(-4) == false);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación es_anio_bisiesto
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_anio_bisiesto(int anio);

/*
 * Operación test_es_anio_bisiesto
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_es_anio_bisiesto(void);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
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
