### Ejercicio 21.42 - Matriz circulante ⭐⭐⭐☆☆

Generar una matriz circulante a partir de su primera fila.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int **matriz_circulante(int *primera_fila, int n);
```
<!-- c -->

**Ejemplo con primera fila $[1, 2, 3, 4]$:**
$$C = \begin{pmatrix} 1 & 2 & 3 & 4 \\ 4 & 1 & 2 & 3 \\ 3 & 4 & 1 & 2 \\ 2 & 3 & 4 & 1 \end{pmatrix}$$
