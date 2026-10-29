#### Descripción
Verificar si un número es un número de Armstrong (o narcisista). Un número de
`k` dígitos es de Armstrong si es igual a la suma de sus propios dígitos
elevados a la potencia `k`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

FUNCION es_armstrong(n)
VARIABLES:
    k, suma, temp, digito (enteros)
INICIO
    k = contar_digitos(n)
    suma = 0
    temp = n

    MIENTRAS temp > 0 HACER
        digito = temp MOD 10
        suma = suma + potencia(digito, k)
        temp = temp / 10
    FIN MIENTRAS

    RETORNAR (suma == n)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números de Armstrong
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_numeros_de_armstrong(int val);

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
- **Proceso:**
- Contar el número de dígitos (`k`) del número `n`.
- Inicializar un acumulador `suma` en 0.
- Recorrer los dígitos de `n` (usando `% 10` y `/ 10`). Para cada dígito, calcular `digito^k` y añadirlo a la `suma`.
- Comparar la `suma` final con el número original `n`. desbordamientos de búfer validando la capacidad máxima. líneas de manera robusta.
- Determinar automáticamente la cantidad de dígitos del número antes de calcular las potencias.
- Encontrar todos los números de Armstrong de 3 y 4 dígitos.
:::
