Implementar el protocolo y manejo de comunicaciones en red en C para: **Servidor WebSocket Simplificado: Handshake de Conexión**.
El programa debe gestionar correctamente la serialización de tramas binarias, conversión de orden de bytes de red y host (Endianness), validación de sumas de verificación (checksum) y control robusto de descriptores de sockets según los estándares POSIX/C11.

- `int ejecutar_net_sock_24(int val)`: Procesa el flujo principal de Servidor WebSocket Simplificado: Handshake de Conexión

- Validar adecuadamente los casos de borde y parámetros de entrada.
- Garantizar la correcta liberación y administración de memoria dinámica si aplica.
- Respetar los nombres y prototipos de funciones especificados en la cabecera correspondiente.
- Tiempo estimado de resolución: 35 minutos (Nivel Bloom 4).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Servidor WebSocket Simplificado: Handshake de Conexión
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_net_sock_24(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Recordá que Big Endian transmite el byte más significativo primero.
- Validá el tamaño de los búferes de transmisión.
:::
