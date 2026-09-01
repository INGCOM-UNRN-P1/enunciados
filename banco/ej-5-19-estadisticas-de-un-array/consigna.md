# Estadísticas de un Array

## Ejercicio 5.19 - Estadísticas de un Array ⭐⭐⭐⭐☆

Implementá funciones estadísticas para un array de números:
- `double promedio(double arr[], int n)`
- `double mediana(double arr[], int n)`
- `double desviacion_estandar(double arr[], int n)`

**Orientación:**
- Promedio: suma / cantidad
- Mediana: ordenar y tomar el del medio
- Desviación: √(Σ(x - μ)² / n)


:::{hint} Lógica y Consideraciones
    filas (*row-major order*) para mejorar el uso de caché.
    estrictamente dentro de los límites del contenedor.

-   **[*plus ultra*]:** Validar que n > 0 y usar el calificador const en los arreglos de solo lectura.
-   **[*plus ultra*]:** Escribir pruebas con assert() para verificar el cálculo del promedio y la desviación.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_20)=