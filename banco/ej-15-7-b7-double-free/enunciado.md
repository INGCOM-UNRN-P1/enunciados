### Ejercicio 15.7 - b.7 - Double Free ⭐⭐☆☆☆

Escribir un programa que deliberadamente cometa el error de double free:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
int main()
{
    int *ptr = malloc(sizeof(int) * 10);
    *ptr = 42;
    free(ptr);
    free(ptr); // ERROR: double free
    return 0;
}
```
<!-- {code-block} c -->

Compilar con AddressSanitizer (`gcc -fsanitize=address`) y observar el error
detectado.
