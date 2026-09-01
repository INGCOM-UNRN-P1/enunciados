### Ejercicio 21.41 - Matriz de Toeplitz ⭐⭐⭐☆☆

Verificar si una matriz es de Toeplitz (cada diagonal descendente de izquierda a
derecha tiene valores constantes).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool es_toeplitz(int **matriz, int filas, int cols);
```
<!-- c -->

**Propiedad:** $a_{i,j} = a_{i+1,j+1}$
