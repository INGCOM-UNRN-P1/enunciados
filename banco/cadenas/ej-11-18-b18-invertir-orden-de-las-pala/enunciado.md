#### Descripción
Escribir una función que invierta el orden de las palabras en una frase. Por
ejemplo, "Hola Mundo desde C" se convertiría en "C desde Mundo Hola".



:::{tip} Lógica y Consideraciones

-   **Proceso (dos pasos):**
    1.  Invertir la cadena de caracteres completa. ("Hola Mundo desde C" -> "C
        edsed odnuM aloH").
    2.  Recorrer la nueva cadena e invertir cada palabra individualmente (usando
        la lógica del ejercicio 5.1). ("C" -> "C", "edsed" -> "desde", etc.).

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO invertir_orden_palabras(REF frase)
INICIO
    // Paso 1: Invertir toda la frase
    invertir_subcadena(frase, 0, LONGITUD(frase) - 1)

    // Paso 2: Invertir cada palabra individualmente
    invertir_palabras(frase)
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Invertir orden de las palabras
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ir_orden_de_las_pala(int val);

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
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
- **Proceso (dos pasos):**
- Invertir la cadena de caracteres completa. ("Hola Mundo desde C" -> "C edsed odnuM aloH").
- Recorrer la nueva cadena e invertir cada palabra individualmente (usando la lógica del ejercicio 5.1). ("C" -> "C", "edsed" -> "desde", etc.).
:::
