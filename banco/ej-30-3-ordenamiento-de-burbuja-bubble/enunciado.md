### Ejercicio 30.3 - Ordenamiento de Burbuja (Bubble Sort) ⭐⭐☆☆☆

Implementar el ordenamiento de burbuja. Este método recorre repetidamente la
lista, compara elementos adyacentes y los intercambia si están en el orden
incorrecto. Las pasadas a través de la lista se repiten hasta que no se
necesiten más intercambios.

**Lógica y Consideraciones:**
- **Proceso**: Usar dos lazos anidados. El lazo exterior controla el número de
  pasadas. El lazo interior recorre los elementos, "burbujeando" el elemento más
  grande de la sección no ordenada hacia su posición final en cada pasada.
- **Optimización**: Se puede agregar una bandera para detectar si en una pasada
  completa no se realizó ningún intercambio, en cuyo caso el arreglo ya está
  ordenado y el algoritmo puede terminar antes.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->
