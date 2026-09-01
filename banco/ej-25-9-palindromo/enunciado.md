### Ejercicio 25.9 - Palíndromo ⭐⭐☆☆☆

Implementar una función recursiva que determine si una cadena es un palíndromo.
Un palíndromo se lee igual en ambos sentidos.

**Lógica recursiva:** Una cadena es un palíndromo si:
1. Su primer y último carácter son iguales, Y
2. La subcadena entre ellos también es un palíndromo.

**Caso Base:** Una cadena vacía o de un solo carácter es un palíndromo.

**Ejemplo:** `neuquen`
- `es_palindromo("neuquen")` es verdadero.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

## Ejercicio 25.10 - Factorial Recursivo ⭐☆☆☆☆

Implementá factorial de forma recursiva.

**Orientación:**
- Caso base: `n <= 1` retorna 1
- Caso recursivo: `n * factorial(n-1)`
- Limitación: rápido overflow para n grande


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Transformar el algoritmo a una versión con recursión de
    cola (*tail recursion*) para reducir el consumo de pila.
-   **[*plus ultra*]:** Añadir un contador del número de llamadas recursivas
    realizadas para analizar la complejidad empírica.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.11 - Potencia Recursiva ⭐⭐☆☆☆

Calculá base^exponente recursivamente.

**Orientación:**
- Caso base: `exp == 0` retorna 1
- Caso recursivo: `base * potencia(base, exp-1)`
- Versión mejorada (siguiente ejercicio)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Transformar el algoritmo a una versión con recursión de
    cola (*tail recursion*) para reducir el consumo de pila.
-   **[*plus ultra*]:** Añadir un contador del número de llamadas recursivas
    realizadas para analizar la complejidad empírica.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.12 - Potencia Rápida ⭐⭐⭐☆☆

Optimizá potencia usando divide y conquista.

**Algoritmo:**
- Si exp es par: `potencia(base, exp) = potencia(base*base, exp/2)`
- Si exp es impar: `potencia(base, exp) = base * potencia(base, exp-1)`

**Orientación:**
- Complejidad: O(log n) en lugar de O(n)
- Mucho más eficiente para exponentes grandes


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.13 - Suma de Dígitos ⭐⭐☆☆☆

Sumá los dígitos de un número recursivamente.

**Orientación:**
- Caso base: `n < 10` retorna n
- Caso recursivo: `(n % 10) + suma_digitos(n / 10)`


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Transformar el algoritmo a una versión con recursión de
    cola (*tail recursion*) para reducir el consumo de pila.
-   **[*plus ultra*]:** Añadir un contador del número de llamadas recursivas
    realizadas para analizar la complejidad empírica.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.14 - Invertir String ⭐⭐☆☆☆

Invertí un string recursivamente.

**Orientación:**
- Caso base: string vacío o de 1 carácter
- Caso recursivo: último carácter + invertir(resto)
- Pensá en índices: `invertir(str, inicio, fin)`


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.15 - Fibonacci Recursivo ⭐⭐⭐☆☆

Calculá el n-ésimo número de Fibonacci.

**Orientación:**
- Caso base: `n <= 1` retorna n
- Caso recursivo: `fib(n-1) + fib(n-2)`
- **Advertencia:** Muy ineficiente (exponencial) para n grande


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Transformar el algoritmo a una versión con recursión de
    cola (*tail recursion*) para reducir el consumo de pila.
-   **[*plus ultra*]:** Añadir un contador del número de llamadas recursivas
    realizadas para analizar la complejidad empírica.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.16 - Fibonacci con Memoización ⭐⭐⭐⭐☆

Optimizá Fibonacci usando memoización (caché de resultados).

**Orientación:**
- Array global `memo[MAX]` inicializado en -1
- Antes de calcular: `if (memo[n] != -1) return memo[n]`
- Después de calcular: `memo[n] = resultado`
- Complejidad: de O(2^n) a O(n)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.17 - Suma de Array ⭐⭐☆☆☆

Sumá elementos de un array recursivamente.

**Orientación:**
- Caso base: array vacío (`n == 0`) retorna 0
- Caso recursivo: `arr[0] + suma(arr+1, n-1)`
- O con índices: `arr[i] + suma(arr, i+1, n)`


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.18 - Búsqueda Binaria Recursiva ⭐⭐⭐☆☆

Implementá búsqueda binaria de forma recursiva.

**Orientación:**
- Caso base: rango vacío (`inicio > fin`) retorna -1
- Calcular `medio = (inicio + fin) / 2`
- Si `arr[medio] == objetivo`: retornar medio
- Si `arr[medio] > objetivo`: buscar en mitad izquierda
- Si `arr[medio] < objetivo`: buscar en mitad derecha


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.19 - Máximo en Array ⭐⭐⭐☆☆

Encontrá el máximo de un array recursivamente.

**Orientación:**
- Caso base: array de 1 elemento retorna ese elemento
- Caso recursivo: `max(arr[0], maximo(arr+1, n-1))`
- Divide y conquista: dividir en mitades y comparar máximos


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.20 - Palíndromo Recursivo ⭐⭐⭐☆☆

Verificá si un string es palíndromo recursivamente.

**Orientación:**
- Caso base: string vacío o de 1 carácter: true
- Comparar primer y último carácter
- Si iguales: recursión en substring sin extremos
- Si diferentes: false


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.21 - Torre de Hanoi ⭐⭐⭐⭐☆

Resolvé el problema de la Torre de Hanoi.

**Reglas:**
- Mover N discos de origen a destino usando auxiliar
- Solo un disco a la vez
- Nunca poner disco grande sobre uno pequeño

**Orientación:**

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
void hanoi(int n, char origen, char destino, char auxiliar)
{
    if (n == 1)
    {
        mover(origen, destino);
    }
    else
    {
        hanoi(n - 1, origen, auxiliar, destino);
        mover(origen, destino);
        hanoi(n - 1, auxiliar, destino, origen);
    }
}
```
<!-- {code-block} c -->

---
## Ejercicio 25.22 - Permutaciones ⭐⭐⭐⭐⭐

Generá todas las permutaciones de un string.

**Orientación:**
- Para cada posición, probá cada carácter restante
- Intercambiá carácter actual con cada uno de los siguientes
- Recursión en resto del string
- Al retornar, deshacé el intercambio (backtracking)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.23 - Subconjuntos (Power Set) ⭐⭐⭐⭐⭐

Generá todos los subconjuntos de un conjunto.

**Orientación:**
- Para cada elemento: está o no está en el subconjunto
- Dos llamadas recursivas: con elemento y sin elemento
- Caso base: conjunto vacío
- Total: 2^n subconjuntos


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.24 - MergeSort ⭐⭐⭐⭐⭐

Implementá ordenamiento MergeSort.

**Algoritmo:**
1. Dividir array en dos mitades
2. Ordenar recursivamente cada mitad
3. Fusionar (merge) las mitades ordenadas

**Orientación:**
- Caso base: array de 0 o 1 elemento
- Función auxiliar `merge` para fusionar
- Complejidad: O(n log n)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.25 - QuickSort ⭐⭐⭐⭐⭐

Implementá ordenamiento QuickSort.

**Algoritmo:**
1. Elegir pivote
2. Particionar: menores a izquierda, mayores a derecha
3. Ordenar recursivamente cada partición

**Orientación:**
- Caso base: array de 0 o 1 elemento
- Función `particionar` retorna posición del pivote
- Complejidad promedio: O(n log n)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.26 - N Reinas ⭐⭐⭐⭐⭐

Resolvé el problema de las N reinas (colocar N reinas en tablero N×N sin que se
ataquen).

**Orientación:**
- Colocá reina fila por fila
- Para cada fila, probá cada columna
- Verificá si la posición es segura (no ataca a otras)
- Si llegás a la última fila: solución encontrada
- Backtracking si no hay posición válida


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.27 - Laberinto (Path Finding) ⭐⭐⭐⭐⭐

Encontrá camino en un laberinto desde inicio a fin.

**Orientación:**
- Matriz de 0s (libre) y 1s (pared)
- Desde posición actual, probá 4 direcciones (arriba, abajo, izq, der)
- Marcá visitados para evitar ciclos
- Si llegás a destino: true
- Backtracking: desmarcá visitado al retornar


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.28 - Combinaciones (n choose k) ⭐⭐⭐⭐⭐

Generá todas las combinaciones de k elementos de un conjunto de n.

**Orientación:**
- Elegir elemento actual o no elegirlo
- Si elegís: k-1 elementos restantes
- Si no elegís: k elementos de n-1 restantes
- Caso base: k==0 (solución completa) o n<k (imposible)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.29 - Sudoku Solver ⭐⭐⭐⭐⭐

Resolvé un Sudoku usando backtracking.

**Orientación:**
- Encontrá primera celda vacía
- Probá números del 1 al 9
- Para cada número, verificá si es válido (fila, columna, subcuadro 3×3)
- Si válido: colocá número, recursión en siguiente celda
- Si recursión falla: deshacé (backtracking), probá siguiente número
- Caso base: no hay celdas vacías (solución encontrada)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Transformar el algoritmo a una versión con recursión de
    cola (*tail recursion*) para reducir el consumo de pila.
-   **[*plus ultra*]:** Añadir un contador del número de llamadas recursivas
    realizadas para analizar la complejidad empírica.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 25.30 - s Adicionales ⭐⭐☆☆☆

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->
