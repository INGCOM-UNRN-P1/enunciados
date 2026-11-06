Implementá **Trie con hijos indexados por tablas hash** para una trie de bytes, con la representación indicada en la cabecera.

Cada nodo representa los bytes de una cadena mediante una tabla hash con encadenamiento. Insertá y buscá palabras exactas, incluyendo UTF-8 como secuencia de bytes; las colisiones no deben confundir claves. La liberación recorre tablas y subárboles.

La API concreta está declarada en `trie-pref-18.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
