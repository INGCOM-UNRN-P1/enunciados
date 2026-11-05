Escribir una función `void liberar_historial(char** historial, int n_comandos)`
que libere correctamente toda la memoria utilizada por la estructura del
ejercicio 1.19: primero la memoria de cada cadena individual y luego la memoria
del arreglo de punteros.

### Contrato de las funciones

```c
void liberar_historial(char **historial, size_t n_comandos);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
