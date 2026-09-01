### Ejercicio 17.3 - Clonación Profunda ⭐⭐☆☆☆

Implementar una función que cree una copia completamente independiente de una
persona:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
persona_t *persona_clonar(const persona_t *original);
```
<!-- c -->

La copia debe tener su propia memoria asignada para `nombre` y `apellido`, no
compartir punteros con el original.
