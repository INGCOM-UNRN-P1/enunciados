Modificar uno de los ejercicios anteriores (ej. 1.2, Duplicadora) para que, si
`malloc` o `realloc` devuelven `NULL`, el programa lo notifique con un mensaje
de error claro a `stderr` y termine de forma controlada (ej.
`exit(EXIT_FAILURE)`), en lugar de fallar por desreferenciar un puntero nulo.

### Contrato de las funciones

```c
void *reservar_arreglo(size_t cantidad, size_t tamano);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
