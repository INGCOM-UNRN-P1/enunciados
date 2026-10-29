### Ejercicio 15.10 - b.10 - Buffer Overflow en Heap ⭐⭐☆☆☆

Demostrar un buffer overflow en memoria dinámica:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
int main()
{
    char *buffer = malloc(10);
    strcpy(buffer, "Esta cadena es mucho más larga que 10 bytes"); // OVERFLOW
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}
```
<!-- {code-block} c -->

Compilar con `-fsanitize=address` y observar la detección del
heap-buffer-overflow.

## Estrategias de Realocación
