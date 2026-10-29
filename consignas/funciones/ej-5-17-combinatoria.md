

# Combinatoria
> **ID:** `ej-5-17-combinatoria`
 · **Tema:** `funciones`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-17-combinatoria.ripkg`**](../../paquetes/ej-5-17-combinatoria.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-17-combinatoria.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["lazos"]
        
        node_pre_2["secuencias"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-5-17-combinatoria<br/><small>funciones · B4</small>"]

    
```


## 📖 Consigna

# Combinatoria

## Ejercicio 5.17 - Combinatoria ⭐⭐⭐⭐☆

Implementá funciones modulares para el cálculo de combinatoria:
- `long long combinaciones(int n, int k);` — Calcula el número combinatorio $C(n, k) = \frac{n!}{k!(n-k)!}$.
- `long long permutaciones(int n, int k);` — Calcula las permutaciones $P(n, k) = \frac{n!}{(n-k)!}$.

**Orientación:**
- Optimizá el cálculo de $C(n, k)$ simplificando factores para evitar calcular factoriales completos que desborden rápidamente la representación entera.
- Utilizá el tipo `long long` para los resultados (y las operaciones intermedias).
- Si `k < 0` o `k > n`, retornar `0`. Si `k == 0` o `k == n`, $C(n, k) = 1$.
- Las funciones deben ser puras (sin llamadas a `printf` ni `scanf`, Regla 0x2002h).

:::{hint} Lógica y Consideraciones
- Propiedad de simetría: $C(n, k) = C(n, n-k)$. Podés hacer `if (k > n / 2) k = n - k;` para reducir iteraciones.
- Documentá las precondiciones ($0 \le k \le n$) y postcondiciones con Doxygen estructurado (Regla 0x2003h).

-   **[*plus ultra*]:** Prevenir desbordamientos intermedios multiplicando y dividiendo progresivamente en cada paso del lazo.
-   **[*plus ultra*]:** Validar las precondiciones con assert() en casos de prueba en `main()`.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_18)=


## 📋 Prototipos y Cabecera (`ej-5-17-combinatoria.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_17_COMBINATORIA_H
#define EJERCICIO_EJ_5_17_COMBINATORIA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Calcula combinaciones C(n,k) */
long long combinaciones(int n, int k);
/* Calcula permutaciones P(n,k) */
long long permutaciones(int n, int k);

#endif /* EJERCICIO_EJ_5_17_COMBINATORIA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `combinaciones` | `long long` | `int n, int k` | Calcula combinaciones C(n,k) |

| `permutaciones` | `long long` | `int n, int k` | Calcula permutaciones P(n,k) |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_comb** | `combinaciones` | `assert(combinaciones(5, 2) == 10); assert(combinaciones(5, 0) == 1);` |

| **test_perm** | `permutaciones` | `assert(permutaciones(5, 2) == 20);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>

long long combinaciones(int n, int k) {
    if (k < 0 || k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n / 2) k = n - k;
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

long long permutaciones(int n, int k) {
    if (k < 0 || k > n) return 0;
    long long res = 1;
    for (int i = 0; i < k; i++) {
        res *= (n - i);
    }
    return res;
}

int main(void) {
    printf("C(5, 2): %lld\n", combinaciones(5, 2));
    return 0;
}
```
```
