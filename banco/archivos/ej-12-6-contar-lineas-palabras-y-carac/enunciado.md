# Contar líneas, palabras y caracteres

Implementá una versión simple de `wc` mediante:

```c
int contar_archivo(const char *ruta, size_t *lineas, size_t *palabras,
                   size_t *caracteres);
```

La función cuenta bytes, palabras separadas por caracteres de espacio en blanco
y líneas. Las líneas se cuentan por cada `\n`, más una línea final si el archivo
no termina en `\n` y contiene bytes. Devuelve `0` en éxito y `-1` si la ruta,
alguna salida o una operación de archivo falla; ante error no modifica los
contadores.

El programa recibe una sola ruta como argumento y reporta los tres conteos.
Un archivo vacío produce tres ceros.
