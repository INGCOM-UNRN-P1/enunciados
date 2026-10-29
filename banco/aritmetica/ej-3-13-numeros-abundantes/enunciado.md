#### Descripción
Determinar si un número es "abundante". Un número es abundante si la suma de sus
divisores propios es mayor que el propio número.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_abundante(n)
VARIABLES:
    suma_divisores (entero)
INICIO
    suma_divisores = 0
    PARA i DESDE 1 HASTA n-1 HACER
        SI n MOD i == 0 ENTONCES
            suma_divisores = suma_divisores + i
        FIN SI
    FIN PARA
    RETORNAR (suma_divisores > n)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Abundantes
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_3_numeros_abundantes(int val);

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
- **Entrada:** Un entero `n`.
- **Proceso:** Es casi idéntico al de los números perfectos. Se calcula la suma de los divisores propios y, en lugar de comparar si es igual a `n`, se compara si es mayor que `n`. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar que la base y el exponente sean coherentes y manejar exponentes negativos con double.
- Implementar la exponenciación rápida por duplicaciones sucesivas.
:::
