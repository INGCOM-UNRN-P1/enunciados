### Ejercicio 15.5 - b.5 - Manejo de Errores en Cadena ⭐⭐⭐☆☆

Escribir una función que aloje múltiples estructuras anidadas:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
struct persona_t
{
    char *nombre;
    char *apellido;
    struct direccion_t *direccion;
};
struct direccion_t
{
    char *calle;
    char *ciudad;
};
```
<!-- {code-block} c -->

La función debe manejar correctamente fallos de `malloc` en cualquier paso,
liberando todo lo previamente asignado antes de retornar `NULL`.
