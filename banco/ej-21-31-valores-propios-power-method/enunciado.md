### Ejercicio 21.31 - Valores propios (Power Method) ⭐⭐☆☆☆

Implementar el método de la potencia para calcular el valor propio dominante de
una matriz.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double valor_propio_dominante(double **matriz, int n, double tolerancia);
```
<!-- c -->

**Algoritmo:**
1. Comenzar con vector aleatorio $v$
2. Iterar: $v_{k+1} = \frac{Av_k}{||Av_k||}$
3. El valor propio es $\lambda = v^T A v$
