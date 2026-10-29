#### Descripción
Un número de Carmichael es un número que satisface la congruencia $b^{n-1}
\equiv 1 \pmod{n}$ para todos los enteros `b` coprimos con `n`. Escribir una
función que verifique si un número es un número de Carmichael.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_carmichael(n)
INICIO
    SI es_primo(n) O n MOD 2 == 0 RETORNAR FALSO

    PARA b DESDE 2 HASTA n-1 HACER
        SI mcd(b, n) == 1 ENTONCES
            SI potencia_modular(b, n-1, n) != 1 ENTONCES
                RETORNAR FALSO
            FIN SI
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números de Carmichael
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_umeros_de_carmichael(int val);

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
- **Proceso:**
- Verificar si `n` es compuesto (no es primo).
- Iterar con `b` desde 2 hasta `n-1`.
- Si `mcd(b, n) == 1`, verificar si `potencia_modular(b, n-1, n) != 1`.
- Si se encuentra un `b` que no cumple la condición, `n` no es de Carmichael. Si se prueban todos y la cumplen, sí lo es. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar que el número sea compuesto y satisfaga a^(n-1) ≡ 1 (mod n) para todo a coprimo con n.
- Comprobar el criterio de Korselt para verificar números de Carmichael.
:::
