C11 deja el comportamiento de `realloc(ptr, 0)` dependiente de la
implementación. Una implementación puede liberar el bloque y devolver `NULL`,
o tratar la llamada como una reserva de tamaño no nulo, con un resultado que
no debe usarse para acceder al objeto. Por eso no se puede afirmar de forma
portable que la llamada sea equivalente a `free(ptr)` ni deducir el estado del
bloque solo por comprobar el resultado.

Escribir un pequeño programa que ejecute `realloc(ptr, 0)`, informe si la
implementación devolvió `NULL` o un puntero, y no vuelva a acceder al puntero
original. Si la llamada devuelve un puntero no nulo, el programa debe liberar
ese resultado. No intente validar una dirección liberada ni asumir que todas
las implementaciones responden igual.

### Contrato de las funciones

```c
void *realloc_tamano_cero(void *bloque);
```

La función devuelve exactamente el resultado de `realloc(bloque, 0)`. El
significado de ese resultado y el tratamiento del bloque original dependen de
la implementación de C. El ejercicio queda marcado como no publicable mientras
no se pueda establecer una expectativa portable para el resultado.

### Casos a contemplar

- Ejecutar el programa sin desreferenciar el bloque original después de la llamada.
- Liberar el resultado si no es `NULL`.
- No usar el valor devuelto como prueba portable de que el bloque anterior fue liberado.
