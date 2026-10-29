### Ejercicio 23.2 - Inserción ⭐⭐☆☆☆

- **`void insertar_al_principio(nodo_t **cabeza, int dato)`**: Crea un nuevo
  nodo y lo convierte en la nueva cabeza de la lista. Requiere un puntero doble
  para modificar el puntero `cabeza` original.
- **`void insertar_al_final(nodo_t *cabeza, int dato)`**: Recorre la lista hasta
  el último nodo y enlaza el nuevo nodo al final.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
