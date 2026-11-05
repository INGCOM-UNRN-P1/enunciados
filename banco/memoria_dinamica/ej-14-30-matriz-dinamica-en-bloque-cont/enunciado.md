Implementar la creación y liberación de una matriz `M x N` de dos formas:
1.  Como un arreglo de punteros a filas (el método tradicional).
2.  Como un único bloque de memoria contigua de `M*N` elementos, y un arreglo de
    punteros `int**` donde cada puntero `[i]` se calcula para que apunte a la
    fila `i` dentro del bloque contiguo. Comparar la complejidad de liberación
    de ambas.

### Contrato de las funciones

```c
bool matriz_crear_contigua(matriz_t *m, size_t filas, size_t columnas);
```

Las funciones auxiliares y las reglas de propiedad de memoria están declaradas en el header del ejercicio. En caso de error de reserva, las funciones que devuelven punteros retornan `NULL`; las funciones booleanas retornan `false`.

### Casos a contemplar

- Entradas vacías y punteros nulos cuando la interfaz los admite.
- Fallos de reserva y liberación completa de la memoria adquirida.
- Los tests del YAML ejercitan el contrato con casos funcionales.
