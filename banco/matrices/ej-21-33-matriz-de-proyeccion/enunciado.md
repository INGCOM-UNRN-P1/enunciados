### Ejercicio 21.33 - Matriz de proyección ⭐⭐⭐☆☆

Crear matriz de proyección ortogonal sobre un vector.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_proyeccion(double *vector, int n);
```
<!-- c -->

**Fórmula:** $P = \frac{vv^T}{v^Tv}$

## Algoritmos de Procesamiento de Imágenes

Considerar una matriz como una imagen en escala de grises donde cada elemento
representa la intensidad de un píxel.
