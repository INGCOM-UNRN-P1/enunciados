### Ejercicio 17.4 - Estructura con Múltiples Niveles ⭐⭐⭐☆☆

Implementar constructor y destructor para esta estructura anidada:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef struct
{
    char *calle;
    char *ciudad;
    int codigo_postal;
} direccion_t;
typedef struct
{
    char *nombre;
    direccion_t *direccion;
    char **telefonos; // Array de cadenas
    size_t n_telefonos;
} contacto_t;
contacto_t *contacto_crear(const char *nombre, const char *calle,
                           const char *ciudad, int codigo_postal);
void contacto_destruir(contacto_t **ptr_contacto);
```
<!-- {code-block} c -->

**Desafío:** Manejar correctamente tres niveles de asignación: la estructura
principal, la dirección anidada, y el array dinámico de cadenas.

---

## Manejo de Errores en Cadena
