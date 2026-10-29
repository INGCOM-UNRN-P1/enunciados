#### Descripción
Verificar si una matriz cuadrada `n x n` de números es un cuadrado mágico. Un
cuadrado mágico es una matriz donde la suma de los números de cada fila, cada
columna y ambas diagonales principales es la misma ("constante mágica").


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_cuadrado_magico(matriz, n)
VARIABLES:
    constante_magica, suma_actual (entero)
INICIO
    // Calcular constante de referencia
    constante_magica = suma_fila(matriz, 0)

    // Verificar filas y columnas
    PARA i DESDE 1 HASTA n-1 HACER
        SI suma_fila(matriz, i) != constante_magica RETORNAR FALSO
        SI suma_columna(matriz, i) != constante_magica RETORNAR FALSO
    FIN PARA

    // Verificar diagonales
    SI suma_diagonal_principal(matriz) != constante_magica RETORNAR FALSO
    SI suma_diagonal_secundaria(matriz) != constante_magica RETORNAR FALSO

    RETORNAR VERDADERO
FIN FUNCION

```

:::

---

## Más Teoría de Números y Algoritmos

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Cuadrado Mágico
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_3_31_cuadrado_magico(int val);

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
- **Entrada:** Una matriz `n x n`.
- **Proceso:**
- Calcular la suma de la primera fila y guardarla como la `constante_magica` de referencia.
- Iterar por las demás filas, calculando su suma y comparándola con la `constante_magica`.
- Iterar por todas las columnas, calculando su suma y comparándola.
- Calcular la suma de la diagonal principal y la diagonal secundaria y compararlas.
- Si todas las sumas son iguales, es un cuadrado mágico. filas (*row-major order*) para mejorar el uso de caché. estrictamente dentro de los límites del contenedor.
- Validar que la dimensión sea un entero impar positivo mayor o igual a 3.
- Verificar que la constante mágica calculada sea igual a n*(n^2 + 1)/2.
:::
