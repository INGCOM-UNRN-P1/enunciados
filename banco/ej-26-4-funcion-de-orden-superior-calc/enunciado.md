### Ejercicio 26.4 - Función de Orden Superior (Calculadora) ⭐⭐☆☆☆

Escribir una función `int calculadora(int a, int b, operacion_aritmetica_t
operacion)` que reciba dos números y un puntero a una función de operación. La
función `calculadora` debe invocar la función pasada como argumento y devolver
su resultado.

**Lógica y Consideraciones:**
- **Invocación**: Dentro de `calculadora`, se llama a la función a través del
  puntero: `return operacion(a, b);`.
- **Uso**: En `main`, se pueden definir funciones `sumar(int, int)` y
  `restar(int, int)` y pasarlas a `calculadora`.
  - `calculadora(10, 5, sumar);` // Devuelve 15
  - `calculadora(10, 5, restar);` // Devuelve 5
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
