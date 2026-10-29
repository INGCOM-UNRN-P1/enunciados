:::{exercise}
:label: ej-ref-matriz-identidad
Refactorizá la siguiente función que determina el valor de cada celda en una
matriz identidad eliminando el ternario prohibido:

``` c
int id(int r,int c){return(r==c)?1:0;}
```

-   **[*plus ultra*]:** Escribir una función pura `int
    obtener_valor_identidad(int fila, int columna)` con validación de índices no
    negativos.
-   **[*plus ultra*]:** Testear con `assert()` celdas diagonales y fuera de la
    diagonal.

:::

:::{solution} ej-ref-matriz-identidad
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

int obtener_valor_identidad(int fila, int columna)
{
    if (fila < 0 || columna < 0)
    {
        return -1;
    }
    if (fila == columna)
    {
        return 1;
    }
    return 0;
}

void test_valor_identidad(void)
{
    assert(obtener_valor_identidad(0, 0) == 1);
    assert(obtener_valor_identidad(2, 2) == 1);
    assert(obtener_valor_identidad(0, 3) == 0);
    assert(obtener_valor_identidad(-1, 0) == -1);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación obtener_valor_identidad
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int obtener_valor_identidad(int fila, int columna);

/*
 * Operación test_valor_identidad
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_valor_identidad(void);

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
