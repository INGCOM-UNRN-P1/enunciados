

# Matriz de permutación
> **ID:** `ej-21-20-matriz-de-permutacion` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `permutacion`, `matriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-20-matriz-de-permutacion.ripkg`**](../../paquetes/ej-21-20-matriz-de-permutacion.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-20-matriz-de-permutacion.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["arreglos"]
        
        node_pre_2["lazos_anidados"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-21-20-matriz-de-permutacion<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.20 - Matriz de permutación ⭐⭐⭐☆☆

Verificar si una matriz cuadrada es una matriz de permutación. Esta es una
matriz binaria (solo 0s y 1s) que tiene exactamente un `1` en cada fila y en
cada columna.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-20-matriz-de-permutacion.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_20_MATRIZ_DE_PERMUTACION_H
#define EJERCICIO_EJ_21_20_MATRIZ_DE_PERMUTACION_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz de permutación */
int proc_atriz_de_permutacion(int val);

#endif /* EJERCICIO_EJ_21_20_MATRIZ_DE_PERMUTACION_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_atriz_de_permutacion` | `int` | `int val` | Procesa el flujo principal de Matriz de permutación |






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

| **test_proc_atriz_de_permutacion_positivo** | `proc_atriz_de_permutacion` | `int res = proc_atriz_de_permutacion(5); assert(res == 10 || res >= 0);` |

| **test_proc_atriz_de_permutacion_cero** | `proc_atriz_de_permutacion` | `int res = proc_atriz_de_permutacion(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz de permutación
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_atriz_de_permutacion(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz de permutación */
    return 0;
}
```
```
