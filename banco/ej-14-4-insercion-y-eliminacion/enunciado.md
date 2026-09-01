### Ejercicio 14.4 - Inserción y Eliminación ⭐⭐☆☆☆

Crear funciones que modifiquen un arreglo dinámico. Estas operaciones son
costosas porque pueden requerir realojar toda la estructura.

- **Inserción**: Para insertar un elemento, primero se debe agrandar el arreglo
  usando `realloc`. Luego, se deben desplazar los elementos existentes (con
  `memmove`) para hacer espacio, y finalmente colocar el nuevo elemento.
- **Eliminación**: Para eliminar un elemento, se deben desplazar los elementos
  posteriores para llenar el vacío. Opcionalmente, se puede usar `realloc` para
  reducir el tamaño del bloque de memoria.

## Cadenas Dinámicas
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
