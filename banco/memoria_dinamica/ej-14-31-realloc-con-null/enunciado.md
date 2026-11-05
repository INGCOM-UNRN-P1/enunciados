Escribir un pequeño programa que demuestre que `realloc(NULL, n)` se comporta de
manera idéntica a `malloc(n)`. Verificar que la memoria se asigna correctamente.

`main` reserva bloques con `realloc(NULL, n)` y `malloc(n)`, inicializa ambos y comprueba que se pueden leer/escribir del mismo modo. C11 especifica que `realloc(NULL, n)` equivale a `malloc(n)` para este tamaño positivo.

### Contrato de las funciones

```c
void *realloc_desde_null(size_t bytes);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
