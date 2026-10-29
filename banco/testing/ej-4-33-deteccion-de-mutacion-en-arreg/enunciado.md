:::{exercise}
:label: ej-test-const-arrays
Analizá el siguiente código. ¿Por qué agregar el calificador `const` en la firma
de `buscar_elemento` previene bugs accidentales de modificación en las pruebas?

``` c
// Incorrecto:
int buscar_elemento(int arr[], int n, int objetivo);

// Correcto (seguro):
int buscar_elemento(const int arr[], int n, int objetivo);
```

-   **[*plus ultra*]:** Explicar qué error genera el compilador si una función
    intenta modificar un elemento de un arreglo declarado `const`.
-   **[*plus ultra*]:** Escribir un test que valide que el arreglo original no
    sufrió modificaciones tras la búsqueda.

:::

:::{solution} ej-test-const-arrays
:class: dropdown
El calificador `const` garantiza contractualmente que la función es de **solo
lectura**. Si por error un programador escribe `arr[i] = 0;` en lugar de `if
(arr[i] == 0)`, el compilador rechaza la compilación con un error inmediato
(`assignment of read-only location`), evitando corromper los datos del llamador.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Detección de mutación en arreglos de solo lectura
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_mutacion_en_arreg(int val);

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
