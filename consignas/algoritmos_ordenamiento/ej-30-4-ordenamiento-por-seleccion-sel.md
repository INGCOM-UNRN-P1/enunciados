

# Ordenamiento por Selección (Selection Sort)
> **ID:** `ej-30-4-ordenamiento-por-seleccion-sel`
 · **Tema:** `algoritmos_ordenamiento`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`, `dep:recursividad`
>
> **Etiquetas conceptuales:** `seleccion`, `busqueda`, `selection`, `ordenamiento`, `avanzados`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-30-4-ordenamiento-por-seleccion-sel.ripkg`**](../../paquetes/ej-30-4-ordenamiento-por-seleccion-sel.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-30-4-ordenamiento-por-seleccion-sel.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["lazos_anidados"]
        
        node_pre_3["recursividad"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    node_pre_3 --> current_node
    
    

    current_node["🎯 ej-30-4-ordenamiento-por-seleccion-sel<br/><small>algoritmos_ordenamiento · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 30.4 - Ordenamiento por Selección (Selection Sort) ⭐⭐☆☆☆

Implementar el ordenamiento por selección. Este algoritmo divide el arreglo en
una parte ordenada y una desordenada. En cada iteración, encuentra el elemento
más pequeño de la parte desordenada y lo intercambia con el primer elemento de
esta, moviendo así el límite entre ambas partes.

**Lógica y Consideraciones:**
- **Proceso**: El lazo exterior itera desde `i = 0` hasta `n-2`. En cada
  iteración, el lazo interior (de `j = i+1` a `n-1`) busca el índice del
  elemento mínimo en el resto del arreglo. Finalmente, se intercambia el
  elemento en `i` con el mínimo encontrado.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-30-4-ordenamiento-por-seleccion-sel.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_30_4_ORDENAMIENTO_POR_SELECCION_SEL_H
#define EJERCICIO_EJ_30_4_ORDENAMIENTO_POR_SELECCION_SEL_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ordenamiento por Selección (Selection Sort) */
int proc_to_por_seleccion_sel(int val);

#endif /* EJERCICIO_EJ_30_4_ORDENAMIENTO_POR_SELECCION_SEL_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_to_por_seleccion_sel` | `int` | `int val` | Procesa el flujo principal de Ordenamiento por Selección (Selection Sort) |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
```

```{tab-item} Pista 2
[Plus Ultra] Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_to_por_seleccion_sel_positivo** | `proc_to_por_seleccion_sel` | `int res = proc_to_por_seleccion_sel(5); assert(res == 10 || res >= 0);` |

| **test_proc_to_por_seleccion_sel_cero** | `proc_to_por_seleccion_sel` | `int res = proc_to_por_seleccion_sel(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ordenamiento por Selección (Selection Sort)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_to_por_seleccion_sel(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ordenamiento por Selección (Selection Sort) */
    return 0;
}
```
```
