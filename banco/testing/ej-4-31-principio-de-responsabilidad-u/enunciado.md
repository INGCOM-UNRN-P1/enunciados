:::{exercise}
:label: ej-test-srp-refactor
La siguiente función realiza tres tareas simultáneas: calcular la suma de un
arreglo, buscar el máximo y contar negativos. Refactorizala en tres funciones
atómicas según la [Regla 0x2005h](../../reglas/2_funciones.md#0x2005h):

``` c
void procesar_todo(const int arr[], int n, int *suma, int *maximo, int *negativos);
```

-   **[*plus ultra*]:** Escribir pruebas unitarias independientes para cada
    función resultante.
-   **[*plus ultra*]:** Explicar por qué es más fácil reutilizar y mantener
    funciones con una sola responsabilidad.

:::

:::{solution} ej-test-srp-refactor
:class: dropdown
```{code-block} c
:linenos:
#include <assert.h>

int calcular_suma(const int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

int encontrar_maximo(const int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int contar_negativos(const int arr[], int n)
{
    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cont++;
        }
    }
    return cont;
}

void test_funciones_atomicas(void)
{
    int datos[] = {3, -1, 8, -5, 2};
    assert(calcular_suma(datos, 5) == 7);
    assert(encontrar_maximo(datos, 5) == 8);
    assert(contar_negativos(datos, 5) == 2);
}

```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_suma
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int calcular_suma(const int arr[], int n);

/*
 * Operación encontrar_maximo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int encontrar_maximo(const int arr[], int n);

/*
 * Operación contar_negativos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int contar_negativos(const int arr[], int n);

/*
 * Operación test_funciones_atomicas
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void test_funciones_atomicas(void);

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

:::{hint} Consideraciones Didácticas
- Descomponé funciones monolíticas en funciones más pequeñas, cada una con un único propósito bien definido.
- Separá la lógica de cálculo y procesamiento de la lógica de entrada/salida (I/O) o formateo.
- Facilitá las pruebas unitarias asegurando que cada función pueda testearse de forma aislada.
:::
