#### Descripción
Implementar una función que encuentre y devuelva el primer carácter en una
cadena que no se repite en el resto de la cadena.



:::{tip} Lógica y Consideraciones

-   **Proceso (dos pasadas):**
    1.  **Primera pasada:** Usar un arreglo de frecuencias para contar las
        apariciones de cada carácter (como en el ejercicio 1.2).
    2.  **Segunda pasada:** Recorrer la cadena de entrada original. El primer
        carácter para el cual su contador en el arreglo de frecuencias sea 1, es
        el resultado.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION primer_no_repetido(cadena)
VARIABLES:
    frecuencias (arreglo de 256 enteros)
INICIO
    // ... llenar arreglo de frecuencias ...

    PARA cada caracter c en cadena HACER
        SI frecuencias[CODIGO_ASCII(c)] == 1 ENTONCES
            RETORNAR c
        FIN SI
    FIN PARA

    RETORNAR CARACTER_NULO // No se encontró ninguno
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Primer carácter no repetido
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__caracter_no_repetid(int val);

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
- **Proceso (dos pasadas):**
- **Primera pasada:** Usar un arreglo de frecuencias para contar las apariciones de cada carácter (como en el ejercicio 1.2).
- **Segunda pasada:** Recorrer la cadena de entrada original. El primer carácter para el cual su contador en el arreglo de frecuencias sea 1, es el resultado.
:::
