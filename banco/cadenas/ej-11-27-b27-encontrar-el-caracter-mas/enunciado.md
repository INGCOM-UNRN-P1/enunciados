#### Descripción
Desarrollar una función que encuentre y devuelva el carácter que aparece con más
frecuencia en una cadena. Si hay empates, puede devolver cualquiera de los más
frecuentes.



:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Usar un arreglo de frecuencias de 256 enteros, como en el ejercicio 1.2.
    2.  Llenar el arreglo de frecuencias recorriendo la cadena.
    3.  Recorrer el arreglo de frecuencias para encontrar el índice que tiene el
        valor más alto. Ese índice es el código ASCII del carácter más
        frecuente.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION caracter_mas_frecuente(cadena)
VARIABLES:
    frecuencias (arreglo de 256 enteros)
    max_frecuencia, char_mas_frecuente (enteros)
INICIO
    // ... llenar arreglo de frecuencias ...

    max_frecuencia = -1
    PARA i DESDE 0 HASTA 255 HACER
        SI frecuencias[i] > max_frecuencia ENTONCES
            max_frecuencia = frecuencias[i]
            char_mas_frecuente = i
        FIN SI
    FIN PARA
    RETORNAR CARACTER(char_mas_frecuente)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Encontrar el carácter más frecuente
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_trar_el_caracter_mas(int val);

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
- Usar un arreglo de frecuencias de 256 enteros, como en el ejercicio 1.2.
- Llenar el arreglo de frecuencias recorriendo la cadena.
- Recorrer el arreglo de frecuencias para encontrar el índice que tiene el valor más alto. Ese índice es el código ASCII del carácter más frecuente.
:::
