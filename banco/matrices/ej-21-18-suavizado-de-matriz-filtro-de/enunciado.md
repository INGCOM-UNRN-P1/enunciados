### Ejercicio 21.18 - Suavizado de matriz (Filtro de caja) ⭐⭐⭐☆☆

Implementar un filtro de "suavizado" o "blur". Para cada elemento de la matriz,
su nuevo valor será el promedio de sus 8 vecinos y él mismo. Los elementos en
los bordes requerirán un manejo especial.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->
