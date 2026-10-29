### Ejercicio 27.1 - b.1 - Obtener el n-ésimo bit ⭐⭐⭐⭐☆

Escribir una función `int get_bit(int numero, int n)` que devuelva el valor del
bit en la posición `n` de un número (0 o 1).

:::{hint} Lógica y Consideraciones

- **Proceso**: Crear una máscara desplazando un 1 `n` posiciones a la izquierda
  (`1 << n`). Luego, aplicar un AND a nivel de bits entre el número y la
  máscara. Si el resultado no es cero, el bit estaba encendido.
- `(numero & (1 << n)) != 0`

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->
