#### Descripción
Un número triangular es la suma de los `n` primeros números naturales. Por
ejemplo, el 4º número triangular es 1+2+3+4=10. El objetivo es escribir una
función que determine si un número entero dado es un número triangular.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_triangular(num)
VARIABLES:
    suma, i (enteros)
INICIO
    SI num < 0 RETORNAR FALSO

    suma = 0
    i = 1
    MIENTRAS suma < num HACER
        suma = suma + i
        i = i + 1
    FIN MIENTRAS

    RETORNAR (suma == num)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Triangulares
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_numeros_triangulares(int val);

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
- **Entrada:** Un entero positivo `num`.
- **Proceso:** Hay dos enfoques principales:
- **Iterativo:** Generar números triangulares sumando 1, 2, 3, ... en un acumulador. En cada paso, comparar el acumulador con `num`. Si son iguales, es triangular. Si el acumulador supera a `num`, no lo es.
- **Matemático:** Un número `x` es triangular si y solo si $8x+1$ es un cuadrado perfecto. Se puede calcular $8x+1$, obtener su raíz cuadrada, y verificar si es un entero. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Verificar si un número dado es triangular resolviendo la ecuación cuadrática asociada.
- Generar y mostrar los primeros N números triangulares.
:::
