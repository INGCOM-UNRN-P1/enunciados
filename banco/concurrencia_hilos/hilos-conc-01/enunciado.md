Modelar una sección crítica para actualización de saldo o contador compartido simulando exclusion mutua.

### 📋 Contrato de las Funciones

```c
/*
 * Operación incrementar
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void incrementar(contador_mutex_t *cm, int delta);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Operación concurrente
```text
Acción: 2 hilos actualizan contador compartido
Salida: Contador consistente sin condiciones de carrera
```
:::
:::{tab-item} Sincronización segura
```text
Acción: Adquisición y liberación de mutex
Salida: Estado protegido
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
- Identificá las variables compartidas y las variables locales a cada hilo.
- Evitá deadlocks garantizando orden de adquisición de bloqueos.
:::
