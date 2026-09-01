### Ejercicio 21.44 - Sustitución hacia adelante ⭐⭐☆☆☆

Resolver un sistema triangular inferior $Lx = b$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar estrictamente los datos de entrada para manejar
    valores fuera de rango o tipos inválidos.
-   **[*plus ultra*]:** Permitir el procesamiento interactivo continuo mediante
    un lazo hasta que el usuario elija finalizar.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double *sustitucion_adelante(double **L, double *b, int n);
```
<!-- c -->

**Algoritmo:** Resolver de arriba hacia abajo.
