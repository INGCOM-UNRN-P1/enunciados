#### Descripción
Generar los primeros `n` términos de la secuencia de Tribonacci, donde cada
término es la suma de los tres anteriores. La secuencia puede comenzar de
diferentes formas, una común es `0, 1, 1, 2, 4, 7, 13, ...`


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO tribonacci(n)
VARIABLES:
    a, b, c, siguiente (enteros)
INICIO
    a=0, b=1, c=1
    // Imprimir los primeros términos según n
    PARA i DESDE 4 HASTA n HACER
        siguiente = a + b + c
        ESCRIBIR siguiente
        a = b, b = c, c = siguiente
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Secuencia de Tribonacci
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_uencia_de_tribonacci(int val);

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
- **Proceso:** Similar a Fibonacci, pero se necesitan tres variables para guardar los tres términos anteriores. valores fuera de rango o tipos inválidos. un lazo hasta que el usuario elija finalizar.
- Usar un lazo iterativo manteniendo tres variables de estado para los términos previos.
- Generar los primeros N términos de la secuencia de Tribonacci.
:::
