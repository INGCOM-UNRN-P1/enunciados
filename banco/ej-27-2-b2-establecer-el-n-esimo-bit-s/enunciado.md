### Ejercicio 27.2 - b.2 - Establecer el n-ésimo bit (Set) ⭐⭐⭐⭐☆

Escribir una función `int set_bit(int numero, int n)` que encienda (ponga en 1)
el bit en la posición `n` sin alterar los demás.

:::{hint} Lógica y Consideraciones

- **Proceso**: Crear la misma máscara (`1 << n`) y aplicar un OR a nivel de bits
  entre el número y la máscara.
- `numero = numero | (1 << n);`

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->
