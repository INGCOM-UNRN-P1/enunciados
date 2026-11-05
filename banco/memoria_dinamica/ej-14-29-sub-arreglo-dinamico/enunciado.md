Crear una función `int* sub_arreglo(const int* arr, size_t inicio, size_t fin)`
que devuelva un nuevo arreglo dinámico conteniendo una copia de los elementos
del arreglo original desde el índice `inicio` hasta `fin-1`.

### Contrato de las funciones

```c
int *copiar_subarreglo(const int *datos, size_t total, size_t inicio, size_t longitud);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
