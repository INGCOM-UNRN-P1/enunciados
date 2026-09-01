### Ejercicio 31.9 - Análisis de Complejidad Temporal ⭐⭐⭐☆☆

:::{exercise} eficiencia_1
:label: eficiencia_1

Analizá la complejidad temporal del siguiente algoritmo de búsqueda:

```{code-block} c
:linenos:
#include <stdbool.h>
bool buscar_par_suma(int arr[], int tam, int objetivo)
{
    // Busca si existe un par de números que sumen al objetivo
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (arr[i] + arr[j] == objetivo)
            {
                return true;
            }
        }
    }
    return false;
}
bool buscar_par_suma_optimizado(int arr[], int tam, int objetivo)
{
    // Versión con array ordenado (asumimos que está ordenado)
    int izq = 0;
    int der = tam - 1;
    while (izq < der)
    {
        int suma_actual = arr[izq] + arr[der];
        if (suma_actual == objetivo)
        {
            return true;
        }
        else if (suma_actual < objetivo)
        {
            izq++;
        }
        else
        {
            der--;
        }
    }
    return false;
}
```
<!-- {code-block} c -->

**Tarea**: 
1. ¿Cuál es la complejidad temporal de cada función?
2. ¿Cuáles son las variables de control y qué roles cumplen?
3. ¿En qué escenarios cada algoritmo sería más apropiado?

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {exercise} eficiencia_1 -->

:::{solution} eficiencia_1
:class: dropdown

**Análisis de `buscar_par_suma`:**
- **Complejidad temporal**: $O(n^2)$ - hay dos lazos anidados que recorren el
  array
- **Variables de control**: 
  - `i`: Iterador externo (rol: control de lazo principal)
  - `j`: Iterador interno (rol: control de lazo secundario, siempre j > i)
- **Complejidad espacial**: $O(1)$ - solo usa variables locales

**Análisis de `buscar_par_suma_optimizado`:**
- **Complejidad temporal**: $O(n)$ - cada elemento se visita máximo una vez
- **Variables de control**:
  - `izq`: Puntero izquierdo (rol: guardián del límite inferior)
  - `der`: Puntero derecho (rol: guardián del límite superior)
  - `suma_actual`: Variable temporal (rol: almacén de cálculo intermedio)
- **Complejidad espacial**: $O(1)$

**Escenarios apropiados:**
- **Primer algoritmo**: Cuando el array NO está ordenado y no podemos/queremos
  ordenarlo
- **Segundo algoritmo**: Cuando el array YA está ordenado o el costo de
  ordenarlo es amortizable

**Trade-offs:**
- Si necesitamos ordenar: $O(n log n) + O(n)$ vs $O(n^2)$
- Si ya está ordenado: $O(n)$ vs $O(n^2)$ - clara ventaja para el optimizado

:::
<!-- {solution} eficiencia_1 -->
