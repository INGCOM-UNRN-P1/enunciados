Implementá **Trie comprimido Radix (Patricia)** para una trie de bytes, con la representación indicada en la cabecera.

Cada arista guarda una etiqueta no vacía (varios bytes). Implementá inserción y búsqueda exacta, incluyendo palabras prefijo de otras y divisiones de etiqueta en prefijos comunes. Las etiquetas y nodos se reservan dinámicamente; destruir libera el árbol.

La raíz se crea con `radix_crear` y `radix_destruir` libera el árbol completo, incluida esa raíz. La API concreta está declarada en `trie-pref-08.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
