### Ejercicio 21.46 - Eliminación gaussiana completa ⭐⭐☆☆☆

Implementar eliminación gaussiana con pivoteo completo para resolver $Ax = b$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double *resolver_sistema(double **A, double *b, int n);
```
<!-- c -->
