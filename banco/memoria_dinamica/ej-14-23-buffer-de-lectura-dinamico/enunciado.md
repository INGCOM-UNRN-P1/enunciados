Crear una función que lea una línea completa desde `stdin` (hasta el salto de
línea), alojando dinámicamente la memoria necesaria para la línea sin imponer un
límite de tamaño predefinido. La función podría empezar con un buffer pequeño y
usar `realloc` para agrandarlo según sea necesario.

### Contrato de las funciones

```c
char *leer_linea_dinamica(FILE *entrada);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
