### Ejercicio 21.40 - Matriz de Hilbert ⭐⭐⭐☆☆

Generar una matriz de Hilbert de orden $n$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_hilbert(int n);
```
<!-- c -->

**Definición:** $H_{ij} = \frac{1}{i+j-1}$

**Nota:** Las matrices de Hilbert son notoriamente mal condicionadas para
inversión.
