### Ejercicio 20.15 - Controlador de reproducción ⭐⭐☆☆☆

Implementar una estructura que encapsule el estado completo del reproductor.


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
    enum estado_reproductor estado;
    enum modo_reproduccion modo;
    unsigned int pista_actual;
    unsigned int total_pistas;
} reproductor_t;
```
<!-- {code-block} c -->
