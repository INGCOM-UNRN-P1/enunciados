Implementá **Trie ternario de búsqueda (TST)** para una trie de bytes, con la representación indicada en la cabecera.

Implementá un TST con enlaces menor, igual y mayor por byte. Inserción reserva nodos, búsqueda requiere marca terminal y distingue palabra completa de prefijo. Cadenas vacías y punteros nulos se rechazan; liberar NULL es seguro.

La API concreta está declarada en `trie-pref-09.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
