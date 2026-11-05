Crear un programa interactivo que permita al usuario gestionar una lista de
compras. Las opciones deben ser:
1. Añadir producto (cadena dinámica).
2. Eliminar producto.
3. Mostrar lista.
La lista debe ser un arreglo de `char*` que se ajuste dinámicamente.

El programa muestra un menú hasta que se elige salir. Para añadir o eliminar solicita una línea completa; para mostrar lista cada producto con su número.

### Contrato de las funciones

```c
bool lista_compras_agregar(lista_compras_t *l, const char *item);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
