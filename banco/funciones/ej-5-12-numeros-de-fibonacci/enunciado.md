# Números de Fibonacci

## Ejercicio 5.12 - Números de Fibonacci ⭐⭐⭐☆☆

Implementá la función:
- `int fibonacci(int n);` — Retorna el n-ésimo número de la sucesión de Fibonacci.

Convención:
- `fibonacci(0) = 0`
- `fibonacci(1) = 1`
- `fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2)` para `n >= 2`.

**Orientación:**
- Podés implementarla de forma iterativa o recursiva. Para valores moderados (`n > 40`), la solución iterativa es considerablemente más eficiente.
- La función no debe contener llamadas a `printf` ni `scanf` (Regla 0x2002h).

:::{hint} Lógica y Consideraciones
- Si `n <= 0`, retornar `0`.
- Documentá la precondición (`n >= 0`) y postcondición con Doxygen (Regla 0x2003h).

-   **[*plus ultra*]:** Usar tipos enteros de 64 bits (`long long` o `uint64_t`) para permitir el cálculo de términos superiores.
-   **[*plus ultra*]:** Escribir pruebas unitarias con assert() verificando los primeros 10 términos de la sucesión.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_13)=
