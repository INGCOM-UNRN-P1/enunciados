Implementar Quick Sort, otro algoritmo "Divide y Vencerás" muy eficiente en la
práctica.

**Lógica y Consideraciones:**
- **Proceso**:
  1. **Elegir Pivote**: Seleccionar un elemento del arreglo como pivote (puede
     ser el último, el primero, uno aleatorio, etc.).
  2. **Particionar**: Reorganizar el arreglo de modo que todos los elementos
     menores que el pivote queden a su izquierda y todos los mayores a su
     derecha. El pivote queda en su posición final ordenada. La función de
     partición devuelve el índice del pivote.
  3. **Vencer**: Llamar recursivamente a `quick_sort` para los sub-arreglos a la
     izquierda y a la derecha del pivote.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Ordenamiento Rápido (Quick Sort)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_to_rapido_quick_sort(int val);

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
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
