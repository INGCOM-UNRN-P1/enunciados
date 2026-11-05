Implementar una función `int* redimensionar_arreglo(int* arr, size_t
nuevo_tamano)` que utilice `realloc` para cambiar el tamaño de un arreglo
dinámico. La función debe manejar tanto la expansión como la contracción del
arreglo y gestionar posibles fallos de `realloc`. El bloque recibido debe haber
sido reservado dinámicamente. Si `nuevo_tamano` es cero, liberá `arr` y retorná
`NULL`. Si el tamaño es positivo y la reserva falla, retorná `NULL` sin perder
el bloque original (el llamador conserva el puntero original para liberarlo).
Un puntero `NULL` con tamaño positivo debe permitir crear un bloque nuevo.
