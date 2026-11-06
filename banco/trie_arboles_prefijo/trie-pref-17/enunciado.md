Implementá **Trie con arreglo dinámico de hijos para alfabetos grandes** para una trie de bytes, con la representación indicada en la cabecera.

Cada nodo mantiene pares byte/hijo ordenados en un vector dinámico que duplica capacidad cuando se llena. Insertá y buscá palabras exactas de bytes UTF-8. La estructura libera recursivamente vector y nodos.

La API concreta está declarada en `trie-pref-17.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
