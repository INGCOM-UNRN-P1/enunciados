### Ejercicio 15.8 - b.8 - Use After Free ⭐⭐☆☆☆

Crear un programa que cometa use-after-free:


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
    int *arr = malloc(sizeof(int) * 5);
    arr[0] = 100;
    free(arr);
    printf("%d\n", arr[0]); // ERROR: use after free
    return 0;
}
```
<!-- {code-block} c -->

Ejecutar con Valgrind: `valgrind --leak-check=full ./programa`
