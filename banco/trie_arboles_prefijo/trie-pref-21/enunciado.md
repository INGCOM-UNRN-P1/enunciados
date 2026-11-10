# Detección del palíndromo más largo con árbol palindrómico

Construí un árbol de sufijos palindrómicos (eertree), una variante especializada de trie en la que cada transición agrega el mismo byte a ambos extremos del palíndromo. Cada nodo representa un palíndromo distinto y su enlace de sufijo apunta al palíndromo propio más largo que también es sufijo. Al procesar cada byte, encontrá la extensión y actualizá el mejor resultado en O(n) total.

`trie_palindromo_mas_largo` admite textos de hasta 255 bytes, compara bytes literalmente y copia el palíndromo contiguo más largo. En empate elige la primera aparición. Requiere que entrada y salida no se solapen. Solo necesita capacidad para el resultado encontrado más el NUL; si no alcanza, devuelve cero y deja salida vacía cuando es posible. Argumentos nulos o texto mayor a 255 bytes también devuelven cero.
