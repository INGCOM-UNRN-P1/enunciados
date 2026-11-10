# Búsqueda de subcadena común más larga

Insertá todos los sufijos del primer texto en un Trie de bytes y recorré los sufijos del segundo para encontrar la subcadena común contigua más larga. En empate, conservá la primera coincidencia que aparece al recorrer el segundo texto de izquierda a derecha y, para cada posición, de más corta a más larga (por lo que gana la primera extensión máxima). Cada entrada admite hasta 255 bytes. Las cadenas son C strings; se comparan bytes sin normalización.

`subcadena_comun_mas_larga` devuelve la longitud encontrada y copia la secuencia a `out` si `cap >= longitud+1`; si no hay coincidencia, los argumentos son inválidos o no alcanza la capacidad, devuelve cero y deja `out` como cadena vacía cuando sea posible.
