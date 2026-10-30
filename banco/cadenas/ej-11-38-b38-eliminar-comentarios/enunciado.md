#### Descripción
Crear una función que reciba una cadena (que puede representar una o más líneas
de código) y elimine los comentarios de estilo C (`//...` hasta el final de la
línea y `/*...*/` incluyendo el contenido).



:::{tip} Lógica y Consideraciones

-   **Máquina de Estados:** Este problema se resuelve mejor con una máquina de
    estados para rastrear si el procesador está en modo `NORMAL`,
    `DENTRO_DE_COMENTARIO_LINEA`, o `DENTRO_DE_COMENTARIO_BLOQUE`.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION eliminar_comentarios(codigo)
VARIABLES:
    resultado (cadena)
    estado (entero)
INICIO
    estado = NORMAL
    PARA i DESDE 0 HASTA LONGITUD(codigo)-1 HACER
        SI estado == NORMAL Y codigo[i] == '/' Y codigo[i+1] == '/' ENTONCES
            estado = DENTRO_DE_COMENTARIO_LINEA
        SINO SI estado == NORMAL Y codigo[i] == '/' Y codigo[i+1] == '*' ENTONCES
            estado = DENTRO_DE_COMENTARIO_BLOQUE
        SINO SI estado == DENTRO_DE_COMENTARIO_LINEA Y codigo[i] == '\n' ENTONCES
            estado = NORMAL
            AÑADIR '\n' a resultado
        SINO SI estado == DENTRO_DE_COMENTARIO_BLOQUE Y codigo[i] == '*' Y codigo[i+1] == '/' ENTONCES
            estado = NORMAL
            i++ // Saltar el '/'
        SINO SI estado == NORMAL ENTONCES
            AÑADIR codigo[i] a resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Eliminar comentarios
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_eliminar_comentarios(int val);

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
2. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
- **Máquina de Estados:** Este problema se resuelve mejor con una máquina de estados para rastrear si el procesador está en modo `NORMAL`, `DENTRO_DE_COMENTARIO_LINEA`, o `DENTRO_DE_COMENTARIO_BLOQUE`.
:::
