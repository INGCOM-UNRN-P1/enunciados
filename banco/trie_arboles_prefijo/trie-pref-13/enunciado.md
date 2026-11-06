Implementá **Corrector ortográfico con distancia de Levenshtein sobre Trie** para una trie de bytes, con la representación indicada en la cabecera.

Recorré la trie y calculá distancia de Levenshtein con programación dinámica por filas. Emití en orden lexicográfico hasta capacidad las palabras con distancia menor o igual al máximo. La consulta vacía es válida; no se admiten cadenas de más de 254 bytes.

El cálculo mantiene una fila de Levenshtein independiente por profundidad para no mezclar ramas hermanas. La API concreta está declarada en `trie-pref-13.h`. Las cadenas son terminadas en NUL y las operaciones validan punteros y límites descritos. Cada reserva se libera en la operación de destrucción; ante fallos parciales no se filtra memoria.

### Pruebas de referencia

Las pruebas YAML ejercitan inserciones, consultas positivas y negativas, límites y liberación.
