### Ejercicio 20.6 - Verificar permiso ⭐⭐☆☆☆

Implementar una función que verifique si un conjunto de permisos incluye un
permiso específico.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool tiene_permiso(unsigned int permisos_actuales, enum permisos permiso);
```
<!-- c -->
