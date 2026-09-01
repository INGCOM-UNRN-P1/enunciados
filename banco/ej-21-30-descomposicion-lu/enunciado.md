### Ejercicio 21.30 - Descomposición LU ⭐⭐☆☆☆

Implementar la descomposición LU de una matriz: $A = LU$ donde $L$ es triangular
inferior y $U$ es triangular superior.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool descomposicion_lu(double **A, int n, double **L, double **U);
```
<!-- c -->

**Aplicación:** Resolver sistemas de ecuaciones lineales eficientemente.
