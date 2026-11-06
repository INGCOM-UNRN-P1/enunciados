Implementá **Carga rápida de Trie desde archivo de diccionario** para una trie de bytes, con la representación indicada en la cabecera.

Leé un diccionario de una línea por palabra desde FILE*. Quitá LF y CR final, ignorá líneas vacías y admití líneas de hasta 255 bytes, tanto con LF como al llegar a EOF sin salto final. Ante línea demasiado larga, error de lectura o memoria, destruí el árbol y devolvé NULL. El flujo queda consumido hasta EOF.

La API concreta está declarada en `trie-pref-20.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
