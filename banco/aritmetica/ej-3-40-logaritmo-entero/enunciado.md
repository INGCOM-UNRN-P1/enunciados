#### Descripción
Calcular el logaritmo entero en base `b` de un número `n`. Es el mayor entero
`k` tal que $b^k \le n$. La implementación no debe usar funciones de `math.h`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION logaritmo_entero(n, b)
VARIABLES:
    k (entero)
INICIO
    k = 0
    MIENTRAS n >= b HACER
        n = n / b
        k = k + 1
    FIN MIENTRAS
    RETORNAR k
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Logaritmo Entero
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__40_logaritmo_entero(int val);

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
- **Proceso:** Se puede resolver con divisiones sucesivas.
- Inicializar `k = 0`.
- Mientras `n >= b`, dividir `n` por `b` e incrementar `k`.
- El valor final de `k` es el resultado. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Validar que el argumento sea estrictamente positivo y la base mayor que 1.
- Calcular el logaritmo entero mediante divisiones sucesivas en un lazo.
:::
