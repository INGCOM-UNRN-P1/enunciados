:::{exercise}
:label: ej-test-organizacion-archivo
Ordená las siguientes secciones de un archivo `.c` según la [Regla
0x5005h](../../reglas/5_buenas_practicas.md#0x5005h):
- Implementación de funciones públicas
- Inclusiones de bibliotecas estándar (`<stdio.h>`)
- Inclusiones de cabeceras propias (`"modulo.h"`)
- Función `main`
- Definición de macros `#define`
- Prototipos de funciones privadas (`static`)
- Implementación de funciones privadas (`static`)

-   **[*plus ultra*]:** Explicar por qué mantener un orden uniforme facilita la
    lectura por parte de otros programadores del equipo.

:::

:::{solution} ej-test-organizacion-archivo
:class: dropdown
El orden estándar según la Regla `0x5005h` es:
1. Inclusiones de bibliotecas estándar (`#include <stdio.h>`).
2. Inclusiones de cabeceras del proyecto (`#include "modulo.h"`).
3. Definición de macros y constantes (`#define`).
4. Prototipos de funciones privadas (`static int auxiliar(void);`).
5. Función `main` (si es el archivo principal) o funciones públicas.
6. Implementación de funciones privadas (`static`).

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Organización de Archivo `.c` Estándar
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_on_de_archivo_c_esta(int val);

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
