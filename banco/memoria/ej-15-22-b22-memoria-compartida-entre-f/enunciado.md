### Ejercicio 15.22 - b.22 - Memoria Compartida entre Funciones ⭐⭐☆☆☆

Implementar un patrón donde una función asigna memoria y otra la libera,
documentando claramente la responsabilidad:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
// El llamador es responsable de liberar la memoria retornada
char *construir_mensaje(const char *usuario)
{
    size_t len = strlen("Hola, ") + strlen(usuario) + 2;
    char *msg = malloc(len);
    if (msg == NULL)
    {
        return NULL;
    }
    snprintf(msg, len, "Hola, %s", usuario);
    return msg;
}
int main()
{
    char *mensaje = construir_mensaje("Alumno");
    if (mensaje != NULL)
    {
        printf("%s\n", mensaje);
        free(mensaje); // ¡El main debe liberar!
    }
    return 0;
}
```
<!-- {code-block} c -->

:::{note} Convención de Propiedad

Documentá claramente quién es responsable de liberar cada bloque de memoria. Usá
comentarios como "Caller must free" o "Takes ownership".

:::
<!-- {note} Convención de Propiedad -->
