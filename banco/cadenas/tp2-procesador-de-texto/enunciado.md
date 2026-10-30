Unir dos cadenas de texto intercalando un separador en un búfer destino
seguro de tamaño acotado por 'capacidad', utilizando las funciones de
copia y concatenación provistas por libcadenas.

Usa la biblioteca del ejercicio `tp2-libcadenas`.

### 📋 Contrato de las Funciones

```c
/*
 * Operación principal de unir_con_separador
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool unir_con_separador(char destino[], size_t capacidad, const char primero[], const char segundo[], const char separador[]);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Cadena estándar
```text
Entrada: "Algoritmos C11"
Salida: Cadena procesada
```
:::
:::{tab-item} Cadena vacía
```text
Entrada: ""
Salida: Longitud 0 / Código 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
