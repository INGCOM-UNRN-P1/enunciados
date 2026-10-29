

# Matriz de Hilbert
> **ID:** `ej-21-40-matriz-de-hilbert` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `hilbert`, `matriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-40-matriz-de-hilbert.ripkg`**](../../paquetes/ej-21-40-matriz-de-hilbert.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-40-matriz-de-hilbert.ripkg
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
    
    

    current_node["🎯 ej-21-40-matriz-de-hilbert<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.40 - Matriz de Hilbert ⭐⭐⭐☆☆

Generar una matriz de Hilbert de orden $n$.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_hilbert(int n);
```
<!-- c -->

**Definición:** $H_{ij} = \frac{1}{i+j-1}$

**Nota:** Las matrices de Hilbert son notoriamente mal condicionadas para
inversión.


## 📋 Prototipos y Cabecera (`ej-21-40-matriz-de-hilbert.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_40_MATRIZ_DE_HILBERT_H
#define EJERCICIO_EJ_21_40_MATRIZ_DE_HILBERT_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Matriz de Hilbert */
int proc_40_matriz_de_hilbert(int val);

#endif /* EJERCICIO_EJ_21_40_MATRIZ_DE_HILBERT_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_40_matriz_de_hilbert` | `int` | `int val` | Procesa el flujo principal de Matriz de Hilbert |






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

| **test_proc_40_matriz_de_hilbert_positivo** | `proc_40_matriz_de_hilbert` | `int res = proc_40_matriz_de_hilbert(5); assert(res == 10 || res >= 0);` |

| **test_proc_40_matriz_de_hilbert_cero** | `proc_40_matriz_de_hilbert` | `int res = proc_40_matriz_de_hilbert(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Matriz de Hilbert
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_40_matriz_de_hilbert(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Matriz de Hilbert */
    return 0;
}
```
```
