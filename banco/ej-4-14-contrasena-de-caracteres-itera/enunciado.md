### Ejercicio 4.14 - Contraseña de caracteres iterativa ⭐⭐☆☆☆

Escribí un programa que solicite repetidamente una contraseña de caracteres al
usuario hasta que coincida con un valor establecido de acceso seguro.
:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Validar que los caracteres ingresados sean alfanuméricos.
-   **[*plus ultra*]:** Limpiar el buffer de entrada para evitar lecturas residuales.

:::
<!-- {hint} Lógica y Consideraciones -->

## Ejercicio 4.15 - Contar del 1 al 10 ⭐☆☆☆☆

Mostrá los números del 1 al 10 usando un lazo `for`.

**Orientación:**
- `for (int i = 1; i <= 10; i++)`
- Imprimí cada número en una línea


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Implementar el conteo utilizando tanto for como while para comparar la estructura.
-   **[*plus ultra*]:** Modularizar la impresión en una función.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.16 - Suma de N Números ⭐☆☆☆☆

Leé un número N y calculá la suma de los primeros N números naturales.

**Orientación:**
- Usá lazo `for` de 1 a N
- Acumulá la suma en una variable
- Alternativa: fórmula directa suma = N × (N+1) / 2


:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Validar que N sea un entero mayor o igual a 1.
-   **[*plus ultra*]:** Usar tipos enteros amplios para evitar desbordamientos en sumatorias grandes.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.17 - Tabla de Multiplicar ⭐⭐☆☆☆

Mostrá la tabla de multiplicar de un número ingresado por el usuario (1 a 10).

**Orientación:**
- Leé el número
- Lazo de 1 a 10: `printf("%d x %d = %d\n", num, i, num * i);`


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Formatear la tabla con columnas alineadas en la terminal.
-   **[*plus ultra*]:** Permitir generar la tabla hasta el multiplicador 20.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.18 - Factorial con While ⭐⭐☆☆☆

Calculá el factorial de N usando un lazo `while`.

**Orientación:**
- Inicializá resultado = 1, contador = N
- Mientras contador > 0: resultado *= contador, contador--
- Manejá caso especial: 0! = 1


:::{hint} Lógica y Consideraciones
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Validar que n sea no negativo y usar long long para el cálculo.
-   **[*plus ultra*]:** Detectar e informar si n produce desbordamiento de tipo.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.19 - Números Pares en Rango ⭐⭐☆☆☆

Mostrá todos los números pares entre dos valores ingresados.

**Orientación:**
- Leé inicio y fin
- Lazo de inicio a fin
- Usá `if (i % 2 == 0)` para detectar pares
- Alternativa: `for (i = inicio; i <= fin; i += 2)` empezando en par


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Manejar el caso donde el límite inferior sea mayor al superior intercambiándolos.
-   **[*plus ultra*]:** Calcular también el promedio de los números pares encontrados.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.20 - Suma hasta Cero ⭐⭐☆☆☆

Leé números enteros hasta que el usuario ingrese 0, luego mostrá la suma total.

**Orientación:**
- Usá `while (true)` o `do-while`
- Leé número
- Si es 0, `break`
- Caso contrario, sumá al acumulador


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Calcular simultáneamente la cantidad de números ingresados y su promedio.
-   **[*plus ultra*]:** Informar el número máximo y mínimo ingresados antes del cero.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.21 - Validación de Entrada ⭐⭐⭐☆☆

Leé un número entre 1 y 100. Si está fuera de rango, pedí nuevamente hasta que
sea válido.

**Orientación:**
- `do-while` es ideal aquí
- `do { leer numero } while (numero < 1 || numero > 100);`
- Mostrá mensaje de error en cada intento inválido


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Implementar una función de lectura reutilizable que repita la solicitud ante error.
-   **[*plus ultra*]:** Mostrar mensajes de error claros explicando el rango esperado.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.22 - Contar Dígitos ⭐⭐⭐☆☆

Contá cuántos dígitos tiene un número entero.

**Orientación:**
- Usá lazo `while (n > 0)`
- Dividí por 10 en cada iteración: `n /= 10`
- Incrementá contador
- Caso especial: 0 tiene 1 dígito


:::{hint} Lógica y Consideraciones
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Manejar correctamente el número cero y números negativos.
-   **[*plus ultra*]:** Calcular también la suma de todos los dígitos durante el recorrido.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.23 - Número Primo ⭐⭐⭐☆☆

Determiná si un número es primo probando divisibilidad.

**Orientación:**
- Si N <= 1: no primo
- Si N = 2: primo
- Probá divisores de 2 a √N
- Si alguno divide exacto: no primo
- Optimización: después del 2, probar solo impares


:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Comprobar números primos en pasos de dos después de evaluar el 2.
-   **[*plus ultra*]:** Mostrar los divisores encontrados si el número resulta compuesto.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.24 - Secuencia de Fibonacci ⭐⭐⭐☆☆

Generá los primeros N números de Fibonacci.

**Orientación:**
- Inicializá `a = 0, b = 1`
- Lazo N veces:
  - Mostrá `a`
  - Calculá siguiente: `temp = a + b; a = b; b = temp`


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Usar tipos enteros sin signo para extender el rango de términos calculables.
-   **[*plus ultra*]:** Calcular el cociente entre términos consecutivos de la sucesión.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.25 - Búsqueda en Array ⭐⭐⭐☆☆

Buscá un valor en un array. Si lo encontrás, mostrá su posición y `break`.

**Orientación:**
- Recorré array con `for`
- Compará cada elemento con el buscado
- Si coincide: guardá índice, `break`
- Después del lazo: verificá si se encontró


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que el tamaño del arreglo sea positivo.
-   **[*plus ultra*]:** Retornar el índice de la primera y última aparición del elemento.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.26 - Menú Interactivo ⭐⭐⭐☆☆

Implementá un menú que se repita hasta que el usuario elija "Salir".

**Orientación:**
- Lazo `while (opcion != SALIR)`
- Mostrá menú
- Leé opción
- `switch` para ejecutar acción
- Opción salir termina el lazo


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Manejar opciones inválidas mediante la cláusula default en switch.
-   **[*plus ultra*]:** Modularizar cada acción del menú en su propia función.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.27 - Mayor y Menor de N Números ⭐⭐⭐☆☆

Leé N números y encontrá el mayor y menor.

**Orientación:**
- Inicializá `mayor` y `menor` con el primer número
- Lazo desde el segundo número:
  - Si actual > mayor: actualizar mayor
  - Si actual < menor: actualizar menor


:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Validar que la cantidad N sea mayor a cero.
-   **[*plus ultra*]:** Informar las posiciones (índices) donde ocurrieron el máximo y el mínimo.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.28 - Invertir un Número ⭐⭐⭐⭐☆

Invertí los dígitos de un número (ej: 1234 → 4321).

**Orientación:**
- `invertido = 0`
- Mientras n > 0:
  - `digito = n % 10`
  - `invertido = invertido * 10 + digito`
  - `n /= 10`


:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Manejar números terminados en cero sin perder dígitos significativos.
-   **[*plus ultra*]:** Verificar si el número invertido coincide con el original (palíndromo).

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.29 - Números Perfectos ⭐⭐⭐⭐☆

Encontrá todos los números perfectos hasta N. Un número es perfecto si la suma
de sus divisores (excluyéndolo) es igual al número.

**Ejemplo:** 6 = 1 + 2 + 3

**Orientación:**
- Lazo externo: de 1 a N
- Lazo interno: encontrar divisores de 2 a n/2
- Sumá divisores
- Si suma == número: es perfecto


:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Optimizar la suma de divisores buscando factores en pares hasta sqrt(n).
-   **[*plus ultra*]:** Listar todos los números perfectos menores a 10000.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.30 - Patrón de Asteriscos - Triángulo ⭐⭐⭐⭐☆

Dibujá un triángulo de asteriscos de altura N.

**Ejemplo (N=5):**

:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Parametrizar el símbolo de dibujo.
-   **[*plus ultra*]:** Permitir dibujar el triángulo invertido o espejado.

:::
<!-- {hint} Lógica y Consideraciones -->

```
*
**
***
****
*****
```

**Orientación:**
- Lazo externo: filas (1 a N)
- Lazo interno: columnas (1 a fila_actual)
- Imprimí asterisco en cada columna
- Nueva línea después de cada fila

---
## Ejercicio 4.31 - Máximo Común Divisor (Euclides) ⭐⭐⭐⭐☆

Implementá el algoritmo de Euclides iterativo para calcular MCD.

**Algoritmo:**

:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Implementar el algoritmo de Euclides iterativo con divisiones y con restas.
-   **[*plus ultra*]:** Verificar que mcd(a, 0) == a.

:::
<!-- {hint} Lógica y Consideraciones -->

```
mientras b != 0:
    temp = b
    b = a % b
    a = temp
retornar a
```

**Orientación:**
- Usá lazo `while (b != 0)`
- Guardá resto en variable temporal
- Intercambiá valores

---
## Ejercicio 4.32 - Número de Armstrong ⭐⭐⭐⭐☆

Determiná si un número es Armstrong (suma de sus dígitos elevados a la cantidad
de dígitos igual al número).

**Ejemplo:** 153 = 1³ + 5³ + 3³ = 153

**Orientación:**
- Primer lazo: contar dígitos
- Segundo lazo: sumar dígitos elevados a esa potencia
- Comparar suma con número original
- Usá `pow()` de `<math.h>`


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Determinar automáticamente la cantidad de cifras del número.
-   **[*plus ultra*]:** Encontrar todos los números de Armstrong en el rango [1, 1000].

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.33 - Simulación de Cajero Automático ⭐⭐⭐⭐⭐

Simulá un cajero con saldo inicial. Menú: depositar, retirar, consultar, salir.

**Requisitos:**
- No permitir retiros mayores al saldo
- Validar montos positivos
- Mostrar saldo después de cada operación
- Lazo hasta que elija salir

**Orientación:**
- Variable `saldo` inicial
- Lazo principal con menú
- `switch` para operaciones
- Validaciones antes de modificar saldo


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que el monto a retirar sea múltiplo de 100 y no exceda el saldo.
-   **[*plus ultra*]:** Simular un límite diario de extracciones con variables de control.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicio 4.34 - Criba de Eratóstenes ⭐⭐⭐⭐⭐

Encontrá todos los números primos hasta N usando la Criba de Eratóstenes.

**Algoritmo:**
1. Creá array booleano de tamaño N+1, todos en `true`
2. Marcá 0 y 1 como no primos
3. Para cada número i de 2 a √N:
   - Si i es primo (marcado `true`):
     - Marcá todos sus múltiplos como no primos
4. Los que quedaron en `true` son primos

**Orientación:**
- Array: `bool es_primo[N+1]`
- Lazo externo: `i` de 2 a √N
- Lazo interno: múltiplos de `i` (desde i², incrementando de i en i)
- Mostrá todos los marcados como primos


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Implementar la criba usando un arreglo estático de booleanos.
-   **[*plus ultra*]:** Contar la cantidad total de primos generados.

:::
<!-- {hint} Lógica y Consideraciones -->

---
## Ejercicios Adicionales de Patrones

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->
