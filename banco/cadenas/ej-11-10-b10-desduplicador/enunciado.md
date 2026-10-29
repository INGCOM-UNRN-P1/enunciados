#### Descripción
Escribir una función que elimine los caracteres duplicados de una cadena,
conservando únicamente la primera aparición de cada carácter. La modificación
puede ser _in-place_.



:::{tip} Lógica y Consideraciones

-   **Estructura de Datos:** Se necesita una forma de registrar los caracteres
    que ya se han visto. Un arreglo booleano de 256 posiciones (`vistos`) es
    ideal para esto, donde cada índice corresponde a un código ASCII.
-   **Proceso (in-place):**
    1.  Utilizar dos punteros o índices: `puntero_lectura` y
        `puntero_escritura`, ambos comenzando al inicio de la cadena.
    2.  Recorrer la cadena con `puntero_lectura`.
    3.  Para cada carácter `c` leído:
        a. Verificar en el arreglo `vistos` si ya ha aparecido
        (`vistos[(int)c]`).
        b. Si no ha sido visto, copiarlo a la posición de `puntero_escritura`,
        marcarlo como visto (`vistos[(int)c] = VERDADERO`), y avanzar
        `puntero_escritura`.
    4.  Al final, colocar el carácter nulo `\0` en la posición de
        `puntero_escritura`.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO desduplicar(REF cadena)
VARIABLES:
    vistos (arreglo booleano de 256)
    p_lectura, p_escritura (enteros)
INICIO
    INICIALIZAR vistos con FALSO
    p_lectura = 0, p_escritura = 0

    MIENTRAS cadena[p_lectura] != FIN_DE_CADENA HACER
        caracter_actual = cadena[p_lectura]
        SI vistos[CODIGO_ASCII(caracter_actual)] == FALSO ENTONCES
            vistos[CODIGO_ASCII(caracter_actual)] = VERDADERO
            cadena[p_escritura] = caracter_actual
            p_escritura++
        FIN SI
        p_lectura++
    FIN MIENTRAS
    cadena[p_escritura] = FIN_DE_CADENA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Desduplicador
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_10_b10_desduplicador(int val);

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
- **Estructura de Datos:** Se necesita una forma de registrar los caracteres que ya se han visto. Un arreglo booleano de 256 posiciones (`vistos`) es ideal para esto, donde cada índice corresponde a un código ASCII.
- **Proceso (in-place):**
- Utilizar dos punteros o índices: `puntero_lectura` y `puntero_escritura`, ambos comenzando al inicio de la cadena.
- Recorrer la cadena con `puntero_lectura`.
- Para cada carácter `c` leído: a. Verificar en el arreglo `vistos` si ya ha aparecido (`vistos[(int)c]`). b. Si no ha sido visto, copiarlo a la posición de `puntero_escritura`, marcarlo como visto (`vistos[(int)c] = VERDADERO`), y avanzar `puntero_escritura`.
- Al final, colocar el carácter nulo `\0` en la posición de `puntero_escritura`.
:::
