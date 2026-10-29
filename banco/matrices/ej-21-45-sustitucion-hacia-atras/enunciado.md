### Ejercicio 21.45 - Sustitución hacia atrás ⭐⭐☆☆☆

Resolver un sistema triangular superior $Ux = b$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double *sustitucion_atras(double **U, double *b, int n);
```
<!-- c -->

**Algoritmo:** Resolver de abajo hacia arriba.
