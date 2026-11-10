# Trie de sufijos para búsqueda de subcadenas

Construí un índice de sufijos de bytes para un texto C de hasta 255 bytes. Insertá todos sus sufijos en un Trie disperso según `../trie-pref-04/trie-pref-common.h`; una consulta es positiva si el camino de sus bytes existe, aunque no termine en un nodo marcado como palabra. El texto y las consultas son cadenas terminadas en NUL; bytes distintos de NUL se comparan literalmente. El texto vacío crea un índice válido.

`trie_sufijos_crear` inicializa el índice (requiere que no posea memoria previa), `trie_sufijos_contiene` busca una subcadena y `trie_sufijos_destruir` libera todo y permite volver a crear el índice. La subcadena vacía siempre se encuentra en un índice válido. Ante error de reserva, la creación destruye las reservas parciales y devuelve `false`.
