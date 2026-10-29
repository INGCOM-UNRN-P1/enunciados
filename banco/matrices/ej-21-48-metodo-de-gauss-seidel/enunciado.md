### Ejercicio 21.48 - Método de Gauss-Seidel ⭐⭐☆☆☆

Similar a Jacobi pero usa valores actualizados inmediatamente.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double *metodo_gauss_seidel(double **A, double *b, int n, double tolerancia,
                            int max_iter);
```
<!-- c -->

**Converge más rápido que Jacobi** para matrices con diagonal dominante.

## Operaciones Matriciales con Bloques
