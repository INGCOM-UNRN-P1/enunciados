#### Descripción
Crear una función que elimine los espacios en blanco redundantes de una cadena:
espacios al principio, al final y múltiples espacios entre palabras, dejando
solo un espacio entre cada palabra.



:::{tip} Lógica y Consideraciones

-   **Proceso (in-place con dos punteros):**
    1.  Usar un `puntero_lectura` y un `puntero_escritura`.
    2.  Recorrer la cadena con `puntero_lectura`.
    3.  Copiar un carácter de lectura a escritura solo si no es un espacio
        redundante. La condición para copiar podría ser: `si el carácter actual
        no es un espacio, O si el carácter anterior copiado no fue un espacio`.
    4.  Manejar los espacios al principio como un caso especial.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO eliminar_espacios_extra(REF cadena)
VARIABLES:
    p_lectura, p_escritura (enteros)
INICIO
    p_lectura = 0, p_escritura = 0
    MIENTRAS cadena[p_lectura] != FIN_DE_CADENA HACER
        // Copiar caracteres que no son espacios
        MIENTRAS cadena[p_lectura] != ' ' Y cadena[p_lectura] != FIN_DE_CADENA HACER
            cadena[p_escritura++] = cadena[p_lectura++]
        FIN MIENTRAS
        // Omitir múltiples espacios
        MIENTRAS cadena[p_lectura] == ' ' HACER
            p_lectura++
        FIN MIENTRAS
        // Añadir un solo espacio si no estamos al final
        SI cadena[p_lectura] != FIN_DE_CADENA ENTONCES
            cadena[p_escritura++] = ' '
        FIN SI
    FIN MIENTRAS
    cadena[p_escritura] = FIN_DE_CADENA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Eliminar espacios extra
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_minar_espacios_extra(int val);

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
- **Proceso (in-place con dos punteros):**
- Usar un `puntero_lectura` y un `puntero_escritura`.
- Recorrer la cadena con `puntero_lectura`.
- Copiar un carácter de lectura a escritura solo si no es un espacio redundante. La condición para copiar podría ser: `si el carácter actual no es un espacio, O si el carácter anterior copiado no fue un espacio`.
- Manejar los espacios al principio como un caso especial.
:::
