Implementá una función que reserve memoria dinámica para construir un saludo
con el nombre recibido.

```c
char *construir_mensaje(const char *usuario);
```

Para `"Alumno"`, el resultado debe contener `"Hola, Alumno"`. Si `usuario` es
`NULL` o no puede reservarse la memoria, devolvé `NULL`. Cada llamada exitosa
devuelve una cadena independiente y terminada en NUL. Quien llama es
responsable de liberarla con `free`.

:::{hint} Ayuda
Reservá espacio para el prefijo, el nombre y el terminador NUL.
:::
