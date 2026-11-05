Alojar dinámicamente un arreglo de `structs` (ej. `producto_t` de un ejercicio
anterior). Implementar funciones para añadir y buscar elementos en este arreglo,
usando `realloc` para expandir el arreglo cuando sea necesario.

### Contrato de las funciones

```c
bool productos_agregar(productos_t *p, int id, const char *nombre);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
