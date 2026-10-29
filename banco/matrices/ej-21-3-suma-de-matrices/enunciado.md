#### Descripción
Implementar una función que sume dos matrices, `A` y `B`, y almacene el
resultado en una tercera matriz, `C`. La suma de matrices solo es posible si
ambas tienen las mismas dimensiones.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Matriz A: [[1, 2], [3, 4]]
Matriz B: [[5, 6], [7, 8]]
```

:::
:::{tab-item} Salida
:sync: tab2
``` text
Matriz C: [[6, 8], [10, 12]]
```

:::

::::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Suma de matrices
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_1_3_suma_de_matrices(int val);

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
- **Fórmula:** La suma se realiza elemento a elemento: $c_{ij} = a_{ij} + b_{ij}$.
- **Precondición:** Las dimensiones de la Matriz A y la Matriz B deben ser idénticas.
- **Proceso:** Recorrer las matrices con lazos anidados. En cada posición `(f, c)`, calcular `C[f][c] = A[f][c] + B[f][c]`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
