### Ejercicio 8.10 - Arreglo de Cadenas ⭐⭐⭐☆☆

Implementar `void ordenar_cadenas(char **cadenas, int n)` que ordene un arreglo
de punteros a cadenas lexicográficamente usando `strcmp`.

**Ejemplo:**

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
char *palabras[] = {"hola", "adios", "casa", "barco"};
ordenar_cadenas(palabras, 4);
// Resultado: {"adios", "barco", "casa", "hola"}
```
<!-- c -->

---

## Aritmética de Punteros Avanzada
