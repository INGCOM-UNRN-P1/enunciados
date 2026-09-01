### Ejercicio 20.51 - Gestor de notificaciones ⭐⭐☆☆☆

Implementar funciones para filtrar y enviar notificaciones.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void enviar_notificacion(const notificacion_t *notif);
bool debe_notificar(enum nivel_notificacion nivel,
                    enum nivel_notificacion nivel_minimo);
unsigned int canales_para_nivel(enum nivel_notificacion nivel);
```
<!-- c -->

## Compresión de Datos
