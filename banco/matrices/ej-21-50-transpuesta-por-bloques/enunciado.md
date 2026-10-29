### Ejercicio 21.50 - Transpuesta por bloques ⭐⭐☆☆☆

Implementar transpuesta usando bloques para mejor localidad de caché.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void transponer_bloques(double **matriz, int n, int tam_bloque);
```
<!-- c -->
