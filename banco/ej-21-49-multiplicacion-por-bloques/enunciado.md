### Ejercicio 21.49 - Multiplicación por bloques ⭐⭐☆☆☆

Implementar multiplicación de matrices usando el algoritmo por bloques (más
eficiente para matrices grandes por mejor uso de caché).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **multiplicar_bloques(double **A, double **B, int n, int tam_bloque);
```
<!-- c -->
