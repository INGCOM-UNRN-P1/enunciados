### Ejercicio 20.42 - Estados de semáforo ⭐⭐⭐☆☆

Modelar un sistema de semáforo de tráfico.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum estado_semaforo
{
    SEMAFORO_ROJO,
    SEMAFORO_AMARILLO,
    SEMAFORO_VERDE,
    SEMAFORO_INTERMITENTE
};
enum direccion_trafico
{
    DIR_NORTE_SUR,
    DIR_ESTE_OESTE,
    DIR_TODAS
};
typedef struct
{
    enum estado_semaforo estado;
    enum direccion_trafico direccion_activa;
    int tiempo_restante; // Segundos
} semaforo_t;
```
<!-- {code-block} c -->
