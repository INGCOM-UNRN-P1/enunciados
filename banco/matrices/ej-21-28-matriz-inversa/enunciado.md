### Ejercicio 21.28 - Matriz inversa ⭐⭐⭐☆☆

Implementar el cálculo de la inversa de una matriz usando el método de
Gauss-Jordan.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_inversa(double **matriz, int n, bool *invertible);
```
<!-- c -->

**Algoritmo:**
1. Crear matriz aumentada $[A | I]$
2. Aplicar eliminación Gauss-Jordan
3. Si se obtiene $[I | A^{-1}]$, retornar $A^{-1}$
4. Si no es posible, la matriz no es invertible
