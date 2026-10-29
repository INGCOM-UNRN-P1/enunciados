### Ejercicio 8.4 - Largo seguro con punteros ⭐⭐⭐☆☆

Implementar `size_t largo_seguro(const char *str, size_t capacidad)`.

**Lógica**: Inicializar un puntero `const char *fin = str;`. Iterar con `while
(*fin != '\0' && (size_t)(fin - str) < capacidad) { fin++; }`. El largo es `fin
- str`.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Manipulación con Punteros
