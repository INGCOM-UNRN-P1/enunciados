# Inserción y búsqueda exacta alfanumérica

Implementá un Trie para cadenas ASCII alfanuméricas (`A-Z`, `a-z`, `0-9`). La raíz se inicializa a cero y pertenece al llamador. ` trie02_insertar` inserta cadenas no vacías válidas; si aparece un carácter inválido, no inserta la cadena. `trie02_contiene` devuelve 1 solo si toda la cadena fue insertada (un mero prefijo devuelve 0), y 0 ante palabra vacía, inválida o puntero nulo. `trie02_liberar` libera un nodo dinámico y sus descendientes; para una raíz en stack liberá sus hijos.

Las pruebas YAML verifican palabras superpuestas, prefijos que no son palabras, entradas inválidas y nulas. API completa en `trie-pref-02.h`.
