### Ejercicio 23.4 - Implementación con Lista Enlazada ⭐⭐☆☆☆

- **`void push(nodo_t **cabeza, int dato)`**: Es idéntico a
  `insertar_al_principio` en una lista enlazada.
- **`int pop(nodo_t **cabeza)`**: Elimina el primer nodo (la cima de la pila),
  devuelve su dato y actualiza la cabeza de la lista.
- **`int peek(nodo_t *cabeza)`**: Devuelve el dato del primer nodo sin modificar
  la pila.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Cola (Queue) - FIFO

Una cola sigue el principio FIFO (First-In, First-Out). Para una implementación
eficiente con listas enlazadas, se requiere mantener punteros tanto a la cabeza
(`frente`) como a la cola (`final`) de la lista.

``` c
typedef struct
{
    nodo_t *frente;
    nodo_t *final;
} cola_t;
```
<!-- c -->
