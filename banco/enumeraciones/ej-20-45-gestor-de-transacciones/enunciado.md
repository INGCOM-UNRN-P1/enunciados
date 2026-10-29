### Ejercicio 20.45 - Gestor de transacciones ⭐⭐☆☆☆

Implementar funciones para gestionar transacciones.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
transaccion_t iniciar_transaccion(enum tipo_aislamiento aislamiento);
bool commit_transaccion(transaccion_t *tx);
bool rollback_transaccion(transaccion_t *tx);
bool puede_hacer_commit(const transaccion_t *tx);
```
<!-- c -->

## Tipos de Datos SQL
