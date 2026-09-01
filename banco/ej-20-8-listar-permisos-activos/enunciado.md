### Ejercicio 20.8 - Listar permisos activos ⭐⭐☆☆☆

Implementar una función que imprima todos los permisos activos en un conjunto de
permisos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void mostrar_permisos(unsigned int permisos);
```
<!-- c -->

## Colores RGB con Enum

Definir una enumeración para colores predefinidos y una estructura para
representar colores RGB personalizados.

```{code-block} c
:linenos:
enum color_predefinido
{
    COLOR_NEGRO,
    COLOR_BLANCO,
    COLOR_ROJO,
    COLOR_VERDE,
    COLOR_AZUL,
    COLOR_AMARILLO,
    COLOR_MAGENTA,
    COLOR_CIAN
};
typedef struct
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
} rgb_t;
```
<!-- {code-block} c -->
