Implementá **Conteo de hojas y nodos totales en Trie** para una trie de bytes, con la representación indicada en la cabecera.

Recorré cada nodo una vez. Contá raíz incluida, nodos hoja (sin hijos), terminales y número de aristas. La raíz vacía es un nodo hoja y no contiene palabras.

La API concreta está declarada en `trie-pref-15.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
