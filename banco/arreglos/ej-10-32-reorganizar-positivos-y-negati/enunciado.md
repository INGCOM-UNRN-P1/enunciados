Reorganizar un arreglo _in-place_ de tal manera que todos los números negativos
aparezcan antes que todos los números positivos. El orden relativo entre los
números del mismo signo no es importante.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO reorganizar_signos(REF arreglo, tamano)
VARIABLES:
    izquierda, derecha (enteros)
INICIO
    izquierda = 0, derecha = tamano - 1
    MIENTRAS izquierda <= derecha HACER
        SI arreglo[izquierda] < 0 Y arreglo[derecha] < 0 ENTONCES
            izquierda = izquierda + 1
        SINO SI arreglo[izquierda] > 0 Y arreglo[derecha] < 0 ENTONCES
            INTERCAMBIAR(arreglo[izquierda], arreglo[derecha])
            izquierda = izquierda + 1, derecha = derecha - 1
        SINO SI arreglo[izquierda] > 0 Y arreglo[derecha] > 0 ENTONCES
            derecha = derecha - 1
        SINO
            izquierda = izquierda + 1, derecha = derecha - 1
        FIN SI
    FIN MIENTRAS
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Reorganizar positivos y negativos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_r_positivos_y_negati(int val);

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
- **Proceso (similar a separar pares/impares):** Usar dos punteros, `izquierda` y `derecha`. Mover `izquierda` hasta encontrar un número positivo y `derecha` hasta encontrar uno negativo. Luego, intercambiarlos y continuar hasta que los punteros se crucen.
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
