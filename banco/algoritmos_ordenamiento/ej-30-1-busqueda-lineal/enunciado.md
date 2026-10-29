Implementar una función que busque un elemento en un arreglo recorriéndolo
secuencialmente desde el primer hasta el último elemento. Es el método de
búsqueda más simple y no requiere que el arreglo esté ordenado.

**Lógica y Consideraciones:**
- **Proceso**: Iterar a través del arreglo con un índice `i` desde 0 hasta
  `n-1`. En cada paso, comparar `arreglo[i]` con el valor buscado.
- **Salida**: Si se encuentra el elemento, devolver su índice `i`. Si el lazo
  termina sin encontrarlo, devolver `-1`.
- **Complejidad Temporal**: $O(n)$.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Búsqueda Lineal
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_30_1_busqueda_lineal(int val);

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
