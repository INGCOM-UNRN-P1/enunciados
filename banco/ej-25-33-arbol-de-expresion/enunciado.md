### Ejercicio 25.33 - Árbol de Expresión ⭐⭐⭐⭐⭐

Evaluá una expresión matemática representada como árbol binario.

**Orientación:**
- Nodos hoja: números
- Nodos internos: operadores (+, -, *, /)
- Evaluación postorden: evaluar izquierdo, derecho, aplicar operador


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Notas Finales

:::{tip} Anatomía de una Función Recursiva

1. **Caso(s) Base:** Condición de terminación
2. **Caso Recursivo:** Llamada a sí misma con problema más pequeño
3. **Convergencia:** Cada llamada debe acercar al caso base

```{code-block} c
:linenos:
int funcion_recursiva(parametros)
{
    // 1. Caso base
    if (condicion_terminacion)
    {
        return valor_base;
    }
    // 2. Caso recursivo
    // Procesar actual
    // Llamada recursiva con problema reducido
    return combinar(procesar_actual, funcion_recursiva(problema_mas_pequeno));
}
```
<!-- {code-block} c -->

:::
<!-- {tip} Anatomía de una Función Recursiva -->

:::{warning} Peligros de la Recursión

1. **Stack Overflow:**
   - Recursión muy profunda consume toda la pila
   - Límite típico: ~1000-10000 llamadas
   - Solución: iteración o tail recursion

2. **Duplicación de Trabajo:**
   - Fibonacci naive: recalcula subproblemas
   - Solución: memoización o programación dinámica

3. **Overhead:**
   - Cada llamada tiene costo (guardar estado)
   - Para problemas simples, iteración es más eficiente

4. **Difícil de Debuggear:**
   - Stack trace largo y confuso
   - Usá prints para ver qué está pasando

:::
<!-- {warning} Peligros de la Recursión -->

:::{note} Tipos de Recursión

**Recursión Simple:**
``` c
int suma(int n)
{
    if (n == 0)
        return 0;
    return n + suma(n - 1); // Una llamada recursiva
}
```
<!-- c -->

**Recursión Múltiple:**
``` c
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // Dos llamadas
}
```
<!-- c -->

**Recursión de Cola (Tail Recursion):**
``` c
int suma_tail(int n, int acumulador)
{
    if (n == 0)
        return acumulador;
    return suma_tail(n - 1, acumulador + n); // Llamada al final
}
// Puede optimizarse a lazo por el compilador
```
<!-- c -->

**Recursión Mutua:**
```{code-block} c
:linenos:
bool es_par(int n);
bool es_impar(int n);
bool es_par(int n)
{
    if (n == 0)
        return true;
    return es_impar(n - 1);
}
bool es_impar(int n)
{
    if (n == 0)
        return false;
    return es_par(n - 1);
}
```
<!-- {code-block} c -->

:::
<!-- {note} Tipos de Recursión -->

:::{tip} Divide y Conquista

Patrón común en recursión:

1. **Divide:** Partir problema en subproblemas
2. **Conquista:** Resolver subproblemas recursivamente
3. **Combina:** Unir soluciones de subproblemas

**Ejemplos:**
- MergeSort: dividir array, ordenar mitades, fusionar
- QuickSort: particionar, ordenar particiones
- Búsqueda binaria: dividir rango, buscar en mitad apropiada

**Complejidad típica:** O(n log n) para n elementos

:::
<!-- {tip} Divide y Conquista -->

:::{note} Recursión vs Iteración

| Aspecto | Recursión | Iteración |
|---------|-----------|-----------|
| Claridad | Más natural para problemas recursivos | Puede ser más verbosa |
| Memoria | Usa stack (limitado) | Usa variables locales |
| Velocidad | Overhead de llamadas | Generalmente más rápida |
| Debugging | Más difícil | Más fácil |

**Cuándo usar recursión:**
- Problema naturalmente recursivo (árboles, grafos)
- Código más claro y conciso
- Profundidad manejable

**Cuándo usar iteración:**
- Muchas iteraciones (riesgo de stack overflow)
- Performance crítica
- Problema naturalmente iterativo

:::
<!-- {note} Recursión vs Iteración -->

:::{tip} Optimización con Memoización

**Patrón:**
```{code-block} c
:linenos:
#define MAX 1000
int memo[MAX];
void inicializar()
{
    for (int i = 0; i < MAX; i++)
        memo[i] = -1;
}
int funcion(int n)
{
    if (n <= caso_base)
        return valor_base;
    if (memo[n] != -1)
        return memo[n];    // Ya calculado
    memo[n] = calcular(n); // Calcular y cachear
    return memo[n];
}
```
<!-- {code-block} c -->

**Ventaja:** Evita recalcular subproblemas
**Ejemplo:** Fibonacci de O(2^n) a O(n)

:::
<!-- {tip} Optimización con Memoización -->

Estas consignas cubren desde recursión básica hasta algoritmos avanzados de
backtracking y divide y conquista, desarrollando pensamiento recursivo esencial.
