Implementá **Eliminación de palabras y poda de nodos huérfanos** para una trie de bytes, con la representación indicada en la cabecera.

Una trie dispersa almacena cadenas de bytes distintos de NUL. Implementá inserción, búsqueda exacta y eliminación. Al borrar, desmarcá terminal y liberá hacia arriba solo nodos que no sean terminales ni tengan hijos. NULL y palabra vacía se rechazan; destruir NULL es válido.

La API concreta está declarada en `trie-pref-04.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
