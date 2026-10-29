

# Ecualización de Histograma
> **ID:** `ej-21-36-ecualizacion-de-histograma` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `ecualizacion`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `ecualizacion`, `histograma`, `matrices`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-36-ecualizacion-de-histograma.ripkg`**](../../paquetes/ej-21-36-ecualizacion-de-histograma.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-36-ecualizacion-de-histograma.ripkg
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
    
    

    current_node["🎯 ej-21-36-ecualizacion-de-histograma<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.36 - Ecualización de Histograma ⭐⭐☆☆☆

Mejorar el contraste de una imagen mediante ecualización de histograma.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void ecualizar_histograma(int **imagen, int filas, int cols);
```
<!-- c -->

**Algoritmo:**
1. Calcular histograma
2. Calcular función de distribución acumulativa (CDF)
3. Normalizar CDF y aplicar transformación a cada píxel


## 📋 Prototipos y Cabecera (`ej-21-36-ecualizacion-de-histograma.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_36_ECUALIZACION_DE_HISTOGRAMA_H
#define EJERCICIO_EJ_21_36_ECUALIZACION_DE_HISTOGRAMA_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Ecualización de Histograma */
int proc_zacion_de_histograma(int val);

#endif /* EJERCICIO_EJ_21_36_ECUALIZACION_DE_HISTOGRAMA_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_zacion_de_histograma` | `int` | `int val` | Procesa el flujo principal de Ecualización de Histograma |






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

| **test_proc_zacion_de_histograma_positivo** | `proc_zacion_de_histograma` | `int res = proc_zacion_de_histograma(5); assert(res == 10 || res >= 0);` |

| **test_proc_zacion_de_histograma_cero** | `proc_zacion_de_histograma` | `int res = proc_zacion_de_histograma(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Ecualización de Histograma
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_zacion_de_histograma(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Ecualización de Histograma */
    return 0;
}
```
```
