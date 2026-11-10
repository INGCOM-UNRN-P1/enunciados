# Construcción simplificada de árbol de sufijos

Construí un árbol de sufijos comprimido explícito para un texto de hasta 4096 bytes. Cada arista guarda `(inicio,longitud)` como etiqueta referida al buffer de texto que posee el objeto; cada nodo tiene aristas salientes y una marca terminal. Insertá todos los sufijos no vacíos. Cuando un nuevo sufijo comparte solo un prefijo de una etiqueta, dividí la arista y agregá las dos continuaciones.

`arbol_sufijos_contiene` devuelve verdadero si la cadena de consulta aparece como subcadena, incluso si termina en medio de una arista; la cadena vacía está presente. La creación acepta texto vacío y destruye toda reserva parcial al fallar. El objeto destino no debe poseer memoria antes de crear; la destrucción lo vacía.
