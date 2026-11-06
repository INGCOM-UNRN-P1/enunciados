Implementá **Serialización binaria compacta de diccionario Trie** para una trie de bytes, con la representación indicada en la cabecera.

Formato portable TRP1: cada nodo ocupa terminal (0/1), cantidad de hijos uint16 little-endian y registros hijos (byte y subárbol) en orden ascendente. Serializá a buffer malloc y deserializá validando truncamientos, orden, terminales y bytes sobrantes. El llamador libera el buffer con free.

La API concreta está declarada en `trie-pref-19.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
