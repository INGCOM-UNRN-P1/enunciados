### Ejercicio 23.3 - Eliminación y Búsqueda ⭐⭐☆☆☆

- **`nodo_t* buscar_nodo(nodo_t *cabeza, int dato)`**: Recorre la lista y
  devuelve un puntero al primer nodo que contenga el dato, o `NULL` si no se
  encuentra.
- **`void eliminar_por_valor(nodo_t **cabeza, int dato)`**: Busca un nodo con el
  dato especificado y lo elimina de la lista, re-enlazando el nodo anterior con
  el siguiente.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Pila (Stack) - LIFO

Una pila sigue el principio LIFO (Last-In, First-Out). Se puede implementar
eficientemente usando una lista enlazada como estructura subyacente.
