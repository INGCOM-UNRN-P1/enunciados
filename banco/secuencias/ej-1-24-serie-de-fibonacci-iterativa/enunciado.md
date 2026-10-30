Generar y mostrar los primeros `n` términos de la serie de Fibonacci. En esta
serie, cada número es la suma de los dos anteriores, comenzando con 0 y 1.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO fibonacci_iterativo
ENTRADA: n (entero)
VARIABLES:
    a, b, siguiente, i (enteros)

INICIO
    SI n >= 1 ENTONCES ESCRIBIR 0
    SI n >= 2 ENTONCES ESCRIBIR 1

    a = 0
    b = 1

    PARA i DESDE 3 HASTA n HACER
        siguiente = a + b
        ESCRIBIR siguiente
        a = b
        b = siguiente
    FIN PARA
FIN

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Serie de Fibonacci (Iterativa)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__fibonacci_iterativa(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- **Variables:** Se necesitan al menos tres variables para mantener el estado:
- **Casos Base:** Los primeros dos términos (para n=0 y n=1) son fijos (0 y
- **Proceso:**
- Usar tipos enteros sin signo o long long para calcular términos más altos sin desbordamiento.
- Calcular el cociente entre términos consecutivos para observar la convergencia al número áureo.
:::
