### Ejercicio 22.9 - Eliminar por Valor ⭐⭐☆☆☆

Implementar la operación de eliminar todas las ocurrencias de un elemento y
liberar sus nodos correspondientes en memoria.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool lista_eliminar(lista_t *lista, int dato);
```
<!-- c -->
