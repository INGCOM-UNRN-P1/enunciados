#### Descripción
Implementar una versión simplificada del test de primalidad de Miller-Rabin. Es
un test probabilístico que, a diferencia de la división por tentativa, es
eficiente para números grandes.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_probablemente_primo(n, k_iteraciones)
INICIO
    // ... Lógica compleja del test de Miller-Rabin ...
    // Descomponer n-1 en d * 2^s
    // Repetir k veces:
    //   Elegir 'a' aleatorio en [2, n-2]
    //   Calcular x = a^d mod n
    //   Si x == 1 o x == n-1, continuar
    //   ... (lazo para s-1) ...
    // Si no pasa las pruebas, RETORNAR FALSO
    RETORNAR VERDADERO
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Test de Primalidad de Miller-Rabin
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_imalidad_de_miller_r(int val);

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
- **Teorema:** Se basa en propiedades de los números primos relacionadas con el Pequeño Teorema de Fermat. Es más complejo que los algoritmos anteriores.
- **Proceso Simplificado:**
- Dado un número `n` a probar, se eligen varias bases aleatorias `a` < `n`.
- Para cada base `a`, se comprueba si satisface ciertas congruencias. Si para alguna base no las satisface, `n` es compuesto. Si las satisface para todas las bases, es "probablemente primo".
- **Nota:** La implementación completa es avanzada. Un ejercicio más simple puede ser implementarlo para una sola base fija. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Modularizar la exponenciación modular (base^exp % mod) en una función pura.
- Probar la primalidad con varias bases distintas para aumentar la certeza.
:::
