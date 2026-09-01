### Ejercicio 14.26 - Filtro de Arreglo Dinámico ⭐⭐⭐☆☆

Crear una función que reciba un arreglo dinámico, su tamaño y un puntero a una
función "predicado" (`bool (*pred)(int)`). La función debe devolver un **nuevo**
arreglo dinámico que contenga únicamente los elementos del arreglo original para
los cuales el predicado devuelve `true`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
