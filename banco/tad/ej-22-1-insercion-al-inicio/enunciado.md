### Ejercicio 22.1 - Inserción al Inicio ⭐⭐☆☆☆

Implementar la operación de insertar un elemento al principio de la lista. Esta
operación debe tener complejidad $O(1)$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool insertar_al_inicio(lista_t *lista, int dato);
```
<!-- c -->
