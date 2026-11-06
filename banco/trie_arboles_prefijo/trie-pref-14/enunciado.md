Implementá **Ordenamiento lexicográfico de cadenas con Trie** para una trie de bytes, con la representación indicada en la cabecera.

Ordená un arreglo de cadenas C por orden lexicográfico de bytes como strcmp. La trie conserva duplicados y permite cadenas vacías. Si falla una asignación, devuelve false y libera toda memoria auxiliar.

La API concreta está declarada en `trie-pref-14.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
