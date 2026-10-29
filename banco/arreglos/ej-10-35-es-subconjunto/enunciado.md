Implementar una función que determine si un arreglo `A` es un subconjunto de
otro arreglo `B`. Esto significa que todos los elementos de `A` deben estar
presentes en `B`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_subconjunto(A, nA, B, nB)
VARIABLES:
    i, j (enteros)
INICIO
    ORDENAR(A, nA)
    ORDENAR(B, nB)
    i = 0, j = 0
    MIENTRAS i < nA Y j < nB HACER
        SI A[i] > B[j] ENTONCES
            j = j + 1
        SINO SI A[i] == B[j] ENTONCES
            i = i + 1, j = j + 1
        SINO // A[i] < B[j]
            RETORNAR FALSO
        FIN SI
    FIN MIENTRAS

    RETORNAR (i == nA)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de ¿Es subconjunto?
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_10_35_es_subconjunto(int val);

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
- **Proceso (con ordenamiento):**
- Ordenar ambos arreglos, `A` y `B`.
- Usar dos punteros, `i` para `A` y `j` para `B`.
- Recorrer ambos arreglos. Si `A[i] == B[j]`, se encontró una coincidencia, avanzar ambos. Si `A[i] > B[j]`, avanzar `j`. Si `A[i] < B[j]`, significa que `A[i]` no está en `B`, por lo que no es subconjunto.
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
