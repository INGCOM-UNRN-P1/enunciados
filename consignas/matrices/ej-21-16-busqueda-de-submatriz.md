

# Búsqueda de submatriz
> **ID:** `ej-21-16-busqueda-de-submatriz` · **Unidad:** 2 (Tipos Compuestos y Direccionamiento)
 · **Tema:** `matrices` / `matrices_2d`
 · **Bloom:** B4 (Analizar) · **Dificultad:** Avanzada
 · **Carga:** ~35 min · **Tipo:** Practica Guiada
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:arreglos`, `dep:lazos_anidados`
>
> **Etiquetas conceptuales:** `matrices`, `busqueda`, `submatriz`, `2d`, `algoritmos`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-21-16-busqueda-de-submatriz.ripkg`**](../../paquetes/ej-21-16-busqueda-de-submatriz.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-21-16-busqueda-de-submatriz.ripkg
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
    
    

    current_node["🎯 ej-21-16-busqueda-de-submatriz<br/><small>matrices · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 21.16 - Búsqueda de submatriz ⭐⭐⭐☆☆

Escribir una función que determine si una matriz pequeña `B` (de `k x l`) se
encuentra dentro de una matriz más grande `A` (de `m x n`). La función debe
devolver las coordenadas de la esquina superior izquierda de la primera
ocurrencia, o `(-1, -1)` si no se encuentra.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->


## 📋 Prototipos y Cabecera (`ej-21-16-busqueda-de-submatriz.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_21_16_BUSQUEDA_DE_SUBMATRIZ_H
#define EJERCICIO_EJ_21_16_BUSQUEDA_DE_SUBMATRIZ_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Búsqueda de submatriz */
int proc_usqueda_de_submatriz(int val);

#endif /* EJERCICIO_EJ_21_16_BUSQUEDA_DE_SUBMATRIZ_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_usqueda_de_submatriz` | `int` | `int val` | Procesa el flujo principal de Búsqueda de submatriz |






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

| **test_proc_usqueda_de_submatriz_positivo** | `proc_usqueda_de_submatriz` | `int res = proc_usqueda_de_submatriz(5); assert(res == 10 || res >= 0);` |

| **test_proc_usqueda_de_submatriz_cero** | `proc_usqueda_de_submatriz` | `int res = proc_usqueda_de_submatriz(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Búsqueda de submatriz
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_usqueda_de_submatriz(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Búsqueda de submatriz */
    return 0;
}
```
```
