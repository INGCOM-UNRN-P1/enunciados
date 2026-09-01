### Ejercicio 21.25 - Traza de matriz ⭐⭐⭐☆☆

Calcular la traza de una matriz cuadrada (suma de elementos de la diagonal
principal).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double traza(double **matriz, int n);
```
<!-- c -->

$$\text{tr}(A) = \sum_{i=1}^n a_{ii}$$
