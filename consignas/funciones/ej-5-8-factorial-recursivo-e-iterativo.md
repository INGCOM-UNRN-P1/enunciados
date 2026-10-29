

# Factorial Recursivo e Iterativo
> **ID:** `ej-5-8-factorial-recursivo-e-iterativo` · **Unidad:** 1 (Fundamentos y Estructuras de Control)
 · **Tema:** `funciones` / `funciones_general`
 · **Bloom:** B2 (Comprender) · **Dificultad:** Inicial
 · **Carga:** ~15 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:lazos`, `dep:secuencias`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-5-8-factorial-recursivo-e-iterativo.ripkg`**](../../paquetes/ej-5-8-factorial-recursivo-e-iterativo.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-5-8-factorial-recursivo-e-iterativo.ripkg
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
    
    

    current_node["🎯 ej-5-8-factorial-recursivo-e-iterativo<br/><small>funciones · B2</small>"]

    
```


## 📖 Consigna

# Factorial Recursivo e Iterativo

## Ejercicio 5.8 - Factorial Recursivo e Iterativo ⭐⭐☆☆☆

Implementá dos versiones de la función factorial:
- `int factorial_iterativo(int n);`
- `int factorial_recursivo(int n);`

**Orientación:**
- Iterativo: usá un lazo `for` o `while` acumulando el producto.
- Recursivo: `n * factorial_recursivo(n - 1)`, con caso base `n <= 1` retornando `1`.
- Si `n < 0`, retornar `-1` como código de error.

:::{hint} Lógica y Consideraciones
- El factorial de 0 y de 1 es 1 (`0! = 1`, `1! = 1`).
- Asegurate de documentar ambas funciones con Doxygen (Regla 0x2003h).

-   **[*plus ultra*]:** Validar que n >= 0 retornando -1 en caso de error y usar `long long` para el resultado.
-   **[*plus ultra*]:** Escribir pruebas unitarias con assert() comparando que ambas versiones produzcan exactamente el mismo resultado.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_9)=


## 📋 Prototipos y Cabecera (`ej-5-8-factorial-recursivo-e-iterativo.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_5_8_FACTORIAL_RECURSIVO_E_ITERATIVO_H
#define EJERCICIO_EJ_5_8_FACTORIAL_RECURSIVO_E_ITERATIVO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Factorial iterativo */
int factorial_iterativo(int n);
/* Factorial recursivo */
int factorial_recursivo(int n);

#endif /* EJERCICIO_EJ_5_8_FACTORIAL_RECURSIVO_E_ITERATIVO_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `factorial_iterativo` | `int` | `int n` | Factorial iterativo |

| `factorial_recursivo` | `int` | `int n` | Factorial recursivo |








## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_factorial_it** | `factorial_iterativo` | `assert(factorial_iterativo(5) == 120); assert(factorial_iterativo(0) == 1);` |

| **test_factorial_rec** | `factorial_recursivo` | `assert(factorial_recursivo(5) == 120); assert(factorial_recursivo(0) == 1);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
#include <stdio.h>
#include <assert.h>

int factorial_iterativo(int n) {
    if (n < 0) return -1;
    int res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}

int factorial_recursivo(int n) {
    if (n < 0) return -1;
    if (n <= 1) return 1;
    return n * factorial_recursivo(n - 1);
}

int main(void) {
    printf("Fact 5: %d\n", factorial_iterativo(5));
    return 0;
}
```
```
