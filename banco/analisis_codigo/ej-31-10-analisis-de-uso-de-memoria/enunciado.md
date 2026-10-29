:::{exercise} eficiencia_2
:label: eficiencia_2

Compará el uso de memoria de estas dos implementaciones que calculan
factoriales:

```{code-block} c
:linenos:
// Versión recursiva
long factorial_recursivo(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial_recursivo(n - 1);
}
// Versión iterativa
long factorial_iterativo(int n)
{
    long resultado = 1;
    for (int i = 2; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
}
// Versión con memoización
#include <stdlib.h>
static long *cache = NULL;
static int cache_size = 0;
long factorial_memoizado(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    // Inicializar cache si es necesario
    if (cache == NULL || n >= cache_size)
    {
        int nuevo_tamaño = n + 1;
        cache = realloc(cache, nuevo_tamaño * sizeof(long));
        // Inicializar nuevos elementos
        for (int i = cache_size; i < nuevo_tamaño; i++)
        {
            cache[i] = -1; // Valor que indica "no calculado"
        }
        cache_size = nuevo_tamaño;
    }
    // Verificar si ya está en cache
    if (cache[n] != -1)
    {
        return cache[n];
    }
    // Calcular y almacenar en cache
    cache[n] = n * factorial_memoizado(n - 1);
    return cache[n];
}
```

**Tarea**: Analizá cada implementación en términos de:
1. Uso de memoria de la pila
2. Uso de memoria del heap
3. Variables y sus roles
4. Trade-offs entre tiempo y espacio

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::

:::{solution} eficiencia_2
:class: dropdown

**Versión Recursiva:**
- **Pila**: $O(n)$ - cada llamada recursiva agrega un marco a la pila
- **Heap**: $O(1)$ - no usa memoria dinámica
- **Variables**: Solo el parámetro `n` en cada marco (rol: parámetro de entrada)
- **Riesgo**: Stack overflow para valores grandes de n

**Versión Iterativa:**
- **Pila**: $O(1)$ - un solo marco de función
- **Heap**: $O(1)$ - no usa memoria dinámica  
- **Variables**:
  - `resultado`: Acumulador para el producto
  - `i`: Variable de control de lazo
- **Ventajas**: Uso mínimo de memoria, sin riesgo de stack overflow

**Versión Memoizada:**
- **Pila**: $O(n)$ - similar a recursiva en la primera llamada, $O(1)$ en
  llamadas subsecuentes
- **Heap**: $O(n)$ - array para almacenar resultados calculados
- **Variables**:
  - `cache`: Array estático global (rol: almacén de resultados)
  - `cache_size`: Contador de tamaño actual (rol: guardián de límites)
- **Trade-off**: Usa más memoria pero acelera dramáticamente cálculos repetidos

**Comparación de Trade-offs:**

| Aspecto | Recursiva | Iterativa | Memoizada |
|---------|-----------|-----------|-----------|
| Tiempo (primera llamada) | $O(n)$ | $O(n)$ | $O(n)$ |
| Tiempo (llamadas repetidas) | $O(n)$ | $O(n)$ | $O(1)$ |
| Espacio en pila | $O(n)$ | $O(1)$ | $O(n)$→$O(1)$ |
| Espacio en heap | $O(1)$ | $O(1)$ | $O(n)$ |
| Legibilidad | Alta | Media | Baja |
| Riesgo de overflow | Alto | Bajo | Medio |

:::

### 📋 Contrato de las Funciones

```c
/*
 * Operación factorial_recursivo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long factorial_recursivo(int n);

/*
 * Operación factorial_iterativo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long factorial_iterativo(int n);

/*
 * Operación factorial_memoizado
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long factorial_memoizado(int n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
```
:::
:::{tab-item} Valor positivo
```text
Entrada: 1
Salida / Retorno: 2
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
