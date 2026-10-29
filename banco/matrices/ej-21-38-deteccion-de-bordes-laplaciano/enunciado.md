### Ejercicio 21.38 - Detección de bordes (Laplaciano) ⭐⭐☆☆☆

Aplicar el operador Laplaciano para detectar bordes.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void detectar_bordes_laplaciano(int **imagen, int filas, int cols,
                                int **resultado);
```
<!-- c -->

**Kernel Laplaciano:**
$$K = \begin{pmatrix} 0 & 1 & 0 \\ 1 & -4 & 1 \\ 0 & 1 & 0 \end{pmatrix}$$

## Matrices Especiales
