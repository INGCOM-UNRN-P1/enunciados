### Ejercicio 30.5 - Ordenamiento por Inserción (Insertion Sort) ⭐⭐☆☆☆

Implementar el ordenamiento por inserción. Este método construye el arreglo
ordenado final un elemento a la vez. Es muy eficiente para arreglos pequeños o
que ya están casi ordenados.

**Lógica y Consideraciones:**
- **Proceso**: Iterar desde el segundo elemento (`i=1`) hasta el final. En cada
  iteración, tomar el elemento actual (`clave`) y compararlo con los elementos a
  su izquierda. Desplazar los elementos mayores que la `clave` una posición
  hacia la derecha para hacer espacio e insertar la `clave` en su posición
  correcta.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Algoritmos de Ordenamiento Avanzados ($O(n \log n)$)
