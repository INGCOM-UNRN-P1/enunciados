#### Descripción
Dos números primos `p` y `q` son gemelos si `q = p + 2`. El programa debe
encontrar todos los pares de primos gemelos hasta un límite $N$.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO primos_gemelos(N)
INICIO
    PARA p DESDE 2 HASTA N - 2 HACER
        SI es_primo(p) Y es_primo(p + 2) ENTONCES
            ESCRIBIR "(", p, ", ", p + 2, ")"
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Primos Gemelos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__3_24_primos_gemelos(int val);

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
- **Entrada:** Un límite superior $N$.
- **Proceso:**
- Iterar con un número `p` desde 2 hasta `N-2`.
- En cada iteración, verificar si tanto `p` como `p+2` son primos.
- Si ambos lo son, se ha encontrado un par de primos gemelos. valores fuera de rango o tipos inválidos. un lazo hasta que el usuario elija finalizar.
- Validar que el rango [a, b] sea válido y positivo.
- Contar la cantidad total de pares de primos gemelos en el rango.
:::
