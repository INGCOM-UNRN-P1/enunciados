### Ejercicio 17.1 - Creación de Persona ⭐⭐☆☆☆

Implementar un constructor para la estructura `persona_t`:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef struct
{
    char *nombre;
    char *apellido;
    int edad;
} persona_t;
persona_t *persona_crear(const char *nombre, const char *apellido, int edad);
```
<!-- {code-block} c -->

**Requisitos:**
- Verificar que los parámetros no sean nulos.
- Manejar fallos de `malloc` en cualquier etapa, liberando memoria ya asignada.
- Retornar `NULL` si alguna asignación falla.
- Inicializar todos los campos correctamente.
