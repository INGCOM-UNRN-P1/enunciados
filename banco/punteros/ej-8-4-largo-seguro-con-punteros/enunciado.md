Implementar `size_t largo_seguro(const char *str, size_t capacidad)`, que
devuelva la cantidad de caracteres anteriores al primer `\0`, sin examinar más
de `capacidad` caracteres. Si no hay un terminador dentro de ese límite, debe
devolver `capacidad`.

Se puede avanzar con un puntero desde `str` mientras el carácter actual no sea
`\0` y la distancia recorrida sea menor que `capacidad`. La cadena debe tener
al menos `capacidad` bytes accesibles.
