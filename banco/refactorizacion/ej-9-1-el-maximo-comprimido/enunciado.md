:::{exercise}
:label: ej-ref-maximo-comprimido
Analizá y refactorizá la siguiente función que utiliza el operador ternario
prohibido y nombres crípticos:

``` c
int f(int a,int b){return(a>b)?a:b;}
```

-   **[*plus ultra*]:** Implementar `int obtener_mayor(int primer_numero, int
    segundo_numero)` con estilo Allman y `if-else`.
-   **[*plus ultra*]:** Escribir pruebas unitarias con `assert()` para números
    positivos, negativos e iguales.

:::

:::{solution} ej-ref-maximo-comprimido
:class: dropdown
**Diagnóstico:**
- Violación de la [Regla 0x1007h](../../reglas/1_control.md#0x1007h): uso del
  operador ternario `?:`.
- Violación de la [Regla 0x000Bh](../../reglas/0_sintaxis.md#0x000bh): llaves en
  la misma línea (no es Allman).
- Violación de la [Regla 0x0007h](../../reglas/0_sintaxis.md#0x0007h):
  identificadores de una letra `f, a, b`.

**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

int obtener_mayor(int primer_numero, int segundo_numero)
{
    if (primer_numero > segundo_numero)
    {
        return primer_numero;
    }
    else
    {
        return segundo_numero;
    }
}

void test_obtener_mayor(void)
{
    assert(obtener_mayor(10, 5) == 10);
    assert(obtener_mayor(-3, -8) == -3);
    assert(obtener_mayor(7, 7) == 7);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación obtener_mayor
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int obtener_mayor(int primer_numero, int segundo_numero);

/*
 * Operación test_obtener_mayor
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_obtener_mayor(void);

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
