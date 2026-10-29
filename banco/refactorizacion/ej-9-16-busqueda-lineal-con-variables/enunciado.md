:::{exercise}
:label: ej-ref-busqueda-global
Refactorizá la siguiente función que depende de variables globales mutables para
retornar la posición de un elemento en un arreglo:

```{code-block} c
:linenos:
int pos_encontrada = -1;

void buscar(int arr[], int n, int x)
{
    pos_encontrada = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            pos_encontrada = i;
            break;
        }
    }
}

```

-   **[*plus ultra*]:** Retornar el índice directamente como valor de retorno de
    la función pura.
-   **[*plus ultra*]:** Agregar el calificador `const` al arreglo de entrada.

:::

:::{solution} ej-ref-busqueda-global
:class: dropdown
**Código Refactorizado:**
```{code-block} c
:linenos:
#include <assert.h>

int buscar_primera_aparicion(const int arreglo[], int cantidad_elementos, int objetivo)
{
    if (arreglo == NULL || cantidad_elementos <= 0)
    {
        return -1;
    }
    for (int i = 0; i < cantidad_elementos; i++)
    {
        if (arreglo[i] == objetivo)
        {
            return i;
        }
    }
    return -1;
}

void test_buscar_aparicion(void)
{
    int datos[] = {10, 20, 30, 40};
    assert(buscar_primera_aparicion(datos, 4, 30) == 2);
    assert(buscar_primera_aparicion(datos, 4, 99) == -1);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación buscar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void buscar(int arr[], int n, int x);

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
