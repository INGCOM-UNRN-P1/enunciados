#### Descripción
Crear una función que verifique si una cadena representa una dirección IPv4
válida. Debe consistir en cuatro números entre 0 y 255, separados por puntos.



:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Usar `strtok` o una función similar para dividir la cadena por el
        delimitador `.`.
    2.  Contar el número de tokens. Deben ser exactamente 4.
    3.  Para cada token, convertirlo a entero (usando `atoi` o `sscanf`).
    4.  Verificar que el número esté en el rango [0, 255].

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_ipv4_valida(cadena)
VARIABLES:
    tokens (arreglo de cadenas)
    num (entero)
INICIO
    tokens = dividir_cadena(cadena, '.')
    SI LONGITUD(tokens) != 4 RETORNAR FALSO

    PARA cada token en tokens HACER
        SI token está vacío O NO es_numero(token) RETORNAR FALSO
        num = convertir_a_entero(token)
        SI num < 0 O num > 255 RETORNAR FALSO
    FIN PARA

    RETORNAR VERDADERO
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Validación de IP simple
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_idacion_de_ip_simple(int val);

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
- Usar `strtok` o una función similar para dividir la cadena por el delimitador `.`.
- Contar el número de tokens. Deben ser exactamente 4.
- Para cada token, convertirlo a entero (usando `atoi` o `sscanf`).
- Verificar que el número esté en el rango [0, 255].
:::
