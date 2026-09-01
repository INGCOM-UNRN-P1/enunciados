# Máximo Común Divisor (MCD)

## Ejercicio 5.11 - Máximo Común Divisor (MCD) ⭐⭐⭐☆☆

Implementá el algoritmo de Euclides para calcular MCD.

**Algoritmo:**

:::{hint} Lógica y Consideraciones
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Implementar una función auxiliar para calcular el Mínimo Común Múltiplo (MCM).
-   **[*plus ultra*]:** Escribir pruebas unitarias con assert() verificando propiedades como mcd(a, b) == mcd(b, a).

:::
<!-- {hint} Lógica y Consideraciones -->

```
mcd(a, b) = mcd(b, a % b)  si b != 0
mcd(a, 0) = a
```

**Orientación:**
- Implementá versión recursiva e iterativa
- Agregá función `mcm(a, b)` usando: mcm = (a * b) / mcd(a, b)

---
(ejercicio_5_12)=