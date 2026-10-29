#### Descripción
Calcular el factorial de un número entero no negativo `n`, denotado como `n!`.
El factorial es el producto de todos los enteros positivos desde 1 hasta `n`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION factorial(n)
VARIABLES:
    resultado (entero largo)
INICIO
    SI n < 0 ENTONCES
        RETORNAR -1 // Error
    FIN SI
    SI n == 0 ENTONCES
        RETORNAR 1
    FIN SI

    resultado = 1
    PARA i DESDE 2 HASTA n HACER
        resultado = resultado * i
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Factorial
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_3_5_factorial(int val);

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
- **Entrada:** Un entero no negativo `n`.
- **Casos Base:** Por definición, `0! = 1`. El factorial de 1 es 1.
- **Proceso:** Se utiliza un lazo que itera desde 2 hasta `n`. Se necesita una variable `resultado` (de tipo `long long` para evitar desbordamiento rápido) inicializada en 1. En cada iteración, se multiplica `resultado` por el número actual del lazo.
- **Desbordamiento:** Los factoriales crecen muy rápido. Usar un tipo de dato grande como `unsigned long long` es crucial. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Validar que n >= 0 y usar long long para retrasar el desbordamiento numérico.
- Informar el valor máximo de n para el cual no se produce desbordamiento con el tipo empleado.
:::
