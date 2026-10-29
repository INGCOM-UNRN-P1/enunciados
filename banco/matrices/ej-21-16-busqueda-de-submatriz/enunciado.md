### Ejercicio 21.16 - Búsqueda de submatriz ⭐⭐⭐☆☆

Escribir una función que determine si una matriz pequeña `B` (de `k x l`) se
encuentra dentro de una matriz más grande `A` (de `m x n`). La función debe
devolver las coordenadas de la esquina superior izquierda de la primera
ocurrencia, o `(-1, -1)` si no se encuentra.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->
