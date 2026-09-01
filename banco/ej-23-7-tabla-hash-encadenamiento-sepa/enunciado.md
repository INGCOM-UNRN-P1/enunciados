### Ejercicio 23.7 - Tabla Hash (Encadenamiento Separado) ⭐⭐⭐☆☆

Una tabla hash utiliza una función para convertir una clave en un índice de un
arreglo. Las colisiones (cuando dos claves mapean al mismo índice) se manejan
almacenando los elementos en una lista enlazada en esa posición del arreglo.

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->
