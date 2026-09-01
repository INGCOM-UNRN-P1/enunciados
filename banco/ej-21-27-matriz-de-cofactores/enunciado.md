### Ejercicio 21.27 - Matriz de cofactores ⭐⭐⭐☆☆

Calcular la matriz de cofactores para una matriz cuadrada.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_cofactores(double **matriz, int n);
```
<!-- c -->

El cofactor $C_{ij}$ se calcula como: $C_{ij} = (-1)^{i+j} M_{ij}$ donde
$M_{ij}$ es el menor de la matriz (determinante de la submatriz obtenida
eliminando fila $i$ y columna $j$).
