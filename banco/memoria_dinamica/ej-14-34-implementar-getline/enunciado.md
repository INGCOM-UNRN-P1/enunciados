# Implementar `getline`

Implementá `ssize_t mi_getline(char **lineptr, size_t *n, FILE *stream)` para leer desde `stream` hasta `\n` inclusive o hasta EOF. La función debe reutilizar el buffer recibido cuando tenga espacio y ampliarlo con `realloc` cuando haga falta. Siempre termina los bytes leídos con `\0`; el tamaño devuelto cuenta los bytes de la línea, incluido el salto de línea si fue leído, pero no el terminador.

Si `lineptr` apunta a `NULL` o `*n == 0`, reservá un buffer inicial. En EOF sin bytes leídos o ante error, devolvé `-1`; si EOF llega después de algunos bytes, devolvé esos bytes. La memoria del buffer queda a cargo del llamador. Si `realloc` falla, devolvé `-1` conservando el puntero original y su capacidad; no pierdas ni sobrescribas el buffer original.

```c
ssize_t mi_getline(char **lineptr, size_t *n, FILE *stream);
```
