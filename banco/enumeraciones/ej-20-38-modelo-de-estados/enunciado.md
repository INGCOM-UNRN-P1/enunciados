### Ejercicio 20.38 - Modelo de estados ⭐⭐⭐☆☆

Modelar el ciclo de vida de un proceso en un sistema operativo.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum estado_proceso
{
    PROCESO_NUEVO,
    PROCESO_LISTO,
    PROCESO_EJECUTANDO,
    PROCESO_BLOQUEADO,
    PROCESO_TERMINADO
};
enum razon_bloqueo
{
    BLOQ_IO,
    BLOQ_MUTEX,
    BLOQ_SEMAFORO,
    BLOQ_MENSAJE
};
typedef struct
{
    int pid;
    enum estado_proceso estado;
    enum razon_bloqueo razon; // Solo válido si estado == BLOQUEADO
    int prioridad;
} proceso_t;
```
<!-- {code-block} c -->
