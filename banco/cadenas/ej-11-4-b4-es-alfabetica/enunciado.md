#### Descripción
Crear una función que determine si una cadena contiene únicamente caracteres
alfabéticos (de la 'a' a la 'z', mayúsculas o minúsculas).



:::{tip} Lógica y Consideraciones

-   **Proceso:** Recorrer la cadena. Para cada carácter, verificar si está
    dentro del rango de 'a' a 'z' o de 'A' a 'Z'.
-   **Funciones de Biblioteca:** La biblioteca `ctype.h` proporciona la función
    `isalpha()`, que simplifica enormemente esta comprobación.
-   **Condición de Salida:** Si se encuentra un carácter que no es alfabético,
    la función puede retornar `falso` inmediatamente. Si el lazo termina,
    significa que todos los caracteres son alfabéticos.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_alfabetica(cadena)
INICIO
    PARA cada caracter c en cadena HACER
        SI NO es_letra(c) ENTONCES
            RETORNAR FALSO
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```

:::

## Propiedades de Cadenas

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de ¿Es alfabética?
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_1_4_b4_es_alfabetica(int val);

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
- **Proceso:** Recorrer la cadena. Para cada carácter, verificar si está dentro del rango de 'a' a 'z' o de 'A' a 'Z'.
- **Funciones de Biblioteca:** La biblioteca `ctype.h` proporciona la función `isalpha()`, que simplifica enormemente esta comprobación.
- **Condición de Salida:** Si se encuentra un carácter que no es alfabético, la función puede retornar `falso` inmediatamente. Si el lazo termina, significa que todos los caracteres son alfabéticos.
:::
