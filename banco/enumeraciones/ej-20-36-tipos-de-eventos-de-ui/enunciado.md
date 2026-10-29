### Ejercicio 20.36 - Tipos de eventos de UI ⭐⭐☆☆☆

Modelar eventos de interfaz de usuario.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum tipo_evento
{
    EVENTO_CLICK,
    EVENTO_DOBLE_CLICK,
    EVENTO_PRESIONAR_TECLA,
    EVENTO_SOLTAR_TECLA,
    EVENTO_MOVER_MOUSE,
    EVENTO_SCROLL
};
enum boton_mouse
{
    BOTON_IZQUIERDO = 1,
    BOTON_DERECHO = 2,
    BOTON_MEDIO = 4
};
typedef struct
{
    enum tipo_evento tipo;
    int x, y;             // Coordenadas
    unsigned int botones; // Flags de botones presionados
    unsigned int tecla;
} evento_t;
```
<!-- {code-block} c -->
