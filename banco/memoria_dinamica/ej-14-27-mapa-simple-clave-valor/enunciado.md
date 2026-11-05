Implementar una estructura para un mapa simple (diccionario) que almacene pares
clave-valor (`char*`-`int`). El mapa debe usar un arreglo dinámico de `struct
par {char* clave; int valor;}`. La tabla debe crecer usando `realloc` cuando se
quede sin espacio.

### Contrato de las funciones

```c
bool mapa_poner(mapa_t *m, const char *clave, const char *valor);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
