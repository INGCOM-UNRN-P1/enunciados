Implementar un módulo de serialización y deserialización binaria en memoria con validación de cabecera mágica y suma de verificación (*Checksum*).

Estructura del formato de archivo/búfer:
- **Cabecera (12 bytes):**
  - `magic` (4 bytes): `0x42494E31` ("BIN1")
  - `version` (4 bytes): `1`
  - `checksum` (4 bytes): XOR acumulado de todos los datos de registros.
- **Payload:** $N$ registros de tipo `Producto` (`id`: uint32, `precio`: float, `stock`: uint32).

Comandos interactivos:
- `CREATE <N>`: Crea $N$ registros en memoria.
- `SAVE`: Serializa al búfer interno y muestra `SAVED bytes=<total> checksum=0x<hex>`.
- `LOAD`: Deserializa validando magic, version y checksum. Imprime `OK` o `ERROR_INTEGRIDAD`.
- `CORRUPT <byte_pos>`: Modifica un byte arbitrario del búfer serializado para simular corrupción física.
- `SHOW`: Muestra los productos cargados.
- `EXIT`: Termina.

### 📋 Contrato de las Funciones

```c
/*
 * Operación calcular_checksum
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
uint32_t calcular_checksum(const uint8_t *data, size_t len);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Archivo válido
```text
Entrada: "datos.txt" con 3 registros
Salida: 3 registros procesados
```
:::
:::{tab-item} Archivo inexistente
```text
Entrada: "no_existe.bin"
Salida: Manejo de error (NULL / código -1)
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
5. **Acceso a archivos:** Verificar que los punteros `FILE*` retornados por `fopen` sean distintos de `NULL` antes de leer o escribir.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Escribí una cabecera fija de 8 bytes con un número mágico (ej: `0x5031424E`) y la cantidad de registros.
- El checksum XOR recorre todos los bytes del payload de datos.
- Al cargar, validá primero el número mágico y recalculá el checksum; si difiere, informá `CORRUPTED`.
:::
