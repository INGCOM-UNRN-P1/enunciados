### Ejercicio 20.11 - Configurar dispositivo ⭐⭐☆☆☆

Implementar funciones para configurar cada tipo de dispositivo de forma segura.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
dispositivo_t crear_sensor(double temp_min, double temp_max);
dispositivo_t crear_motor(unsigned int rpm, bool horario);
dispositivo_t crear_led(unsigned char intensidad,
                        enum color_predefinido color);
```
<!-- c -->
