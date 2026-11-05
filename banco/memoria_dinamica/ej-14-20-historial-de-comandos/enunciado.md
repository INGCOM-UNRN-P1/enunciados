Crear un programa que lea líneas de texto desde la entrada estándar y las
almacene en un "historial" (un arreglo dinámico de cadenas `char**`). El
historial debe crecer dinámicamente a medida que se añaden comandos.

El programa lee comandos hasta EOF, luego los muestra numerados en el orden ingresado y libera todo el historial. Cada línea, incluso una línea vacía, cuenta como un comando.

### Contrato de las funciones

```c
bool historial_agregar(historial_t *h, const char *comando);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
