Implementá **Memoria utilizada y ocupación de nodos Trie** para una trie de bytes, con la representación indicada en la cabecera.

Medí nodos alcanzables, bytes solicitados para estructuras y buffers de hijos (capacidad reservada), aristas e índice de ocupación aristas/(nodos*256). Para NULL devuelve cero en todos los campos.

La API concreta está declarada en `trie-pref-16.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
