Implementá **Prefijo más largo de la consulta que es palabra almacenada** para una trie de bytes, con la representación indicada en la cabecera.

Dada una consulta no vacía, encontrá el prefijo más largo que sea una palabra exacta del diccionario y copialo a salida. Retorná longitud. Si no hay coincidencia, salida queda vacía. Capacidad debe alcanzar strlen(consulta)+1.

La API concreta está declarada en `trie-pref-07.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
