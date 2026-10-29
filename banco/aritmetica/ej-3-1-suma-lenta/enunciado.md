#### Descripción
Implementar la función `int suma_lenta(int a, int b);` que simule la adición de dos números enteros, `a` y `b`, utilizando únicamente las operaciones más básicas de la unidad aritmético-lógica: sumar o restar 1. Este ejercicio ayuda a comprender la suma como una serie de incrementos o decrementos sucesivos.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION suma_lenta(a, b)
VARIABLES:
    resultado (entero)
INICIO
    resultado = a
    SI b > 0 ENTONCES
        PARA i DESDE 1 HASTA b HACER
            resultado = resultado + 1
        FIN PARA
    SINO
        PARA i DESDE 1 HASTA VALOR_ABSOLUTO(b) HACER
            resultado = resultado - 1
        FIN PARA
    FIN SI
    RETORNAR resultado
FIN FUNCION
```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Suma a y b mediante incrementos o decrementos unitarios
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int suma_lenta(int a, int b);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
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
- **Entrada:** Dos números enteros, `n` y `m`.
- **Proceso:** El objetivo es llegar desde `n` al resultado `n+m` aplicando la operación de incremento `m` veces (si `m` es positivo) o la operación de decremento `|m|` veces (si `m` es negativo).
- Se puede usar un lazo que se repita `abs(m)` veces (el valor absoluto de `m`).
- Dentro del lazo, se verifica el signo de `m`. Si `m > 0`, se incrementa el resultado. Si `m < 0`, se decrementa. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Validar que los operandos sean enteros no negativos antes de iniciar las sumas sucesivas.
- Contar la cantidad total de incrementos realizados para verificar el costo de la operación.
:::
