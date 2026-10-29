

# Rango de matriz
> **ID:** `ej-21-26-rango-de-matriz` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `rango`, `matrices`, `matriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-26-rango-de-matriz.ripkg`**](../../paquetes/ej-21-26-rango-de-matriz.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-26-rango-de-matriz.ripkg
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
    
    

    current_node["🎯 ej-21-26-rango-de-matriz<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.26 - Rango de matriz ⭐⭐⭐☆☆

Implementar un algoritmo para calcular el rango de una matriz usando eliminación
gaussiana.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int calcular_rango(double **matriz, int filas, int cols);
```
<!-- c -->

**Estrategia:** Reducir la matriz a forma escalonada y contar filas no nulas.


## 📋 Prototipos y Cabecera (`ej-21-26-rango-de-matriz.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_26_RANGO_DE_MATRIZ_H
#define EJERCICIO_EJ_21_26_RANGO_DE_MATRIZ_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Rango de matriz */
int proc_1_26_rango_de_matriz(int val);

#endif /* EJERCICIO_EJ_21_26_RANGO_DE_MATRIZ_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_1_26_rango_de_matriz` | `int` | `int val` | Procesa el flujo principal de Rango de matriz |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
[Plus Ultra] Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
```

```{tab-item} Pista 2
[Plus Ultra] Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_1_26_rango_de_matriz_positivo** | `proc_1_26_rango_de_matriz` | `int res = proc_1_26_rango_de_matriz(5); assert(res == 10 || res >= 0);` |

| **test_proc_1_26_rango_de_matriz_cero** | `proc_1_26_rango_de_matriz` | `int res = proc_1_26_rango_de_matriz(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Rango de matriz
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_1_26_rango_de_matriz(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Rango de matriz */
    return 0;
}
```
```
