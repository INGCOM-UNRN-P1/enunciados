Implementar una función que mezcle dos colores RGB usando promedio aritmético.



``` c
rgb_t mezclar_colores(rgb_t c1, rgb_t c2);
```

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

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Mezcla de colores
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_10_mezcla_de_colores(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
