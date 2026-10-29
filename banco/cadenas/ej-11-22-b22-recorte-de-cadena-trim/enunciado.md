#### Descripción
Implementar una función `trim` que modifique una cadena para eliminar todos los
espacios en blanco (o cualquier otro carácter de espaciado como tabuladores o
saltos de línea) que se encuentren al principio y al final de la misma.



:::{tip} Lógica y Consideraciones

-   **Proceso (dos etapas):**
    1.  **Eliminar espacios del final:** Recorrer la cadena desde el final hacia
        el principio. Mientras se encuentren espacios, reemplazarlos por el
        carácter nulo `\0`.
    2.  **Eliminar espacios del principio:** Encontrar el puntero al primer
        carácter que no sea un espacio. Luego, mover todo el bloque de la cadena
        (incluyendo el terminador nulo) a la posición inicial usando `memmove`.
-   **Funciones de Biblioteca:** `isspace()` de `ctype.h` es útil para detectar
    cualquier tipo de carácter de espaciado.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO trim(REF cadena)
VARIABLES:
    longitud, i, inicio (enteros)
INICIO
    longitud = LONGITUD(cadena)

    // Recortar final
    i = longitud - 1
    MIENTRAS i >= 0 Y es_espacio(cadena[i]) HACER
        i--
    FIN MIENTRAS
    cadena[i + 1] = FIN_DE_CADENA

    // Recortar inicio
    inicio = 0
    MIENTRAS cadena[inicio] != FIN_DE_CADENA Y es_espacio(cadena[inicio]) HACER
        inicio++
    FIN MIENTRAS

    // Mover la cadena si es necesario
    SI inicio > 0 ENTONCES
        mover_bloque_memoria(cadena, cadena + inicio, LONGITUD(cadena) - inicio + 1)
    FIN SI
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Recorte de cadena (Trim)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_corte_de_cadena_trim(int val);

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
4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
- **Proceso (dos etapas):**
- **Eliminar espacios del final:** Recorrer la cadena desde el final hacia el principio. Mientras se encuentren espacios, reemplazarlos por el carácter nulo `\0`.
- **Eliminar espacios del principio:** Encontrar el puntero al primer carácter que no sea un espacio. Luego, mover todo el bloque de la cadena (incluyendo el terminador nulo) a la posición inicial usando `memmove`.
- **Funciones de Biblioteca:** `isspace()` de `ctype.h` es útil para detectar cualquier tipo de carácter de espaciado.
:::
