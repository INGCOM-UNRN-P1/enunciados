# Validación de Entrada

## Ejercicio 5.10 - Validación de Entrada ⭐⭐⭐☆☆

Implementá funciones modulares y puras de validación que reciban valores por parámetro y retornen un resultado booleano (`true` o `false` según `<stdbool.h>`):

- `bool validar_rango(int valor, int min, int max);` — Valida si `valor` se encuentra dentro del rango `[min, max]` (inclusivo).
- `bool validar_positivo(double valor);` — Valida si `valor` es estrictamente mayor que cero (`valor > 0.0`).

**Orientación:**
- Las funciones deben ser puras (sin llamadas a `printf` ni `scanf`, respetando la Regla 0x2002h).
- Incluí `<stdbool.h>` para utilizar el tipo `bool` y las constantes `true` y `false`.
- Podés probar su funcionamiento desde `main()` mediante aserciones con `assert()`.

:::{hint} Lógica y Consideraciones
- `validar_rango`: debe verificar que `valor >= min && valor <= max`.
- `validar_positivo`: debe verificar que `valor > 0.0`.
- Documentá los contratos y parámetros con Doxygen estructurado (Regla 0x2003h).

-   **[*plus ultra*]:** Verificar que `min <= max` como precondición defensiva.
-   **[*plus ultra*]:** Escribir una suite completa de pruebas con assert() para valores límite (borde inferior, superior y fuera de rango).

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_11)=
