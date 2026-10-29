### Ejercicio 22.8 - Insertar en Posición ⭐⭐☆☆☆

Implementar una función que inserte un elemento en una posición específica.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool lista_insertar_en(lista_t *lista, size_t posicion, int dato);
```
<!-- c -->

**Casos especiales:**
- Posición 0: insertar al inicio.
- Posición >= longitud: insertar al final.
- Posición intermedia: recorrer hasta la posición.
