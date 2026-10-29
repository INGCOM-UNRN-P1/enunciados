#### Descripción
Implementar una forma simple de compresión de cadenas llamada Run-Length
Encoding. Esta técnica compacta una cadena reemplazando secuencias de caracteres
idénticos por el número de repeticiones seguido del carácter.



:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer la cadena de entrada.
    2.  Mantener un `contador` para el carácter actual.
    3.  Si el siguiente carácter es diferente o se llega al final de la cadena,
        se añade el `contador` y el carácter actual a la cadena de resultado.
    4.  Reiniciar el `contador` y continuar.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION comprimir_rle(cadena)
VARIABLES:
    resultado (cadena)
    contador, i (enteros)
INICIO
    i = 0
    MIENTRAS i < LONGITUD(cadena) HACER
        contador = 1
        MIENTRAS i+1 < LONGITUD(cadena) Y cadena[i] == cadena[i+1] HACER
            contador++, i++
        FIN MIENTRAS
        AÑADIR numero_a_cadena(contador) a resultado
        AÑADIR cadena[i] a resultado
        i++
    FIN MIENTRAS
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Compresión RLE (Run-Length Encoding)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ion_rle_run_length_e(int val);

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
- **Proceso:**
- Recorrer la cadena de entrada.
- Mantener un `contador` para el carácter actual.
- Si el siguiente carácter es diferente o se llega al final de la cadena, se añade el `contador` y el carácter actual a la cadena de resultado.
- Reiniciar el `contador` y continuar.
:::
