### Ejercicio 21.29 - Potencia de matriz ⭐⭐⭐☆☆

Calcular $A^n$ para una matriz cuadrada $A$ y un exponente entero $n$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **potencia_matriz(double **matriz, int tam, int exponente);
```
<!-- c -->

**Optimización:** Usar exponenciación rápida para $O(\log n)$ multiplicaciones.
