Implementar una función que formatee un mensaje de log incluyendo el nivel como
prefijo.



``` c
void log_mensaje(enum nivel_log nivel, const char *mensaje);
```

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

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Formateo de mensaje de log
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_eo_de_mensaje_de_log(int val);

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
