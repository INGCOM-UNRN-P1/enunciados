#### Descripción
Calcular el coeficiente binomial "n en k", denotado como $C(n, k)$ o
$\binom{n}{k}$, que representa el número de formas de elegir `k` elementos de un
conjunto de `n` elementos sin importar el orden.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION coeficiente_binomial(n, k)
    SI k < 0 O k > n ENTONCES
        RETORNAR 0
    FIN SI
    SI k == 0 O k == n ENTONCES
        RETORNAR 1
    FIN SI
    // Optimización
    SI k > n / 2 ENTONCES
        k = n - k
    FIN SI

    resultado = 1
    PARA i DESDE 1 HASTA k HACER
        resultado = resultado * (n - i + 1) / i
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Coeficiente Binomial
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_coeficiente_binomial(int val);

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
- **Entrada:** Dos enteros no negativos, `n` y `k`.
- **Proceso:** Como se mencionó en el ejercicio anterior, calcularlo mediante la fórmula iterativa $\prod_{i=1}^{k} \frac{n-i+1}{i}$ es numéricamente más estable que usar factoriales. Es importante realizar la multiplicación antes de la división en cada paso para mantener la precisión y evitar divisiones prematuras.
- **Optimización:** Dado que $\binom{n}{k} = \binom{n}{n-k}$, se puede elegir el valor más pequeño entre `k` y `n-k` para reducir el número de iteraciones. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Optimizar el cálculo de C(n, k) usando la propiedad C(n, k) = C(n, n-k).
- Validar que 0 <= k <= n.
:::
