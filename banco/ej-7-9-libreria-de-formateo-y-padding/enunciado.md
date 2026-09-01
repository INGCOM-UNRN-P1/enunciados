### Ejercicio 7.9 - Librería de Formateo y Padding de Texto ⭐⭐⭐☆☆

Diseñá `str_format.h` y `str_format.c`:
- `bool str_pad_left(const char *src, size_t len_src, char *dest, size_t dest_size, size_t total_len, char pad_char)`
- `bool str_pad_right(const char *src, size_t len_src, char *dest, size_t dest_size, size_t total_len, char pad_char)`
- `bool str_centrar(const char *src, size_t len_src, char *dest, size_t dest_size, size_t total_len, char pad_char)`

:::{hint} Lógica y Consideraciones
- Garantizá siempre la terminación de la cadena resultante con `'\0'`. Retorná `false` si `dest_size` no alcanza.
:::
<!-- {hint} Lógica y Consideraciones -->

---
