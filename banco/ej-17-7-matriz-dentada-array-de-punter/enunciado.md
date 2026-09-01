### Ejercicio 17.7 - Matriz Dentada (Array de Punteros) ⭐⭐⭐☆☆

Implementar funciones para crear y liberar una matriz dentada donde cada fila se
aloja como un bloque independiente.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int **crear_matriz_dentada(size_t filas, size_t columnas);
void liberar_matriz_dentada(int ***ptr_matriz, size_t filas);
```
<!-- c -->
