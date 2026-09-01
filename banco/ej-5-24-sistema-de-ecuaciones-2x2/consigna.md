# Sistema de Ecuaciones 2x2

## Ejercicio 5.24 - Sistema de Ecuaciones 2x2 ⭐⭐⭐⭐⭐

Implementá funciones modulares para resolver y verificar sistemas de ecuaciones lineales 2×2 mediante la regla de Cramer:

:::{hint} Lógica y Consideraciones
    evitar fallos de segmentación.
    punteros en lugar de indexación directa.

-   **[*plus ultra*]:** Modularizar el cálculo del determinante en una función auxiliar pura.
-   **[*plus ultra*]:** Escribir pruebas con assert() verificando sistemas con solución única y sistemas sin solución (det == 0).

:::
<!-- {hint} Lógica y Consideraciones -->

```
a₁x + b₁y = c₁
a₂x + b₂y = c₂
```

Implementá:
- `bool resolver_sistema(double a1, double b1, double c1, 
                          double a2, double b2, double c2,
                          double *x, double *y)`

**Orientación:**
- Usá método de Cramer
- Calculá determinante: det = a1×b2 - a2×b1
- Si det = 0, sistema sin solución única
- x = (c1×b2 - c2×b1) / det
- y = (a1×c2 - a2×c1) / det
- Retorná un código booleano indicando si el determinante es no nulo y el sistema tiene solución única

---

## Notas Finales

:::{tip} Diseño de Funciones

- **Una responsabilidad:** Cada función debe hacer una sola cosa bien
- **Nombres descriptivos:** `calcular_promedio` en lugar de `calc`
- **Parámetros mínimos:** No más de 3-4 parámetros si es posible
- **Retorno significativo:** `bool` para éxito/fallo, valores cuando calculás
  algo
- **Sin efectos laterales:** Evitá modificar variables globales

:::
<!-- {tip} Diseño de Funciones -->

:::{note} Documentación

Cada función debe tener:
- Descripción de qué hace
- Descripción de parámetros
- Descripción del valor de retorno
- Precondiciones (qué debe ser cierto antes de llamarla)
- Postcondiciones (qué garantiza después de ejecutarse)

:::
<!-- {note} Documentación -->

Estas consignas practican modularización, reutilización, paso de parámetros y
diseño de interfaces de funciones.