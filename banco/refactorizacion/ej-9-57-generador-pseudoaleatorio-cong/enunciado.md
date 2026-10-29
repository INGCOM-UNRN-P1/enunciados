:::{exercise}
:label: ej-ref-lcg-pseudoaleatorio
Refactorizá la siguiente función que genera el siguiente número pseudoaleatorio
usando la fórmula $X_{n+1} = (a X_n + c) \pmod m$:

``` c
int lcg(int seed){return(seed*1103515245+12345)&0x7FFFFFFF;}
```

-   **[*plus ultra*]:** Reemplazar constantes mágicas por `#define
    LCG_MULTIPLICADOR` y `#define LCG_INCREMENTO`.
-   **[*plus ultra*]:** Diseñar la función pura `int
    generar_siguiente_aleatorio(int semilla_actual)`.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Generador Pseudoaleatorio Congruencial (LCG)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_pseudoaleatorio_cong(int val);

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
