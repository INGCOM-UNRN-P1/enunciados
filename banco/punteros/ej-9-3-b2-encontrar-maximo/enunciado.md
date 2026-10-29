:::{exercise}
:label: encontrar_maximo
:enumerator: funciones-1

Escribí una función `int encontrar_maximo(const int *arreglo, size_t n)` que
reciba un puntero al inicio de un arreglo de enteros (marcado como `const` para
no modificarlo) y su tamaño. La función debe recorrer el arreglo usando el
puntero y devolver el valor del elemento más grande.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::

::::{solution} encontrar_maximo
:class: dropdown

:::{code-block}c
:linenos:
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
int encontrar_maximo(const int *arreglo, size_t n)
{
    assert(arreglo != NULL);
    if (n == 0)
    {
        return 0; // O un valor de error apropiado
    }
    int maximo = *arreglo; // Suponemos que el primer elemento es el máximo
    // Avanzamos el puntero por el resto del arreglo
    for (size_t i = 1; i < n; i++)
    {
        // Usamos aritmética de punteros para acceder al siguiente elemento
        if (*(arreglo + i) > maximo)
        {
            maximo = *(arreglo + i);
        }
    }
    return maximo;
}
:::

::::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Encontrar máximo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__b2_encontrar_maximo(int val);

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
