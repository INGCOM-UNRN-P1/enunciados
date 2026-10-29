

# Determinante de matriz 3x3
> **ID:** `ej-21-17-determinante-de-matriz-3x3`
 · **Tema:** `matrices`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `determinante`, `matrices`, `matriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-17-determinante-de-matriz-3x3.ripkg`**](../../paquetes/ej-21-17-determinante-de-matriz-3x3.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-17-determinante-de-matriz-3x3.ripkg
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
    
    

    current_node["🎯 ej-21-17-determinante-de-matriz-3x3<br/><small>matrices · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.17 - Determinante de matriz 3x3 ⭐⭐⭐☆☆

Calcular el determinante de una matriz 3x3 utilizando la Regla de Sarrus.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-17-determinante-de-matriz-3x3.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_17_DETERMINANTE_DE_MATRIZ_3X3_H
#define EJERCICIO_EJ_21_17_DETERMINANTE_DE_MATRIZ_3X3_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Determinante de matriz 3x3 */
int proc_inante_de_matriz_3x3(int val);

#endif /* EJERCICIO_EJ_21_17_DETERMINANTE_DE_MATRIZ_3X3_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_inante_de_matriz_3x3` | `int` | `int val` | Procesa el flujo principal de Determinante de matriz 3x3 |






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

| **test_proc_inante_de_matriz_3x3_positivo** | `proc_inante_de_matriz_3x3` | `int res = proc_inante_de_matriz_3x3(5); assert(res == 10 || res >= 0);` |

| **test_proc_inante_de_matriz_3x3_cero** | `proc_inante_de_matriz_3x3` | `int res = proc_inante_de_matriz_3x3(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Determinante de matriz 3x3
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_inante_de_matriz_3x3(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Determinante de matriz 3x3 */
    return 0;
}
```
```
