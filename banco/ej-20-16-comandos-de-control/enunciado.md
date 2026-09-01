### Ejercicio 20.16 - Comandos de control ⭐⭐☆☆☆

Implementar funciones para controlar el reproductor.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void reproducir(reproductor_t *rep);
void pausar(reproductor_t *rep);
void detener(reproductor_t *rep);
void siguiente_pista(reproductor_t *rep);
void anterior_pista(reproductor_t *rep);
```
<!-- c -->

Las funciones deben respetar el estado actual y el modo de reproducción.

## Prioridades y Niveles de Log

Implementar un sistema de logging con niveles de prioridad.

```{code-block} c
:linenos:
enum nivel_log
{
    LOG_DEBUG = 0,
    LOG_INFO,
    LOG_WARNING,
    LOG_ERROR,
    LOG_FATAL
};
```
<!-- {code-block} c -->
