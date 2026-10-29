

# Simplificación de Funciones
> **ID:** `ej-24-1-simplificacion-de-funciones`
 · **Tema:** `complejidad`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:algoritmos_ordenamiento`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `simplificacion`, `big_o`, `funciones`, `complejidad`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-24-1-simplificacion-de-funciones.ripkg`**](../../paquetes/ej-24-1-simplificacion-de-funciones.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-24-1-simplificacion-de-funciones.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["algoritmos_ordenamiento"]
        
        node_pre_2["lazos_anidados"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-24-1-simplificacion-de-funciones<br/><small>complejidad · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 24.1 - Simplificación de Funciones ⭐⭐☆☆☆

Para cada función de costo, determinar su clasificación en notación Big-O
(ignorando constantes y términos de menor orden):
a) $T(n) = 5n^3 + 2n^2 + 100$  
b) $T(n) = 3n \log n + 2n + 50$  
c) $T(n) = 2^n + n^3 + 1000n$  
d) $T(n) = \log(n^2) + \sqrt{n}$  
e) $T(n) = n! + 2^n + n^{10}$
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-24-1-simplificacion-de-funciones.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_24_1_SIMPLIFICACION_DE_FUNCIONES_H
#define EJERCICIO_EJ_24_1_SIMPLIFICACION_DE_FUNCIONES_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Simplificación de Funciones */
int proc_icacion_de_funciones(int val);

#endif /* EJERCICIO_EJ_24_1_SIMPLIFICACION_DE_FUNCIONES_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_icacion_de_funciones` | `int` | `int val` | Procesa el flujo principal de Simplificación de Funciones |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Diseñar la función para devolver un código de estado de error e informar el resultado mediante parámetros de salida.
```

```{tab-item} Pista 2
[Plus Ultra] Documentar la función con etiquetas Doxygen especificando precondiciones y postcondiciones.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_icacion_de_funciones_positivo** | `proc_icacion_de_funciones` | `int res = proc_icacion_de_funciones(5); assert(res == 10 || res >= 0);` |

| **test_proc_icacion_de_funciones_cero** | `proc_icacion_de_funciones` | `int res = proc_icacion_de_funciones(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Simplificación de Funciones
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_icacion_de_funciones(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Simplificación de Funciones */
    return 0;
}
```
```
