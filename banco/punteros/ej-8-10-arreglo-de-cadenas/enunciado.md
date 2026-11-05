Implementar `void ordenar_cadenas(char **cadenas, int n)` para ordenar
lexicográficamente con `strcmp` las primeras `n` cadenas del arreglo. Se deben
reordenar los punteros; no modificar el contenido de las cadenas.

```c
char *palabras[] = {"hola", "adios", "casa", "barco"};
ordenar_cadenas(palabras, 4);
/* palabras: {"adios", "barco", "casa", "hola"} */
```

Se supone que `n` no es negativo y que cada elemento apunta a una cadena válida.
