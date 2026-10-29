Implementar la aplicación de un kernel de convolución de tamaño $3 \times 3$ sobre una matriz bidimensional de enteros de tamaño $F \times C$.

Los bordes deben procesarse con *Zero Padding* (las posiciones virtuales fuera de los límites de la matriz tienen valor 0).

Formato de entrada:
1. Dos enteros: $F$ y $C$ (filas y columnas de la matriz origen).
2. Los $F \times C$ enteros de la matriz.
3. Los 9 enteros del kernel $3 \times 3$.

Salida:
La matriz resultante de la convolución de tamaño $F \times C$ impresa fila por fila separada por espacios.

### 📋 Contrato de las Funciones

```c
/*
 * Operación obtener_pixel
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int obtener_pixel(const int *mat, int f, int c, int fil, int col);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Matriz 2x2
```text
Entrada: [[1, 2], [3, 4]]
Salida: Resultado calculado
```
:::
:::{tab-item} Caso límite 1x1
```text
Entrada: [[5]]
Salida: 5
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Para un elemento en $(f, c)$, la ventana de $3 \times 3$ comprende $(f+i, c+j)$ con $i, j \in \{-1, 0, 1\}$.
- Manejá los bordes con zero-padding (si $(f+i, c+j)$ está fuera de rango $[0, F-1] \times [0, C-1]$, el valor es 0).
- Guardá los resultados en una matriz de salida nueva para no sobreescribir los valores originales durante el cálculo.
:::
