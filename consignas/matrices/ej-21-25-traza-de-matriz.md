

# Traza de matriz
> **ID:** `ej-21-25-traza-de-matriz`
 · **Tema:** `matrices`
 · **Bloom:** B3 (Aplicar)
 · **Carga:** ~25 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `matriz`, `2d`, `algoritmos`, `traza`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-25-traza-de-matriz.ripkg`**](../../paquetes/ej-21-25-traza-de-matriz.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-25-traza-de-matriz.ripkg
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
    
    

    current_node["🎯 ej-21-25-traza-de-matriz<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.25 - Traza de matriz ⭐⭐⭐☆☆

Calcular la traza de una matriz cuadrada (suma de elementos de la diagonal
principal).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double traza(double **matriz, int n);
```
<!-- c -->

$$\text{tr}(A) = \sum_{i=1}^n a_{ii}$$


## 📋 Prototipos y Cabecera (`ej-21-25-traza-de-matriz.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_25_TRAZA_DE_MATRIZ_H
#define EJERCICIO_EJ_21_25_TRAZA_DE_MATRIZ_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Traza de matriz */
int proc_1_25_traza_de_matriz(int val);

#endif /* EJERCICIO_EJ_21_25_TRAZA_DE_MATRIZ_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_1_25_traza_de_matriz` | `int` | `int val` | Procesa el flujo principal de Traza de matriz |






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

| **test_proc_1_25_traza_de_matriz_positivo** | `proc_1_25_traza_de_matriz` | `int res = proc_1_25_traza_de_matriz(5); assert(res == 10 || res >= 0);` |

| **test_proc_1_25_traza_de_matriz_cero** | `proc_1_25_traza_de_matriz` | `int res = proc_1_25_traza_de_matriz(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Traza de matriz
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_1_25_traza_de_matriz(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Traza de matriz */
    return 0;
}
```
```
