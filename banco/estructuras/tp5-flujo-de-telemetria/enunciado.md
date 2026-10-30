Implementar el módulo [`sensor_flujo.h`](ejercicios/ejercicio1/sensor_flujo.h) para procesar secuencias continuas de mediciones tomadas por sensores de campo:

- `bool cargar_muestras(arreglo_dinamico_t *muestras, const int *valores, size_t n);`  
  Carga un lote de `n` mediciones en el arreglo dinámico `muestras`.
- `double calcular_promedio(const arreglo_dinamico_t *muestras);`  
  Calcula el promedio aritmético de las muestras registradas. Retorna `0.0` si no hay lecturas o el puntero es nulo.
- `size_t depurar_lecturas_erroneas(arreglo_dinamico_t *muestras, int codigo_error);`  
  Elimina todas las lecturas centinela que coincidan con `codigo_error` (por ejemplo `-999` por falla de sonda) compactando el arreglo con `arreglo_dinamico_compactar`.
- `bool extraer_eventos_pares(const arreglo_dinamico_t *muestras, arreglo_dinamico_t *eventos);`  
  Extrae a un nuevo arreglo dinámico `eventos` todas las lecturas de telemetría de valor par mediante `arreglo_dinamico_filtrar_pares`.

Usa la biblioteca del ejercicio `tp5-libdinamicos`.

### 📋 Contrato de las Funciones

```c
/*
 * Operación principal de cargar_muestras
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
bool cargar_muestras(arreglo_dinamico_t *muestras, const int *valores, size_t n);

/*
 * Operación principal de calcular_promedio
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
double calcular_promedio(const arreglo_dinamico_t *muestras);

/*
 * Operación principal de depurar_lecturas_erroneas
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
size_t depurar_lecturas_erroneas(arreglo_dinamico_t *muestras, int codigo_error);

/*
 * Operación principal de extraer_eventos_pares
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool extraer_eventos_pares(const arreglo_dinamico_t *muestras, arreglo_dinamico_t *eventos);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante AddressSanitizer o Valgrind.
