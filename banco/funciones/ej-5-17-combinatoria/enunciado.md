# Combinatoria

## Ejercicio 5.17 - Combinatoria ⭐⭐⭐⭐☆

Implementá funciones modulares para el cálculo de combinatoria:
- `long long combinaciones(int n, int k);` — Calcula el número combinatorio $C(n, k) = \frac{n!}{k!(n-k)!}$.
- `long long permutaciones(int n, int k);` — Calcula las permutaciones $P(n, k) = \frac{n!}{(n-k)!}$.

**Orientación:**
- Optimizá el cálculo de $C(n, k)$ simplificando factores para evitar calcular factoriales completos que desborden rápidamente la representación entera.
- Utilizá el tipo `long long` para los resultados (y las operaciones intermedias).
- Si `k < 0` o `k > n`, retornar `0`. Si `k == 0` o `k == n`, $C(n, k) = 1$.
- Las funciones deben ser puras (sin llamadas a `printf` ni `scanf`, Regla 0x2002h).

:::{hint} Lógica y Consideraciones
- Propiedad de simetría: $C(n, k) = C(n, n-k)$. Podés hacer `if (k > n / 2) k = n - k;` para reducir iteraciones.
- Documentá las precondiciones ($0 \le k \le n$) y postcondiciones con Doxygen estructurado (Regla 0x2003h).

-   **[*plus ultra*]:** Prevenir desbordamientos intermedios multiplicando y dividiendo progresivamente en cada paso del lazo.
-   **[*plus ultra*]:** Validar las precondiciones con assert() en casos de prueba en `main()`.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_18)=
