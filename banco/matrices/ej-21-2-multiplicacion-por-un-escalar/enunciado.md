#### Descripción
Implementar una función que multiplique cada elemento de una matriz por un
número escalar dado. La operación modifica la matriz original (_in-place_).

::::{tab-set}

:::{tab-item} Entrada
:sync: tab1
``` text
Matriz: [[1, 2], [3, 4]]
Escalar: 5
```

:::
:::{tab-item} Salida
:sync: tab2
``` text
Matriz modificada: [[5, 10], [15, 20]]
```

:::

::::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Multiplicación por un escalar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_acion_por_un_escalar(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- **Fórmula:** Para cada elemento $a_{ij}$ de la matriz $A$, el nuevo elemento es $b_{ij} = k \cdot a_{ij}$.
- **Proceso:** Se utilizan dos lazos anidados para recorrer cada elemento de la matriz.
- En el cuerpo del lazo interior, se multiplica el elemento `matriz[fila][columna]` por el escalar y se guarda el resultado en la misma posición.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
