#### Descripción
La conjetura de Goldbach (aún no probada) establece que todo número par mayor
que 2 puede expresarse como la suma de dos números primos. Escribir un programa
que, dado un número par, encuentre un par de números primos que lo sumen.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO encontrar_par_goldbach(n)
INICIO
    PARA p DESDE 2 HASTA n / 2 HACER
        SI es_primo(p) Y es_primo(n - p) ENTONCES
            ESCRIBIR n, " = ", p, " + ", n - p
            TERMINAR
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Conjetura de Goldbach
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_onjetura_de_goldbach(int val);

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
- **Entrada:** Un número entero par `n` > 2.
- **Proceso:**
- Se necesita una función `es_primo(x)`.
- Iterar con un número `p` desde 2 hasta `n/2`.
- En cada iteración, si `p` es primo, verificar si `n-p` también es primo.
- Si ambos lo son, se ha encontrado un par y se puede terminar. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar que el número ingresado sea un entero par mayor que 2.
- Encontrar todas las descomposiciones en suma de dos primos para el número dado.
:::
