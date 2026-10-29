#### Descripción
Dado un número entero, encontrar y mostrar su descomposición en factores primos.
Por ejemplo, para 360, la salida sería `2^3 * 3^2 * 5`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO factores_primos(n)
VARIABLES:
    contador (entero)
INICIO
    // Manejar el factor 2
    contador = 0
    MIENTRAS n MOD 2 == 0 HACER
        contador = contador + 1
        n = n / 2
    FIN MIENTRAS
    SI contador > 0 ENTONCES ESCRIBIR "2^", contador

    // Manejar factores impares
    PARA i DESDE 3 HASTA RAIZ_CUADRADA(n) CON PASO 2 HACER
        contador = 0
        MIENTRAS n MOD i == 0 HACER
            contador = contador + 1
            n = n / i
        FIN MIENTRAS
        SI contador > 0 ENTONCES ESCRIBIR i, "^", contador
    FIN PARA

    // Si n es primo > 2
    SI n > 2 ENTONCES
        ESCRIBIR n, "^1"
    FIN SI
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Descomposición en Factores Primos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_cion_en_factores_pri(int val);

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
- Se itera con un divisor `d` comenzando en 2.
- Mientras `d*d <= n`, se verifica si `d` divide a `n`.
- Si `d` divide a `n`, se cuenta cuántas veces lo divide, se imprime el factor y su potencia, y se actualiza `n` dividiéndolo por `d` esa cantidad de veces.
- Si al final del lazo `n` es mayor que 1, ese `n` restante es también un factor primo. desbordamientos de búfer validando la capacidad máxima. líneas de manera robusta.
- Mostrar los factores primos en formato canónico con exponentes (ej. 2^3 * 3^2).
- Validar que el número a factorizar sea mayor que 1.
:::
