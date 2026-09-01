### Ejercicio 30.2 - Búsqueda Binaria ⭐⭐☆☆☆

Implementar una función de búsqueda binaria, un algoritmo mucho más eficiente
que requiere que el arreglo esté **previamente ordenado**. Funciona dividiendo
repetidamente el intervalo de búsqueda por la mitad.

**Lógica y Consideraciones:**
- **Proceso**:
  1. Mantener dos índices, `izquierda = 0` y `derecha = n-1`.
  2. Mientras `izquierda <= derecha`, calcular el índice del medio: `medio =
     izquierda + (derecha - izquierda) / 2`.
  3. Comparar el valor buscado con `arreglo[medio]`. Si son iguales, se
     encontró. Si es menor, ajustar `derecha = medio - 1`. Si es mayor, ajustar
     `izquierda = medio + 1`.
- **Salida**: Devolver el índice si se encuentra, o `-1` si el intervalo de
  búsqueda se vacía.
- **Complejidad Temporal**: $O(\log n)$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Algoritmos de Ordenamiento Cuadráticos ($O(n^2)$)
