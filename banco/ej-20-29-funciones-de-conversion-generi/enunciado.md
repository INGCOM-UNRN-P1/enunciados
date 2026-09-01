### Ejercicio 20.29 - Funciones de conversión genéricas ⭐⭐☆☆☆

Implementar funciones genéricas que usen la tabla para realizar conversiones.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
const char *enum_a_string(int valor, const enum_string_t *tabla, size_t tam);
int string_a_enum(const char *nombre, const enum_string_t *tabla, size_t tam,
                  int valor_defecto);
```
<!-- c -->

## Estado de Juego

Modelar el estado de un juego simple usando múltiples enumeraciones.

```{code-block} c
:linenos:
enum estado_juego
{
    JUEGO_MENU,
    JUEGO_JUGANDO,
    JUEGO_PAUSADO,
    JUEGO_GAME_OVER,
    JUEGO_VICTORIA
};
enum dificultad
{
    DIFICULTAD_FACIL,
    DIFICULTAD_NORMAL,
    DIFICULTAD_DIFICIL,
    DIFICULTAD_EXPERTO
};
typedef struct
{
    enum estado_juego estado;
    enum dificultad dificultad;
    unsigned int puntuacion;
    unsigned int nivel;
    unsigned int vidas;
} juego_t;
```
<!-- {code-block} c -->
