### Ejercicio 8.24 - Validación de Punteros ⭐⭐⭐☆☆

Implementar `int acceso_seguro(int *ptr, int *resultado)` que verifique si `ptr`
es `NULL` antes de acceder. Si es válido, copiar `*ptr` a `*resultado` y
retornar 1. Si es `NULL`, retornar 0.

**Buena práctica:** Siempre verificar punteros antes de desreferenciarlos.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
