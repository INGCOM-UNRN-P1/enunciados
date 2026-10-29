### Ejercicio 22.2 - Inserción al Final ⭐⭐☆☆☆

Implementar la operación de insertar un elemento al final de la lista. Analizar
la complejidad: $O(n)$ sin puntero al último, $O(1)$ con puntero al último.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool insertar_al_final(lista_t *lista, int dato);
```
<!-- c -->
