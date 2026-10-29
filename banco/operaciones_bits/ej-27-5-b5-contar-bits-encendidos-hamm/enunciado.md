### Ejercicio 27.5 - b.5 - Contar bits encendidos (Hamming Weight) ⭐⭐⭐⭐☆

Implementar una función que cuente el número de bits que están en 1 en la
representación binaria de un número.

:::{hint} Lógica y Consideraciones

- **Algoritmo de Brian Kernighan**: En un lazo, mientras el número no sea cero,
  aplicar la operación `n = n & (n - 1)`. Esta operación apaga el bit encendido
  menos significativo en cada iteración. El número de iteraciones es el número
  de bits encendidos.

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->
