Implementá **Autocompletado de palabras dado un prefijo** para una trie de bytes, con la representación indicada en la cabecera.

Construí una trie dispersa de bytes con inserciones únicas. Enumerá las palabras que comienzan con el prefijo en orden lexicográfico de bytes, hasta capacidad, y guardalas en filas de 256 bytes. Incluí el propio prefijo si es palabra. Retorná el número escrito.

La API concreta está declarada en `trie-pref-05.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
