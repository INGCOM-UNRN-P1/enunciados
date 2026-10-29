### Ejercicio 27.6 - b.6 - Verificar si es potencia de dos ⭐⭐☆☆☆

Escribir una función que determine si un número entero positivo es una potencia
de dos (ej. 2, 4, 8, 16...).

:::{hint} Lógica y Consideraciones

- **Propiedad**: Un número `n` que es potencia de dos tiene exactamente un bit
  encendido en su representación binaria. El número `n-1` tendrá todos los bits
  a la derecha de ese bit encendidos. Por lo tanto, `n & (n - 1)` será siempre
  cero.
- **Condición**: `n > 0 && (n & (n - 1)) == 0`

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->
