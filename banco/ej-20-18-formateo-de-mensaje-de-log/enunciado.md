### Ejercicio 20.18 - Formateo de mensaje de log ⭐⭐☆☆☆

Implementar una función que formatee un mensaje de log incluyendo el nivel como
prefijo.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void log_mensaje(enum nivel_log nivel, const char *mensaje);
```
<!-- c -->

Ejemplo de salida: `[ERROR] Archivo no encontrado`

## Protocolo de Comunicación

Diseñar estructuras para un protocolo simple de comunicación usando campos de
bits.

```{code-block} c
:linenos:
enum tipo_mensaje
{
    MSG_DATOS = 0,
    MSG_ACK = 1,
    MSG_NACK = 2,
    MSG_RESET = 3
};
typedef struct
{
    unsigned int tipo : 2;      // 2 bits para tipo (0-3)
    unsigned int prioridad : 2; // 2 bits para prioridad (0-3)
    unsigned int secuencia : 4; // 4 bits para número de secuencia (0-15)
} cabecera_mensaje_t;
```
<!-- {code-block} c -->
