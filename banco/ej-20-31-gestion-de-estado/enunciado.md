### Ejercicio 20.31 - Gestión de estado ⭐⭐⭐☆☆

Implementar funciones para transiciones de estado comunes.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void pausar_juego(juego_t *juego);
void reanudar_juego(juego_t *juego);
void perder_vida(juego_t *juego);
void ganar_nivel(juego_t *juego);
```
<!-- c -->

## Análisis de Tráfico con Enums Aninados

Modelar un sistema de análisis de tráfico de red con múltiples niveles de
clasificación.

```{code-block} c
:linenos:
enum protocolo
{
    PROTOCOLO_TCP,
    PROTOCOLO_UDP,
    PROTOCOLO_ICMP,
    PROTOCOLO_OTRO
};
enum tipo_trafico
{
    TRAFICO_NORMAL,
    TRAFICO_SOSPECHOSO,
    TRAFICO_MALICIOSO
};
typedef struct
{
    enum protocolo proto;
    enum tipo_trafico tipo;
    unsigned int puerto_origen;
    unsigned int puerto_destino;
    size_t bytes_transferidos;
} paquete_red_t;
```
<!-- {code-block} c -->
