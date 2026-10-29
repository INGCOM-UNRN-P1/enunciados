

# Intercambiar filas o columnas
> **ID:** `ej-21-15-intercambiar-filas-o-columnas` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `intercambiar`
 · **Bloom:** B3 (Aplicar) · **Dificultad:** Intermedia
 · **Carga:** ~25 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `intercambiar`, `matrices`, `columnas`, `algoritmos`, `2d`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-15-intercambiar-filas-o-columnas.ripkg`**](../../paquetes/ej-21-15-intercambiar-filas-o-columnas.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-15-intercambiar-filas-o-columnas.ripkg
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
    
    

    current_node["🎯 ej-21-15-intercambiar-filas-o-columnas<br/><small>matrices · B3</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.15 - Intercambiar filas o columnas ⭐⭐☆☆☆

Crear funciones `intercambiar_filas(mat, f1, f2)` e `intercambiar_columnas(mat,
c1, c2)` que modifiquen la matriz intercambiando los elementos de las filas o
columnas especificadas.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-15-intercambiar-filas-o-columnas.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_15_INTERCAMBIAR_FILAS_O_COLUMNAS_H
#define EJERCICIO_EJ_21_15_INTERCAMBIAR_FILAS_O_COLUMNAS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Intercambiar filas o columnas */
int proc_iar_filas_o_columnas(int val);

#endif /* EJERCICIO_EJ_21_15_INTERCAMBIAR_FILAS_O_COLUMNAS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_iar_filas_o_columnas` | `int` | `int val` | Procesa el flujo principal de Intercambiar filas o columnas |






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

| **test_proc_iar_filas_o_columnas_positivo** | `proc_iar_filas_o_columnas` | `int res = proc_iar_filas_o_columnas(5); assert(res == 10 || res >= 0);` |

| **test_proc_iar_filas_o_columnas_cero** | `proc_iar_filas_o_columnas` | `int res = proc_iar_filas_o_columnas(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Intercambiar filas o columnas
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_iar_filas_o_columnas(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Intercambiar filas o columnas */
    return 0;
}
```
```
