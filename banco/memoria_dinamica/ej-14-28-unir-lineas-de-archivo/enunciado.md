Escribir un programa que lea todas las líneas de un archivo y las almacene en un
arreglo dinámico de cadenas (`char**`). Luego, crear una función que una todas
estas cadenas en una sola, separadas por un espacio, y la devuelva como una
nueva cadena dinámica.

El programa acepta una ruta opcional; sin argumentos lee desde `stdin`. Une las líneas con un espacio, escribe el resultado en `stdout` y libera las cadenas y el arreglo dinámico. Una falla de apertura o lectura se informa en `stderr`.

### Contrato de las funciones

```c
char *unir_lineas(FILE *entrada, const char *separador);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
