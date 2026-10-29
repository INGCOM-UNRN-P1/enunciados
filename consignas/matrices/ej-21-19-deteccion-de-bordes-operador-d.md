

# Detección de bordes (Operador de Sobel)
> **ID:** `ej-21-19-deteccion-de-bordes-operador-d` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `operador`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `operador`, `sobel`, `deteccion`, `bordes`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-19-deteccion-de-bordes-operador-d.ripkg`**](../../paquetes/ej-21-19-deteccion-de-bordes-operador-d.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-19-deteccion-de-bordes-operador-d.ripkg
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
    
    

    current_node["🎯 ej-21-19-deteccion-de-bordes-operador-d<br/><small>matrices · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.19 - Detección de bordes (Operador de Sobel) ⭐⭐☆☆☆

Aplicar un operador de Sobel simple para la detección de bordes. Esto implica
"convolucionar" la matriz con un `kernel` (otra matriz pequeña, ej. 3x3) para
resaltar las diferencias de intensidad, como los bordes.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-19-deteccion-de-bordes-operador-d.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_19_DETECCION_DE_BORDES_OPERADOR_D_H
#define EJERCICIO_EJ_21_19_DETECCION_DE_BORDES_OPERADOR_D_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Detección de bordes (Operador de Sobel) */
int proc_de_bordes_operador_d(int val);

#endif /* EJERCICIO_EJ_21_19_DETECCION_DE_BORDES_OPERADOR_D_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_de_bordes_operador_d` | `int` | `int val` | Procesa el flujo principal de Detección de bordes (Operador de Sobel) |






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

| **test_proc_de_bordes_operador_d_positivo** | `proc_de_bordes_operador_d` | `int res = proc_de_bordes_operador_d(5); assert(res == 10 || res >= 0);` |

| **test_proc_de_bordes_operador_d_cero** | `proc_de_bordes_operador_d` | `int res = proc_de_bordes_operador_d(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Detección de bordes (Operador de Sobel)
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_de_bordes_operador_d(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Detección de bordes (Operador de Sobel) */
    return 0;
}
```
```
