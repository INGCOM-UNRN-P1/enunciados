Implementar funciones genéricas que usen la tabla para realizar conversiones.



``` c
const char *enum_a_string(int valor, const enum_string_t *tabla, size_t tam);
int string_a_enum(const char *nombre, const enum_string_t *tabla, size_t tam,
                  int valor_defecto);
```

## Estado de Juego

Modelar el estado de un juego simple usando múltiples enumeraciones.

```{code-block} c
:linenos:
enum estado_juego
{
    JUEGO_MENU,
    JUEGO_JUGANDO,
    JUEGO_PAUSADO,
    JUEGO_GAME_OVER,
    JUEGO_VICTORIA
};
enum dificultad
{
    DIFICULTAD_FACIL,
    DIFICULTAD_NORMAL,
    DIFICULTAD_DIFICIL,
    DIFICULTAD_EXPERTO
};
typedef struct
{
    enum estado_juego estado;
    enum dificultad dificultad;
    unsigned int puntuacion;
    unsigned int nivel;
    unsigned int vidas;
} juego_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Funciones de conversión genéricas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_conversion_generi(int val);

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
