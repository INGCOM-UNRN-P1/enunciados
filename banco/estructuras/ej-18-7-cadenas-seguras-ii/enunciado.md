### Ejercicio 18.7 - Cadenas Seguras II ⭐⭐⭐☆☆

Aplicar el mismo principio a las cadenas de caracteres para crear un tipo
`cadena_segura_t` que gestione su propia capacidad y longitud, evitando los
peligros asociados a las cadenas de C estándar.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
#define CAPACIDAD_MAX_CADENA 256
typedef struct
{
    char datos[CAPACIDAD_MAX_CADENA];
    size_t longitud;
} cadena_segura_t;
```
<!-- c -->
