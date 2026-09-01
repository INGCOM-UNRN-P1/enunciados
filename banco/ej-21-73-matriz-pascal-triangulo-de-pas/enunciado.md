### Ejercicio 21.73 - Matriz Pascal (Triángulo de Pascal) ⭐⭐⭐⭐☆

Generá el triángulo de Pascal como matriz.

**Orientación:**
- `matriz[i][0] = 1` (primera columna)
- `matriz[i][i] = 1` (diagonal)
- `matriz[i][j] = matriz[i-1][j-1] + matriz[i-1][j]` (resto)


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---
