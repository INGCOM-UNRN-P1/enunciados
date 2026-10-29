### Ejercicio 8.18 - Acceso a Miembros ⭐⭐☆☆☆

Dada una estructura:

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
typedef struct
{
    int x;
    int y;
} punto_t;
```
<!-- c -->

Implementar `void trasladar(punto_t *p, int dx, int dy)` que modifique las
coordenadas del punto sumando `dx` y `dy`.

**Notación:** Usar el operador `->` para acceder a miembros: `p->x += dx;`
