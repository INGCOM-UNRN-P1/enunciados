### Ejercicio 20.28 - Tabla de conversión ⭐⭐☆☆☆

Implementar un sistema genérico para convertir entre valores enum y strings
usando tablas de conversión.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef struct
{
    int valor;
    const char *nombre;
} enum_string_t;
// Ejemplo de uso con días de la semana
const enum_string_t tabla_dias[] = {
    {LUNES, "Lunes"},
    {MARTES, "Martes"},
    {MIERCOLES, "Miércoles"},
    // ...
};
```
<!-- {code-block} c -->
