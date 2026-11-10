# Indexador de búsqueda de texto completo basado en Trie

Construí un índice invertido con Trie para tokens separados por uno o más espacios en blanco ASCII. Cada palabra terminal guarda las posiciones iniciales de sus ocurrencias en bytes dentro del texto original, en orden ascendente. Cada token admite hasta 255 bytes. Las palabras y consultas distinguen mayúsculas y minúsculas. El texto vacío es un índice válido sin documentos.

El objeto destino debe estar vacío o sin inicializar previamente (no debe poseer un índice). `trie_texto_indexar` construye el índice y limpia toda memoria parcial al fallar. `trie_texto_buscar` copia hasta `capacidad` offsets en el arreglo suministrado y devuelve cuántos copió; si no hay coincidencias devuelve cero. `trie_texto_destruir` libera el índice.
