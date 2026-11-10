# Verificación de integridad estructural en Trie

Implementá un validador para la representación dispersa de `../trie-pref-04/trie-pref-common.h`. La estructura es válida si cada nodo tiene `cantidad <= capacidad`, los hijos están reservados cuando la capacidad o cantidad es distinta de cero, todos los punteros de hijo son accesibles y no nulos, los bytes están estrictamente ordenados y ningún nodo aparece más de una vez (se rechazan ciclos y alias/DAG). Se limita la profundidad a 4096. La raíz nula es inválida.

El validador no modifica el Trie. Por las limitaciones del lenguaje C, se asume que todo puntero no nulo que se recibe es accesible y apunta a un objeto del tipo declarado; no es posible probar la validez de una dirección arbitraria. Si no puede reservar memoria auxiliar para detectar alias, devuelve `false`.
