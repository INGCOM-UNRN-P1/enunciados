Implementá **Conteo de palabras que comparten un prefijo** para una trie de bytes, con la representación indicada en la cabecera.

Insertá palabras como cadenas de bytes sin duplicar terminales. Contá palabras completas bajo un prefijo; el prefijo vacío cuenta todas. NULL o prefijo inexistente devuelve cero.

La API concreta está declarada en `trie-pref-06.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
