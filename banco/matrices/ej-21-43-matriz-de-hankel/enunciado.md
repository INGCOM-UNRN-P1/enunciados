### Ejercicio 21.43 - Matriz de Hankel ⭐⭐⭐☆☆

Generar una matriz de Hankel (opuesta a Toeplitz: diagonales de arriba-derecha a
abajo-izquierda son constantes).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_hankel(double *c, double *r, int n);
```
<!-- c -->

## Resolución de Sistemas de Ecuaciones
