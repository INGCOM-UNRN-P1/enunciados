### Ejercicio 14.12 - Vector de Crecimiento Dinámico ⭐⭐⭐☆☆

Implementar una estructura `vector_t` que simule un `std::vector` de C++. Debe
contener un puntero a los datos, un tamaño (`size`) y una capacidad
(`capacity`). Crear funciones para:
- `vector_crear()`: Inicializa un vector vacío.
- `vector_push_back(vector_t* v, int dato)`: Añade un elemento al final. Si
  `size == capacity`, debe duplicar la capacidad usando `realloc`.
- `vector_destruir(vector_t* v)`: Libera toda la memoria.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
