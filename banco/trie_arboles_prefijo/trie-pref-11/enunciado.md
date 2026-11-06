Implementá **Trie de bits para prefijos IPv4 y máscaras de subred** para una trie de bytes, con la representación indicada en la cabecera.

Cada ruta guarda dirección IPv4 en orden de red, prefijo 0..32 y valor entero. Consulta aplica longest-prefix-match y devuelve el valor más específico. Se permiten rutas /0 y reemplazar un valor de prefijo existente. Destruir libera nodos y restablece el objeto.

La API concreta está declarada en `trie-pref-11.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
