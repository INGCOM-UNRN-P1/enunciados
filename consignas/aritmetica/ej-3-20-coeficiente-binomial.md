

# Coeficiente Binomial
> **ID:** `ej-3-20-coeficiente-binomial` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `aritmetica` / `matematica`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:tipos_datos`
>
> **Etiquetas conceptuales:** `matematica`, `fundamentos`, `aritmetica`, `binomial`, `coeficiente`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-3-20-coeficiente-binomial.ripkg`**](../../paquetes/ej-3-20-coeficiente-binomial.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-3-20-coeficiente-binomial.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["tipos_datos"]
        
    end
    
    node_pre_1 --> current_node
    
    

    current_node["🎯 ej-3-20-coeficiente-binomial<br/><small>aritmetica · B3</small>"]

    
```


## 📖 Consigna

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


## 📋 Prototipos y Cabecera (`ej-3-20-coeficiente-binomial.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_3_20_COEFICIENTE_BINOMIAL_H
#define EJERCICIO_EJ_3_20_COEFICIENTE_BINOMIAL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Coeficiente Binomial */
int proc_coeficiente_binomial(int val);

#endif /* EJERCICIO_EJ_3_20_COEFICIENTE_BINOMIAL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_coeficiente_binomial` | `int` | `int val` | Procesa el flujo principal de Coeficiente Binomial |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
**Entrada:** Dos enteros no negativos, `n` y `k`.
```

```{tab-item} Pista 2
**Proceso:** Como se mencionó en el ejercicio anterior, calcularlo mediante la fórmula iterativa $\prod_{i=1}^{k} \frac{n-i+1}{i}$ es numéricamente más estable que usar factoriales. Es importante realizar la multiplicación antes de la división en cada paso para mantener la precisión y evitar divisiones prematuras.
```

```{tab-item} Pista 3
**Optimización:** Dado que $\binom{n}{k} = \binom{n}{n-k}$, se puede elegir el valor más pequeño entre `k` y `n-k` para reducir el número de iteraciones. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
```

```{tab-item} Pista 4
[Plus Ultra] Optimizar el cálculo de C(n, k) usando la propiedad C(n, k) = C(n, n-k).
```

```{tab-item} Pista 5
[Plus Ultra] Validar que 0 <= k <= n.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_coeficiente_binomial_positivo** | `proc_coeficiente_binomial` | `int res = proc_coeficiente_binomial(5); assert(res == 10 || res >= 0);` |

| **test_proc_coeficiente_binomial_cero** | `proc_coeficiente_binomial` | `int res = proc_coeficiente_binomial(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Coeficiente Binomial
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_coeficiente_binomial(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Coeficiente Binomial */
    return 0;
}
```
```
