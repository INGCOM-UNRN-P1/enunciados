### Ejercicio 20.7 - Agregar y quitar permisos ⭐⭐☆☆☆

Implementar funciones para modificar el conjunto de permisos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
unsigned int agregar_permiso(unsigned int permisos, enum permisos nuevo);
unsigned int quitar_permiso(unsigned int permisos, enum permisos remover);
```
<!-- c -->
