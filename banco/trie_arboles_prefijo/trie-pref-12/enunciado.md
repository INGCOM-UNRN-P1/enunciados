Implementá **Máximo XOR de dos números con Bitwise Trie** para una trie de bytes, con la representación indicada en la cabecera.

Insertá números de 32 bits en un trie de bits y consultá para cada elemento el número previamente insertado que maximiza XOR. Devuelve false para menos de dos elementos o punteros nulos. El arreglo no se modifica; toda reserva se libera incluso ante fallo.

La API concreta está declarada en `trie-pref-12.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
