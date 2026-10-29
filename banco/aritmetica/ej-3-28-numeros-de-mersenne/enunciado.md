#### Descripción
Un número de Mersenne es un número de la forma $M_p = 2^p - 1$, donde `p` es un
número primo. El programa debe generar números de Mersenne y verificar si son a
su vez primos (primos de Mersenne).


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO primos_de_mersenne(limite_p)
INICIO
    PARA p DESDE 2 HASTA limite_p HACER
        SI es_primo(p) ENTONCES
            m = potencia(2, p) - 1
            SI es_primo(m) ENTONCES
                ESCRIBIR "M(", p, ") = ", m, " es un primo de Mersenne."
            FIN SI
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números de Mersenne
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__numeros_de_mersenne(int val);

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
- Generar números primos `p` (usando la criba o la función `es_primo`).
- Para cada primo `p`, calcular $M_p = 2^p - 1$.
- Verificar si el $M_p$ resultante es también primo. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar si el exponente p es primo antes de calcular 2^p - 1.
- Verificar si el número de Mersenne obtenido es primo para valores pequeños de p.
:::
