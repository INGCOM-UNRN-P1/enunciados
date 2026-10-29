### Ejercicio 27.3 - b.3 - Limpiar el n-ésimo bit (Clear) ⭐⭐⭐⭐☆

Escribir una función `int clear_bit(int numero, int n)` que apague (ponga en 0)
el bit en la posición `n`.

:::{hint} Lógica y Consideraciones

- **Proceso**: Crear la máscara (`1 << n`), invertirla con el operador NOT
  (`~`), y luego aplicar un AND a nivel de bits. La máscara invertida tendrá
  ceros solo en la posición `n`.
- `numero = numero & ~(1 << n);`

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->
