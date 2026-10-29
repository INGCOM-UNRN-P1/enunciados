#### Descripción
Un número vampiro es un número de `2k` dígitos que puede ser factorizado en dos
números de `k` dígitos (los "colmillos"), donde los dígitos de los colmillos,
concatenados, son una permutación de los dígitos del número original.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_vampiro_4_digitos(n)
INICIO
    PARA i DESDE 10 HASTA 99 HACER
        PARA j DESDE i HASTA 99 HACER
            SI i * j == n ENTONCES
                digitos_n = obtener_digitos_ordenados(n)
                digitos_colmillos = obtener_digitos_ordenados(i, j)
                SI digitos_n == digitos_colmillos ENTONCES
                    RETORNAR VERDADERO
                FIN SI
            FIN SI
        FIN PARA
    FIN PARA
    RETORNAR FALSO
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Vampiro
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_3_30_numeros_vampiro(int val);

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
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- **Entrada:** Un número `n` de 4 dígitos.
- **Proceso:**
- Iterar a través de todos los posibles pares de "colmillos" de 2 dígitos (`i` y `j`).
- Verificar si `i * j == n`.
- Si es así, obtener los 4 dígitos de `n` y los 4 dígitos de `i` y `j`.
- Verificar si los dos conjuntos de dígitos son permutaciones el uno del otro (ej. ordenándolos y comparando). error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar que el número tenga una cantidad par de dígitos.
- Verificar que los colmillos no terminen ambos en cero simultáneamente.
:::
