#### Descripción

Escribí un programa en C que, dada una matriz de enteros de dimensiones `M × N`,
calcule **en una única pasada** dos arreglos resultado:

-   `suma_filas[i]`: la suma de todos los elementos de la fila `i` de la matriz
    (con `0 <= i < M`).
-   `suma_cols[j]`: la suma de todos los elementos de la columna `j` de la matriz
    (con `0 <= j < N`).

El cálculo debe realizarse recorriendo la matriz una sola vez: cada elemento
`matriz[i][j]` debe acumularse simultáneamente en `suma_filas[i]` y en
`suma_cols[j]`. **No está permitido** recorrer la matriz dos veces (una por las
filas y otra por las columnas).

Implementá la lógica de cálculo en la siguiente función, que actúa como punto de
entrada del programa:

```c
/*
 * Precondiciones:
 *   - val representa una dimensión de la matriz (cantidad de filas o columnas).
 *   - val puede ser cualquier entero; la función debe ser robusta ante valores
 *     no válidos (val <= 0).
 * Postcondiciones:
 *   - Si val <= 0 (dimensión inválida), retorna 0.
 *   - Si val > 0, retorna el valor procesado según el flujo principal del
 *     ejercicio.
 */
int proc_por_filas_y_columnas(int val);
```

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1

Matriz de ejemplo (2×3):

```text
[ 1, 2, 3 ]
[ 4, 5, 6 ]
```


:::

:::{tab-item} Salida
:sync: tab2

```text
Suma de filas: [6, 15]
Suma de columnas: [5, 7, 9]
```


:::

::::

:::{note} Verificación paso a paso

-   **Filas:**
    -   Fila 0: `1 + 2 + 3 = 6`.
    -   Fila 1: `4 + 5 + 6 = 15`.
-   **Columnas:**
    -   Columna 0: `1 + 4 = 5`.
    -   Columna 1: `2 + 5 = 7`.
    -   Columna 2: `3 + 6 = 9`.

:::

#### Requisitos y Precondiciones

-   **Tipo de dato:** la matriz contiene valores de tipo `int`. Los arreglos
    resultado también son de tipo `int`.
-   **Dimensiones:** `M` (filas) y `N` (columnas) son enteros positivos
    (`M > 0`, `N > 0`). Ambos valores se conocen antes de comenzar el cálculo.
-   **Memoria:** los arreglos `suma_filas` y `suma_cols` se consideran ya
    dimensionados por quien invoca la lógica de cálculo: el primero con al menos
    `M` posiciones y el segundo con al menos `N`. Tu implementación **no debe**
    reservar memoria (`malloc`/`calloc`) ni liberarla (`free`).
-   **Punteros:** la función accede a la matriz y a los arreglos resultado
    mediante punteros recibidos como parámetros. Ninguno de estos punteros puede
    ser `NULL`; no es responsabilidad de la función validarlos.
-   **Inicialización:** antes de acumular, todos los elementos de `suma_filas` y
    `suma_cols` deben inicializarse en `0`. Acumular sobre arreglos sin
    inicializar es **comportamiento indefinido** (C11 §6.7.9).

#### Casos Borde

-   **Matriz de 1×1:** el único elemento es, a la vez, la suma de la única fila
    y de la única columna. Ejemplo: `[[7]]` produce `suma_filas = [7]` y
    `suma_cols = [7]`.
-   **Matriz de 1×N (una única fila):** `suma_filas` tiene un solo elemento (la
    suma total de la fila), mientras que `suma_cols[j]` coincide con
    `matriz[0][j]` para cada columna `j`.
-   **Matriz de M×1 (una única columna):** análogo al caso anterior, con los
    roles de filas y columnas intercambiados.
-   **Valores negativos y cero:** la matriz puede contener enteros negativos o
    ceros. Las sumas parciales y totales pueden resultar negativas; el algoritmo
    debe manejarlas correctamente. Ejemplo: `[[-1, 1], [-2, 2]]` produce
    `suma_filas = [0, 0]` y `suma_cols = [-3, 3]`.
-   **Dimensión no válida:** si la función de entrada recibe un valor
    `val <= 0`, debe retornar `0` sin realizar ningún otro procesamiento.

#

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Suma por Filas y Columnas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_por_filas_y_columnas(int val);

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

:::{hint} Consideraciones Didácticas
- **Suma de Filas:**
- Recorrer cada fila con un lazo exterior.
- Para cada fila, inicializar una `suma_fila` en 0.
- Con un lazo interior, recorrer las columnas de esa fila y acumular los valores en `suma_fila`.
- Guardar el resultado en el arreglo de sumas de filas.
- **Suma de Columnas:**
- El proceso es inverso. El lazo exterior recorre las columnas.
- El lazo interior recorre las filas de esa columna.
- **Eficiencia:** Se pueden calcular ambas sumas en un solo par de lazos anidados. Al procesar el elemento `matriz[i][j]`, se añade a `suma_filas[i]` y a `suma_columnas[j]`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
