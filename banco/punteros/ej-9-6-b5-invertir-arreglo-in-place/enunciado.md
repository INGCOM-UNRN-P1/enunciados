:::{exercise}
:label: invertir_arreglo_inplace
:enumerator: punteros-2

Implementá un procedimiento `void invertir_arreglo(int *arreglo, size_t n)` que
invierta el orden de los elementos de un arreglo "in-place" (sin usar un arreglo
auxiliar). Utilizá dos punteros: uno que apunte al inicio del arreglo y otro que
apunte al final. Intercambiá los valores a los que apuntan y mové los punteros
hacia el centro hasta que se crucen.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::

::::{solution} invertir_arreglo_inplace
:class: dropdown

:::{code-block}c
:linenos:
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
void invertir_arreglo(int *arreglo, size_t n)
{
    assert(arreglo != NULL);
    if (n < 2)
    {
        return; // No hay nada que invertir
    }
    int *inicio = arreglo;
    int *fin = arreglo + n - 1;
    while (inicio < fin)
    {
        // Intercambiamos los valores
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        // Movemos los punteros hacia el centro
        inicio++;
        fin--;
    }
}
:::

::::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Invertir arreglo in-place
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_tir_arreglo_in_place(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
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
