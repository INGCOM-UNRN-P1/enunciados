### Ejercicio 14.18 - Clonación Profunda de Struct ⭐⭐⭐☆☆

Definir una `struct` que contenga miembros de tipo puntero (ej. `char* nombre`,
`int* notas`). Escribir una función de "clonación profunda" que cree una copia
completamente nueva e independiente de la `struct`, incluyendo la reserva de
nueva memoria para los datos a los que apuntan los punteros.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
