### Ejercicio 21.19 - Detección de bordes (Operador de Sobel) ⭐⭐☆☆☆

Aplicar un operador de Sobel simple para la detección de bordes. Esto implica
"convolucionar" la matriz con un `kernel` (otra matriz pequeña, ej. 3x3) para
resaltar las diferencias de intensidad, como los bordes.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->
