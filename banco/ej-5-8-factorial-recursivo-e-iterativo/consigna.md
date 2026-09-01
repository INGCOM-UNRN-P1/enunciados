# Factorial Recursivo e Iterativo

## Ejercicio 5.8 - Factorial Recursivo e Iterativo ⭐⭐☆☆☆

Implementá dos versiones de la función factorial:
- `int factorial_iterativo(int n);`
- `int factorial_recursivo(int n);`

**Orientación:**
- Iterativo: usá un lazo `for` o `while` acumulando el producto.
- Recursivo: `n * factorial_recursivo(n - 1)`, con caso base `n <= 1` retornando `1`.
- Si `n < 0`, retornar `-1` como código de error.

:::{hint} Lógica y Consideraciones
- El factorial de 0 y de 1 es 1 (`0! = 1`, `1! = 1`).
- Asegurate de documentar ambas funciones con Doxygen (Regla 0x2003h).

-   **[*plus ultra*]:** Validar que n >= 0 retornando -1 en caso de error y usar `long long` para el resultado.
-   **[*plus ultra*]:** Escribir pruebas unitarias con assert() comparando que ambas versiones produzcan exactamente el mismo resultado.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_9)=
