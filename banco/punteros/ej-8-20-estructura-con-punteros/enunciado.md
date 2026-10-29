### Ejercicio 8.20 - Estructura con Punteros ⭐⭐⭐☆☆

Dada:

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
typedef struct
{
    char *nombre;
    int edad;
} persona_t;
```
<!-- c -->

Implementar `void crear_persona(persona_t *p, const char *nombre, int edad)` que
inicialice la estructura, reservando memoria para el nombre con `strdup` o
`malloc` + `strcpy`.

**Importante:** También implementar `void liberar_persona(persona_t *p)` que
libere la memoria del nombre.

---

## Punteros a Funciones
