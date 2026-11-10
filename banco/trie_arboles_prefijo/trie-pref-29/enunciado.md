# Comparación de Trie, tabla hash y BST

Compará el costo de insertar la misma lista de palabras en una Trie de bytes, una tabla hash con encadenamiento y un árbol binario de búsqueda no balanceado. El informe cuenta bytes recorridos en la Trie, comparaciones `strcmp` en la tabla hash y comparaciones `strcmp` en el BST durante inserción. La tabla usa encadenamiento y hash djb2; el BST inserta en orden recibido. Cada palabra admite hasta 255 bytes. Las palabras duplicadas se aceptan, pero no crean claves nuevas en las estructuras asociativas.

`trie_comparar_estructuras` escribe métricas deterministas en `resultado`. Los contadores representan operaciones de distinto tipo y sirven para observar tendencias, no son tiempos ni una comparación directa de segundos. Si `cantidad>0`, cada palabra debe ser no nula. Retorna `false` ante argumentos inválidos o fallo de memoria y limpia toda estructura parcial.
