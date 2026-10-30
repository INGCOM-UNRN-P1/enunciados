Diseñar y evaluar una arquitectura de procesamiento seguro en C que audite un búfer de datos contra desbordamientos, verifique invariantes de estructura y emita métricas de eficiencia.

### 📋 Contrato de las Funciones

```c
/*
 * Operación inicializar
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void inicializar(registro_seguro_53_t *r);

/*
 * Operación validar_y_cargar
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int validar_y_cargar(registro_seguro_53_t *r, const char *entrada);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Búfer seguro dentro de límites
```text
Entrada: "EntradaSegura123", longitud <= CAPACIDAD
Salida: Código 0 (Éxito)
```
:::
:::{tab-item} Intento de desbordamiento
```text
Entrada: Cadena de tamaño > CAPACIDAD
Salida: Rechazo controlado sin violación de memoria
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

:::{hint} Consideraciones Didácticas
- Identificá las precondiciones y el límite estricto del búfer.
:::
