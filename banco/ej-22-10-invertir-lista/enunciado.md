### Ejercicio 22.10 - Invertir Lista ⭐⭐☆☆☆

Reorganizar los enlaces de los nodos de la lista para invertir su orden de
manera destructiva (in-place, $O(n)$ tiempo, $O(1)$ memoria).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void lista_invertir(lista_t *lista);
```
<!-- c -->
