#### Descripción
Escribir una función que reciba una matriz (un arreglo 2D), sus dimensiones
(filas y columnas), y la imprima en la consola de una forma clara y ordenada,
fila por fila.

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Una matriz 2x3: 
[[1, 2, 3], [4, 5, 6]]
```

:::
:::{tab-item} Salida
:sync: tab2
``` text
Matriz (2x3):
[ 1, 2, 3 ]
[ 4, 5, 6 ]
```

:::

::::



flowchart TD
    A["Inicio"] --> B["fila = 0"]
    B --> C{"fila < num_filas?"}
    C -- Sí --> D["Imprimir '['"]
    D --> E["col = 0"]
    E --> F{"col < num_cols?"}
    F -- Sí --> G["Imprimir mat[fila][col]"]
    G --> H["col = col + 1"]
    H --> F
    F -- No --> I["Imprimir ']' y Salto de Línea"]
    I --> J["fila = fila + 1"]
    J --> C
    C -- No --> K["Fin"]

:::

::::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Mostrar matriz
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__21_1_mostrar_matriz(int val);

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
- **Proceso:** Se necesitan dos lazos `for` anidados para recorrer la matriz.
- El lazo exterior itera sobre las filas (desde `0` hasta `filas-1`).
- El lazo interior itera sobre las columnas de la fila actual (desde `0` hasta `columnas-1`).
- Dentro del lazo interior, se imprime cada elemento `matriz[fila][columna]`.
- Después de que el lazo interior termina (al final de cada fila), se debe imprimir un carácter de nueva línea (`\n`) para pasar a la siguiente fila.
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
