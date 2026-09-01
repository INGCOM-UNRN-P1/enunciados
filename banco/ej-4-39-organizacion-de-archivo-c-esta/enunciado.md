### Ejercicio 4.39 - Organización de Archivo `.c` Estándar ⭐☆☆☆☆

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
<!-- {exercise} -->

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
<!-- {solution} ej-test-organizacion-archivo -->

---
