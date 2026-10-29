

# Librería de Ordenamiento y Búsqueda
> **ID:** `ej-7-12-libreria-de-ordenamiento-y-bus`
 · **Tema:** `librerias`
 · **Bloom:** B4 (Analizar)
 · **Carga:** ~35 min
>
> **🏷️ Prerrequisitos temáticos (tags):** `dep:funciones`, `dep:estructuras`
>
> **Etiquetas conceptuales:** `fundamentos`, `headers`, `busqueda`, `libreria`, `ordenamiento`


::: {admonition} 📦 Paquete de Verificación Local (Ripley)
:class: tip

Para compilar, resolver y autoevaluar tu entrega con pruebas unitarias en tu máquina:

- [📥 **Descargar paquete `ej-7-12-libreria-de-ordenamiento-y-bus.ripkg`**](../../paquetes/ej-7-12-libreria-de-ordenamiento-y-bus.ripkg)

Ejecución con el asistente de cátedra:
```bash
ripley run ej-7-12-libreria-de-ordenamiento-y-bus.ripkg
```
:::





### 🗺️ Itinerario Pedagógico

```mermaid
flowchart LR
    
    subgraph Prerrequisitos ["🏷️ Prerrequisitos (dep:*)"]
        
        node_pre_1["funciones"]
        
        node_pre_2["estructuras"]
        
    end
    
    node_pre_1 --> current_node
    
    node_pre_2 --> current_node
    
    

    current_node["🎯 ej-7-12-libreria-de-ordenamiento-y-bus<br/><small>librerias · B4</small>"]

    
```


## 📖 Consigna

### Ejercicio 7.12 - Librería de Ordenamiento y Búsqueda ⭐⭐⭐⭐☆

Creá `sort_search.h` y `sort_search.c`:
- `void sort_burbuja(int *v, size_t n)`
- `void sort_seleccion(int *v, size_t n)`
- `void sort_insercion(int *v, size_t n)`
- `ssize_t busqueda_binaria(const int *v, size_t n, int elem)`

:::{hint} Lógica y Consideraciones
- Recordá que `busqueda_binaria` requiere que el arreglo esté previamente ordenado.
:::
<!-- {hint} Lógica y Consideraciones -->

---


## 📋 Prototipos y Cabecera (`ej-7-12-libreria-de-ordenamiento-y-bus.h`)

```{code-block} c
#ifndef EJERCICIO_EJ_7_12_LIBRERIA_DE_ORDENAMIENTO_Y_BUS_H
#define EJERCICIO_EJ_7_12_LIBRERIA_DE_ORDENAMIENTO_Y_BUS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Procesa el flujo principal de Librería de Ordenamiento y Búsqueda */
int proc_e_ordenamiento_y_bus(int val);

#endif /* EJERCICIO_EJ_7_12_LIBRERIA_DE_ORDENAMIENTO_Y_BUS_H */
```



## ⚙️ Especificación de Funciones

| Función | Retorno | Parámetros | Descripción |
| :--- | :--- | :--- | :--- |

| `proc_e_ordenamiento_y_bus` | `int` | `int val` | Procesa el flujo principal de Librería de Ordenamiento y Búsqueda |






## 💡 Pistas Progresivas

````{tab-set}

```{tab-item} Pista 1
Recordá que `busqueda_binaria` requiere que el arreglo esté previamente ordenado.
```

````



## 🧪 Casos de Prueba

| Prueba Unitaria | Función Objetivo | Verificación |
| :--- | :--- | :--- |

| **test_proc_e_ordenamiento_y_bus_positivo** | `proc_e_ordenamiento_y_bus` | `int res = proc_e_ordenamiento_y_bus(5); assert(res == 10 || res >= 0);` |

| **test_proc_e_ordenamiento_y_bus_cero** | `proc_e_ordenamiento_y_bus` | `int res = proc_e_ordenamiento_y_bus(0); assert(res == 0);` |






## ✓ Solución Modelo de Cátedra

```{dropdown} 🔍 Revelar solución canónica en C
:open: false

```{code-block} c
/*
 * Ejercicio: Librería de Ordenamiento y Búsqueda
 * Cátedra Programación I - UNRN
 */

#include <stdio.h>


int proc_e_ordenamiento_y_bus(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    /* TODO: Implementación de Librería de Ordenamiento y Búsqueda */
    return 0;
}
```
```
