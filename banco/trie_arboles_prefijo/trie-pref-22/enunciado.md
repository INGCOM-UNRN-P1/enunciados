# Búsqueda con comodín de un byte en Trie

Implementá una consulta de patrón sobre un Trie disperso de bytes, cuya representación está en `../trie-pref-04/trie-pref-common.h`. Las palabras y el patrón admiten hasta 255 bytes. El carácter `?` del patrón coincide con exactamente un byte cualquiera; todos los demás bytes se interpretan literalmente. La consulta retorna `true` si existe una palabra terminal que coincide con el patrón completo. Los punteros nulos retornan `false`; el patrón vacío coincide solo si la raíz es terminal.

La búsqueda debe recorrer solo las ramas del Trie y no modificarlo. `?` no representa una cadena vacía ni se permiten escapes.
