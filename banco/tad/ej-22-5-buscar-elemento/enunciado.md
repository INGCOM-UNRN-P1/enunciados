### Ejercicio 22.5 - Buscar Elemento ⭐⭐☆☆☆

Implementar una función que determine si un elemento está presente en la lista.
Retornar `true` si lo encuentra.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool lista_pertenece(const lista_t *lista, int dato);
```
<!-- c -->

**Complejidad:** $O(n)$ en el peor caso.
