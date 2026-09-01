### Ejercicio 20.10 - Mezcla de colores ⭐⭐☆☆☆

Implementar una función que mezcle dos colores RGB usando promedio aritmético.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
rgb_t mezclar_colores(rgb_t c1, rgb_t c2);
```
<!-- c -->

## Configuración de Dispositivo con Unión Etiquetada

Implementar una unión etiquetada para almacenar diferentes tipos de
configuración de dispositivos.

```{code-block} c
:linenos:
enum tipo_dispositivo
{
    DISPOSITIVO_SENSOR_TEMP,
    DISPOSITIVO_MOTOR,
    DISPOSITIVO_LED
};
typedef struct
{
    double temperatura_min;
    double temperatura_max;
} config_sensor_t;
typedef struct
{
    unsigned int velocidad_rpm;
    bool direccion_horaria;
} config_motor_t;
typedef struct
{
    unsigned char intensidad;
    enum color_predefinido color;
} config_led_t;
typedef struct
{
    enum tipo_dispositivo tipo;
    union
    {
        config_sensor_t sensor;
        config_motor_t motor;
        config_led_t led;
    } config;
} dispositivo_t;
```
<!-- {code-block} c -->
