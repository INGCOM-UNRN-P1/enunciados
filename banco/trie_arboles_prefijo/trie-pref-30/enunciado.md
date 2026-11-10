# TAD diccionario y predictor de texto basado en Trie

Implementá autocompletado para una lista de palabras C no nulas de hasta 255 bytes, cada una con una frecuencia positiva o cero. El Trie indexa los términos y las sugerencias que comienzan con el prefijo se devuelven por frecuencia descendente; en empate se ordenan con `strcmp` ascendente. No se devuelven duplicados de entrada como sugerencias duplicadas (las entradas del diccionario deben ser únicas).

`trie_predecir` copia hasta `limite` palabras en filas de 256 bytes, acotado además por `capacidad`, y devuelve el número escrito. Un prefijo vacío devuelve todo el diccionario ordenado. Ante parámetros inválidos, palabra repetida, una palabra mayor a 255 bytes o error de reserva, devuelve cero. El Trie y los buffers auxiliares se liberan al retornar.
