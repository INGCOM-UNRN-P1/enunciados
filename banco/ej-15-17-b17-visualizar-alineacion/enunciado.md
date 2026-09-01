### Ejercicio 15.17 - b.17 - Visualizar Alineación ⭐⭐☆☆☆

Escribir un programa que demuestre la alineación de memoria en structs:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
struct sin_padding
{
    char a;   // 1 byte
    int b;    // 4 bytes
    char c;   // 1 byte
    double d; // 8 bytes
};
struct con_padding
{
    char a;   // 1 byte + 3 padding
    int b;    // 4 bytes
    char c;   // 1 byte + 7 padding
    double d; // 8 bytes
};
int main()
{
    printf("Tamaño sin optimizar: %zu bytes\n", sizeof(struct sin_padding));
    printf("Tamaño con padding: %zu bytes\n", sizeof(struct con_padding));
    // Imprimir offsets de cada campo
    struct con_padding s;
    printf("Offset de 'a': %zu\n", offsetof(struct con_padding, a));
    printf("Offset de 'b': %zu\n", offsetof(struct con_padding, b));
    printf("Offset de 'c': %zu\n", offsetof(struct con_padding, c));
    printf("Offset de 'd': %zu\n", offsetof(struct con_padding, d));
    return 0;
}
```
<!-- {code-block} c -->
