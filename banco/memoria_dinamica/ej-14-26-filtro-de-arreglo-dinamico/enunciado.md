Crear una función que reciba un arreglo dinámico, su tamaño y un puntero a una
función "predicado" (`bool (*pred)(int)`). La función debe devolver un **nuevo**
arreglo dinámico que contenga únicamente los elementos del arreglo original para
los cuales el predicado devuelve `true`.

### Contrato de las funciones

```c
int *filtrar_arreglo(const int *datos, size_t n, predicado_int_t predicado,
                     size_t *cantidad);
```

El predicado recibido decide qué elementos conservar; el resultado conserva el orden original y la memoria queda a cargo del llamador. Las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
