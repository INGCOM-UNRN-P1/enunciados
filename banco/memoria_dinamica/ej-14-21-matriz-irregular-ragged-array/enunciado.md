Reservar memoria para una matriz dinámica donde cada fila puede tener un número
diferente de columnas. Las dimensiones (número de columnas de cada fila) se
deben leer de un arreglo de configuración.

### Contrato de las funciones

```c
bool matriz_irregular_crear(matriz_irregular_t *m, const size_t *columnas, size_t filas);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
