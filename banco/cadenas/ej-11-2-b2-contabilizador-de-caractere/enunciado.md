#### Descripción
Implementar una función que calcule la frecuencia de aparición de cada carácter
dentro de una cadena y muestre el resultado para aquellos caracteres que
aparecen al menos una vez.



:::{tip} Lógica y Consideraciones

-   **Estructura de Datos:** Un arreglo de contadores es ideal para esto. Dado
    que los caracteres ASCII se pueden representar como enteros (de 0 a 255), se
    puede usar un arreglo de tamaño 256, donde el índice del arreglo corresponde
    al código ASCII del carácter.
-   **Proceso:**
    1.  Crear un arreglo `frecuencias` de 256 enteros, inicializado
        completamente en 0.
    2.  Recorrer la cadena de entrada. Para cada carácter `c`, incrementar el
        contador en la posición correspondiente a su valor ASCII:
        `frecuencias[(int)c]++`.
    3.  Después de recorrer toda la cadena, iterar sobre el arreglo
        `frecuencias` desde 0 a 255. Si `frecuencias[i]` es mayor que 0,
        significa que el carácter con código ASCII `i` apareció, y se imprime
        junto con su frecuencia.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO contabilizar_caracteres(cadena)
VARIABLES:
    frecuencias (arreglo de 256 enteros)
INICIO
    INICIALIZAR frecuencias con ceros

    PARA cada caracter c en cadena HACER
        frecuencias[CODIGO_ASCII(c)] = frecuencias[CODIGO_ASCII(c)] + 1
    FIN PARA

    PARA i DESDE 0 HASTA 255 HACER
        SI frecuencias[i] > 0 ENTONCES
            ESCRIBIR "Carácter '", CARACTER(i), "': ", frecuencias[i], " veces"
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Contabilizador de caracteres
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_lizador_de_caractere(int val);

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
- **Estructura de Datos:** Un arreglo de contadores es ideal para esto. Dado que los caracteres ASCII se pueden representar como enteros (de 0 a 255), se puede usar un arreglo de tamaño 256, donde el índice del arreglo corresponde al código ASCII del carácter.
- **Proceso:**
- Crear un arreglo `frecuencias` de 256 enteros, inicializado completamente en 0.
- Recorrer la cadena de entrada. Para cada carácter `c`, incrementar el contador en la posición correspondiente a su valor ASCII: `frecuencias[(int)c]++`.
- Después de recorrer toda la cadena, iterar sobre el arreglo `frecuencias` desde 0 a 255. Si `frecuencias[i]` es mayor que 0, significa que el carácter con código ASCII `i` apareció, y se imprime junto con su frecuencia.
:::
